//���㷶��
#if 0
#include <stdio.h>
#include <limits.h>

#define V 6 // ����ͼ�ж��������

int minDistance(int dist[], int visited[]) 
{
    int min = INT_MAX, min_index;
    // �ҵ�������С��δ�����ʵĶ���
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
    int dist[V]; // �洢Դ�㵽�����������̾���
    int visited[V]; // ��Ƕ����Ƿ񱻷���
    int path[V]; // �洢���·����ÿ�������ǰ���ڵ�

    // ��ʼ��
    for (int i = 0; i < V; i++) 
    {
        dist[i] = INT_MAX; // �����ʼ��Ϊ�����
        visited[i] = 0; // ����δ������
        path[i] = -1; // �����ǰ���ڵ��ʼ��Ϊ-1
    }

    dist[src] = 0; // Դ�㵽����ľ���Ϊ0

    for (int count = 0; count < V - 1; count++) 
    {
        int u = minDistance(dist, visited); // �ҵ�������С��δ�����ʵĶ���
        visited[u] = 1; // ��Ǹö����ѱ�����
        for (int v = 0; v < V; v++) 
        {
            // �������δ�����ʡ�u��v֮���бߡ�dist[u]��Ϊ�������ͨ��u����ʹԴ�㵽v�ľ������
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) 
            {
                dist[v] = dist[u] + graph[u][v]; // ����Դ�㵽v����̾���
                path[v] = u; // ����v��ǰ���ڵ�Ϊu
            }
        }
    }

    // ������·��
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

//���Ӷ�O(E*logV)δ֪�ɷ�����
#if 0
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define V 6 // ����ͼ�ж��������

// ����ѽṹ��
struct MinHeapNode {
    int v;
    int dist;
};

// �����
struct MinHeap {
    int size;
    int capacity;
    int* pos;
    struct MinHeapNode** array;
};

// �����ѽڵ�
struct MinHeapNode* newMinHeapNode(int v, int dist) {
    struct MinHeapNode* node = (struct MinHeapNode*)malloc(sizeof(struct MinHeapNode));
    node->v = v;
    node->dist = dist;
    return node;
}

// ������
struct MinHeap* createMinHeap(int capacity) {
    struct MinHeap* minHeap = (struct MinHeap*)malloc(sizeof(struct MinHeap));
    minHeap->pos = (int*)malloc(capacity * sizeof(int));
    minHeap->size = 0;
    minHeap->capacity = capacity;
    minHeap->array = (struct MinHeapNode**)malloc(capacity * sizeof(struct MinHeapNode*));
    return minHeap;
}

// �������������ڵ�
void swapMinHeapNode(struct MinHeapNode** a, struct MinHeapNode** b) {
    struct MinHeapNode* t = *a;
    *a = *b;
    *b = t;
}

// ά���ѵ�����
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

// �ж϶��Ƿ�Ϊ��
int isEmpty(struct MinHeap* minHeap) {
    return minHeap->size == 0;
}

// �Ӷ���ȡ����С�ڵ�
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

// ��С���нڵ�ľ���
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

// �жϽڵ��Ƿ��ڶ���
int isInMinHeap(struct MinHeap* minHeap, int v) {
    if (minHeap->pos[v] < minHeap->size) {
        return 1;
    }
    return 0;
}

// ������·��
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

// ʹ�ö�ʵ��Dijkstra�㷨
void dijkstra(int graph[V][V], int src)
{
    int dist[V]; // �洢Դ�㵽�����������̾���
    int path[V]; // �洢���·����ÿ�������ǰ���ڵ�
    struct MinHeap* minHeap = createMinHeap(V); // ������

    // ��ʼ��
    for (int v = 0; v < V; v++)
    {
        dist[v] = INT_MAX; // �����ʼ��Ϊ�����
        path[v] = -1; // �����ǰ���ڵ��ʼ��Ϊ-1
        minHeap->array[v] = newMinHeapNode(v, dist[v]);
        minHeap->pos[v] = v;
    }

    dist[src] = 0; // Դ�㵽����ľ���Ϊ0
    decreaseKey(minHeap, src, dist[src]); // ��Դ��������

    minHeap->size = V; // �ѵĴ�СΪV

    while (!isEmpty(minHeap)) 
    {
        struct MinHeapNode* minHeapNode = extractMin(minHeap); // ȡ�����о�����С�Ľڵ�
        int u = minHeapNode->v;

        for (int v = 0; v < V; v++) 
        {
            // ���v�ڶ��С�u��v֮���бߡ�ͨ��u����ʹԴ�㵽v�ľ������
            if (isInMinHeap(minHeap, v) && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) 
            {
                dist[v] = dist[u] + graph[u][v]; // ����Դ�㵽v����̾���
                path[v] = u; // ����v��ǰ���ڵ�Ϊu
                decreaseKey(minHeap, v, dist[v]); // ���¶��нڵ�ľ���
            }
        }
    }

    // ������·��
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
////ʱ�临�Ӷ�ΪO(V^2)��Dijkstra�㷨ʵ�֣�����V��ͼ�ж��������
//int main()
//{
//    // ��ʼ����������
//    dist[start] = 0;
//    for (int i = 0; i < V; i++) 
//    {
//        if (i != start) 
//        {
//            dist[i] = INT_MAX;
//        }
//    }
//
//    // ִ��V�ε���
//    for (int i = 0; i < V; i++) 
//    {
//        // �ҵ���ǰ��̾���Ķ���
//        int minIdx = -1;//��ʼ��Ϊ�����
//        for (int j = 0; j < V; j++) 
//        {
//            if (!visited[j] && (minIdx == -1 || dist[j] < dist[minIdx])) //
//            {
//                minIdx = j;
//            }
//        }
//        visited[minIdx] = true;//��Ƿ���
//
//        // ������ö������ڵĶ���ľ���
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
////C����ʵ�ֵ�ʱ�临�Ӷ�ΪO(E*logV)��Dijkstra�㷨ʵ�֣�����V��ͼ�ж����������E��ͼ�бߵ�������
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
