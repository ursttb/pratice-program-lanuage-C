//优秀范本
#if 0
#include <stdio.h>
#include <limits.h>

#define V 6 // 定义图中顶点的数量

int minDistance(int dist[], int visited[]) 
{
    int min = INT_MAX, min_index;
    // 找到距离最小且未被访问的顶点
    for (int v = 0; v < V; v++)
    {
        if (visited[v] == 0 && dist[v] <= min) 
        {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

void dijkstra(int graph[V][V], int src)
{
    int dist[V]; // 存储源点到各个顶点的最短距离
    int visited[V]; // 标记顶点是否被访问
    int path[V]; // 存储最短路径中每个顶点的前驱节点

    // 初始化
    for (int i = 0; i < V; i++) 
    {
        dist[i] = INT_MAX; // 距离初始化为无穷大
        visited[i] = 0; // 顶点未被访问
        path[i] = -1; // 顶点的前驱节点初始化为-1
    }

    dist[src] = 0; // 源点到自身的距离为0

    for (int count = 0; count < V - 1; count++) 
    {
        int u = minDistance(dist, visited); // 找到距离最小且未被访问的顶点
        visited[u] = 1; // 标记该顶点已被访问
        for (int v = 0; v < V; v++) 
        {
            // 如果顶点未被访问、u和v之间有边、dist[u]不为无穷大且通过u可以使源点到v的距离更短
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) 
            {
                dist[v] = dist[u] + graph[u][v]; // 更新源点到v的最短距离
                path[v] = u; // 更新v的前驱节点为u
            }
        }
    }

    // 输出最短路径
    printf("Vertex\t Distance\tPath\n");
    for (int i = 0; i < V; i++)
    {
        printf("%d\t %d\t\t", i, dist[i]);
        printf("%d ", i);
        int j = i;
        while (path[j] != -1) 
        {
            printf("<- %d ", path[j]);
            j = path[j];
        }
        printf("\n");
    }
}

int main()
{
    int graph[V][V] = { {0, 4, 0, 0, 0, 0},
                       {4, 0, 8, 0, 0, 0},
                       {0, 8, 0, 7, 0, 4},
                       {0, 0, 7, 0, 9, 14},
                       {0, 0, 0, 9, 0, 10},
                       {0, 0, 4, 14, 10, 0} };
    dijkstra(graph, 0);
    return 0;
}
#endif

//复杂度O(E*logV)未知可否运行
#if 0
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define V 6 // 定义图中顶点的数量

// 定义堆结构体
struct MinHeapNode {
    int v;
    int dist;
};

// 定义堆
struct MinHeap {
    int size;
    int capacity;
    int* pos;
    struct MinHeapNode** array;
};

// 创建堆节点
struct MinHeapNode* newMinHeapNode(int v, int dist) {
    struct MinHeapNode* node = (struct MinHeapNode*)malloc(sizeof(struct MinHeapNode));
    node->v = v;
    node->dist = dist;
    return node;
}

// 创建堆
struct MinHeap* createMinHeap(int capacity) {
    struct MinHeap* minHeap = (struct MinHeap*)malloc(sizeof(struct MinHeap));
    minHeap->pos = (int*)malloc(capacity * sizeof(int));
    minHeap->size = 0;
    minHeap->capacity = capacity;
    minHeap->array = (struct MinHeapNode**)malloc(capacity * sizeof(struct MinHeapNode*));
    return minHeap;
}

// 交换堆中两个节点
void swapMinHeapNode(struct MinHeapNode** a, struct MinHeapNode** b) {
    struct MinHeapNode* t = *a;
    *a = *b;
    *b = t;
}

// 维护堆的性质
void minHeapify(struct MinHeap* minHeap, int idx) {
    int smallest, left, right;
    smallest = idx;
    left = 2 * idx + 1;
    right = 2 * idx + 2;

    if (left < minHeap->size && minHeap->array[left]->dist < minHeap->array[smallest]->dist) {
        smallest = left;
    }

    if (right < minHeap->size && minHeap->array[right]->dist < minHeap->array[smallest]->dist) {
        smallest = right;
    }

    if (smallest != idx) {
        struct MinHeapNode* smallestNode = minHeap->array[smallest];
        struct MinHeapNode* idxNode = minHeap->array[idx];

        minHeap->pos[smallestNode->v] = idx;
        minHeap->pos[idxNode->v] = smallest;

        swapMinHeapNode(&minHeap->array[smallest], &minHeap->array[idx]);

        minHeapify(minHeap, smallest);
    }
}

// 判断堆是否为空
int isEmpty(struct MinHeap* minHeap) {
    return minHeap->size == 0;
}

// 从堆中取出最小节点
struct MinHeapNode* extractMin(struct MinHeap* minHeap) {
    if (isEmpty(minHeap)) {
        return NULL;
    }

    struct MinHeapNode* root = minHeap->array[0];

    struct MinHeapNode* lastNode = minHeap->array[minHeap->size - 1];
    minHeap->array[0] = lastNode;

    minHeap->pos[root->v] = minHeap->size - 1;
    minHeap->pos[lastNode->v] = 0;

    --minHeap->size;

    minHeapify(minHeap, 0);

    return root;
}

// 减小堆中节点的距离
void decreaseKey(struct MinHeap* minHeap, int v, int dist) {
    int i = minHeap->pos[v];
    minHeap->array[i]->dist = dist;

    while (i && minHeap->array[i]->dist < minHeap->array[(i - 1) / 2]->dist) {
        minHeap->pos[minHeap->array[i]->v] = (i - 1) / 2;
        minHeap->pos[minHeap->array[(i - 1) / 2]->v] = i;
        swapMinHeapNode(&minHeap->array[i], &minHeap->array[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// 判断节点是否在堆中
int isInMinHeap(struct MinHeap* minHeap, int v) {
    if (minHeap->pos[v] < minHeap->size) {
        return 1;
    }
    return 0;
}

// 输出最短路径
void printPath(int path[], int n) {
    printf("Vertex\t Distance\tPath\n");
    for (int i = 0; i < V; i++) {
        printf("%d\t %d\t\t", i, path[i]);
        printf("%d ", i);
        int j = i;
        while (path[j] != -1) {
            printf("<- %d ", path[j]);
            j = path[j];
        }
        printf("\n");
    }
}

// 使用堆实现Dijkstra算法
void dijkstra(int graph[V][V], int src)
{
    int dist[V]; // 存储源点到各个顶点的最短距离
    int path[V]; // 存储最短路径中每个顶点的前驱节点
    struct MinHeap* minHeap = createMinHeap(V); // 创建堆

    // 初始化
    for (int v = 0; v < V; v++)
    {
        dist[v] = INT_MAX; // 距离初始化为无穷大
        path[v] = -1; // 顶点的前驱节点初始化为-1
        minHeap->array[v] = newMinHeapNode(v, dist[v]);
        minHeap->pos[v] = v;
    }

    dist[src] = 0; // 源点到自身的距离为0
    decreaseKey(minHeap, src, dist[src]); // 将源点插入堆中

    minHeap->size = V; // 堆的大小为V

    while (!isEmpty(minHeap)) 
    {
        struct MinHeapNode* minHeapNode = extractMin(minHeap); // 取出堆中距离最小的节点
        int u = minHeapNode->v;

        for (int v = 0; v < V; v++) 
        {
            // 如果v在堆中、u和v之间有边、通过u可以使源点到v的距离更短
            if (isInMinHeap(minHeap, v) && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) 
            {
                dist[v] = dist[u] + graph[u][v]; // 更新源点到v的最短距离
                path[v] = u; // 更新v的前驱节点为u
                decreaseKey(minHeap, v, dist[v]); // 更新堆中节点的距离
            }
        }
    }

    // 输出最短路径
    printPath(path, V);
}

int main() {
    int graph[V][V] = { {0, 4, 0, 0, 0, 0},
                       {4, 0, 8, 0, 0, 0},
                       {0, 8, 0, 7, 0, 4},
                       {0, 0, 7, 0, 9, 14},
                       {0, 0, 0, 9, 0, 10},
                       {0, 0, 4, 14, 10, 0} };
    dijkstra(graph, 0);
    return 0;
}
#endif


//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
//
////时间复杂度为O(V^2)的Dijkstra算法实现，其中V是图中顶点的数量
//int main()
//{
//    // 初始化距离数组
//    dist[start] = 0;
//    for (int i = 0; i < V; i++) 
//    {
//        if (i != start) 
//        {
//            dist[i] = INT_MAX;
//        }
//    }
//
//    // 执行V次迭代
//    for (int i = 0; i < V; i++) 
//    {
//        // 找到当前最短距离的顶点
//        int minIdx = -1;//初始化为无穷大
//        for (int j = 0; j < V; j++) 
//        {
//            if (!visited[j] && (minIdx == -1 || dist[j] < dist[minIdx])) //
//            {
//                minIdx = j;
//            }
//        }
//        visited[minIdx] = true;//标记访问
//
//        // 更新与该顶点相邻的顶点的距离
//        for (int j = 0; j < V; j++)
//        {
//            if (graph[minIdx][j] != 0 && dist[minIdx] != INT_MAX && dist[minIdx] + graph[minIdx][j] < dist[j])
//            {
//                dist[j] = dist[minIdx] + graph[minIdx][j];
//            }
//        }
//    }
//	return 0;
//}
//
////C语言实现的时间复杂度为O(E*logV)的Dijkstra算法实现，其中V是图中顶点的数量，E是图中边的数量。
//#include <stdio.h>
//#include <stdlib.h>
//#include <limits.h>
//
//#define V 6
//#define INT_MAX 10010
//
//typedef struct {
//    int dest;
//    int weight;
//} Edge;
//
//typedef struct {
//    Edge* edges;
//    int num_edges;
//} Graph;
//
//Graph* create_graph() {
//    Graph* graph = (Graph*)malloc(sizeof(Graph));
//    graph->num_edges = V;
//    graph->edges = (Edge*)malloc(sizeof(Edge) * graph->num_edges);
//
//    return graph;
//}
//
//void add_edge(Graph* graph, int src, int dest, int weight) {
//    graph->edges[src].dest = dest;
//    graph->edges[src].weight = weight;
//}
//
//int min_distance(int* dist, int* visited) {
//    int min_dist = INT_MAX;
//    int min_idx = -1;
//
//    for (int i = 0; i < V; i++) {
//        if (!visited[i] && dist[i] < min_dist) {
//            min_dist = dist[i];
//            min_idx = i;
//        }
//    }
//
//    return min_idx;
//}
//
//void dijkstra(Graph* graph, int start, int* dist) {
//    int visited[V] = { 0 };
//
//    for (int i = 0; i < V; i++) {
//        dist[i] = INT_MAX;
//    }
//
//    dist[start] = 0;
//
//    for (int i = 0; i < V - 1; i++) {
//        int u = min_distance(dist, visited);
//        visited[u] = 1;
//
//        for (int j = 0; j < graph->num_edges; j++) {
//            int v = graph->edges[j].dest;
//            int w = graph->edges[j].weight;
//
//            if (!visited[v] && dist[u] != INT_MAX && dist[u] + w < dist[v]) {
//                dist[v] = dist[u] + w;
//            }
//        }
//    }
//}
//
//int main() {
//    Graph* graph = create_graph();
//
//    add_edge(graph, 0, 1, 5);
//    add_edge(graph, 0, 2, 3);
//    add_edge(graph, 1, 3, 6);
//    add_edge(graph, 1, 4, 2);
//    add_edge(graph, 2, 1, 1);
//    add_edge(graph, 2, 4, 1);
//    add_edge(graph, 2, 5, 4);
//    add_edge(graph, 3, 4, 4);
//    add_edge(graph, 4, 5, 2);
//
//    int dist[V];
//
//    dijkstra(graph, 0, dist);
//
//    for (int i = 0; i < V; i++) {
//        printf("Shortest distance from 0 to %d is %d\n", i, dist[i]);
//    }
//
//    return 0;
//}
