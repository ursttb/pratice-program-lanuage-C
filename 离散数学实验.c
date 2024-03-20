#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

/****************************************************************************************
* 说明:本程序含括离散数学实验一至六
* 其中实验六求欧拉图难度有点高，本人只写出两个成功代码，并根据此改出一个求哈密顿图代码
* 使用方法将对应实验程序 #if 0改成#if 1即可调试运行
* 注意只能有一个 #if 1否则会报错
****************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//实验一：
/*
用化简命题逻辑公式的方法设计一个5人表决开关电路，要求3人以上（含3人）同意则表决通过（表决开关亮）。
*/
#if 0
#include <stdio.h>
int main() {
    int a, b, c, d, e;      
    printf("Enter the vote of A (1 for agree, 0 for disagree): ");
    scanf("%d", &a);
    printf("Enter the vote of B (1 for agree, 0 for disagree): ");
    scanf("%d", &b);
    printf("Enter the vote of C (1 for agree, 0 for disagree): ");
    scanf("%d", &c);
    printf("Enter the vote of D (1 for agree, 0 for disagree): ");
    scanf("%d", &d);
    printf("Enter the vote of E (1 for agree, 0 for disagree): ");
    scanf("%d", &e);
    if ((a && b && c) || (a && b && d) || (a && b && e) || (a && c && d) || (a && c && e) || (a && d && e) || (b && c && d) || (b && c && e) || (b && d && e) || (c && d && e)) 
    {
        printf("Vote passed. The switch is ON.\n");
    }
    else 
    {
        printf("Vote failed. The switch is OFF.\n");
    }
    return 0;
}

//参考答案
//#include<stdio.h>
//int vote(int a, int b, int c, int d, int e)
//{
//	//五人中任取三人的不同的取法有10种。
//	if (a && b && c || a && b && d || a && b && e || a && c && d || a && c && e || a && d && e || b && c && d || b && c && e || b && d && e || c && d && e)
//		return 1;
//	else
//		return 0;
//}
//
//void main()
//{
//	int a, b, c, d, e;
//	printf("请输入第五个人的表决值（0或1，空格分开）：");
//	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
//	if (vote(a, b, c, d, e))
//		printf("很好，表决通过！\n");
//	else
//		printf("遗憾，表决没有通过！\n");
//}
#endif

//实验二：
/*
实验用例：根据下面的命题，试用逻辑推理方法确定谁是作案者，写出推理过程。
（1）营业员A或B偷了手表；
（2）若A作案，则作案不在营业时间；
（3）若B提供的证据正确，则货柜末上锁；
（4）若B提供的证据不正确，则作案发生在营业时间；
（5）货柜上了锁。
*/
#if 0
//定义事件
//有人偷了手表
int A;//A偷了
int B;//B偷了
//作案在营业时间
int P;
//B提供的证据正确
int Q;
//货柜上锁
int R;
int main()
{
    for (A = 0; A <= 1; A++)
    {
        for (B = 0; B <= 1; B++)
        {
            for ( P = 0; P <= 1; P++)
            {
                for (Q = 0; Q <= 1; Q++)
                {
                    for (R = 0; R <= 1; R++)
                    {
                        if ((A || B) &&
                            (!A || !P) &&
                            (!Q || !R) &&
                            (Q || P) &&
                            R)
                        {
                            if (A == 1)printf("A是作案者\n"); else printf("A不是作案者\n");
                            if (B == 1)printf("B是作案者\n"); else printf("B不是作案者\n");
                        }
                    }
                }
            }
        }
    }
    return 0;
}
#endif

//实验三：
/*
【实验目的】掌握用计算机求集合的交、并、差和补运算的方法。
【实验内容】编程实现集合的交、并、差和补运算。
【实验原理和方法】
（1）用数组A，B，C，E表示集合。输入数组A，B，E（全集），输入数据时要求检查数据是否重复（集合中的数据要求不重复），要求集合A，B是集合E的子集。
以下每一个运算都要求先将集合C置成空集。
*/
/*
（2）二个集合的交运算：把数组A中元素逐一与数组B中的元素进行比较，将相同的元素放在数组C中，数组C便是集合A和集合B的交。
C语言算法：
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            if(a[i]==b[j]) c[k++]=a[i];
*/
#if 0
#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int A[MAX_SIZE], B[MAX_SIZE], C[MAX_SIZE], E[MAX_SIZE];
    int nA, nB, nE, nC = 0;
    int i, j, k;
    int isDuplicate, isSubset;

    // 输入集合A
    printf("Enter the number of elements in set A: ");
    scanf("%d", &nA);
    printf("Enter the elements of set A: ");
    for (i = 0; i < nA; i++) {
        isDuplicate = 0;
        scanf("%d", &A[i]);
        // 检查是否有重复元素
        for (j = 0; j < i; j++) {
            if (A[i] == A[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (isDuplicate) {
            printf("Duplicate element detected, please enter again.\n");
            i--;
        }
    }

    // 输入集合B
    printf("Enter the number of elements in set B: ");
    scanf("%d", &nB);
    printf("Enter the elements of set B: ");
    for (i = 0; i < nB; i++) {
        isDuplicate = 0;
        scanf("%d", &B[i]);
        // 检查是否有重复元素
        for (j = 0; j < i; j++) {
            if (B[i] == B[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (isDuplicate) {
            printf("Duplicate element detected, please enter again.\n");
            i--;
        }
    }

    // 输入全集E
    printf("Enter the number of elements in set E: ");
    scanf("%d", &nE);
    printf("Enter the elements of set E: ");
    for (i = 0; i < nE; i++) {
        scanf("%d", &E[i]);
    }

    // 检查集合A和B是否是集合E的子集
    isSubset = 1;
    for (i = 0; i < nA; i++) {
        for (j = 0; j < nE; j++) {
            if (A[i] == E[j]) {
                break;
            }
        }
        if (j == nE) {
            isSubset = 0;
            break;
        }
    }
    if (isSubset) {
        for (i = 0; i < nB; i++) {
            for (j = 0; j < nE; j++) {
                if (B[i] == E[j]) {
                    break;
                }
            }
            if (j == nE) {
                isSubset = 0;
                break;
            }
        }
    }
    if (!isSubset) {
        printf("Set A or B is not a subset of set E.\n");
        return 0;
    }

    // 交运算
    for (i = 0; i < nA; i++) {
        for (j = 0; j < nB; j++) {
            if (A[i] == B[j]) {
                // 检查是否已经在集合C中
                isDuplicate = 0;
                for (k = 0; k < nC; k++) {
                    if (A[i] == C[k]) {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate) {
                    C[nC++] = A[i];
                }
                break;
            }
        }
    }
    printf("Intersection of set A and B: ");
    for (i = 0; i < nC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    // 并运算
    for (i = 0; i < nA; i++) {
        // 检查是否已经在集合C中
        isDuplicate = 0;
        for (j = 0; j < nC; j++) {
            if (A[i] == C[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            C[nC++] = A[i];
        }
    }
    for (i = 0; i < nB; i++) {
        // 检查是否已经在集合C中
        isDuplicate = 0;
        for (j = 0; j < nC; j++) {
            if (B[i] == C[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            C[nC++] = B[i];
        }
    }
    printf("Union of set A and B: ");
    for (i = 0; i < nC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    // 差运算
    for (i = 0; i < nA; i++) {
        // 检查是否已经在集合C中
        isDuplicate = 0;
        for (j = 0; j < nC; j++) {
            if (A[i] == C[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            C[nC++] = A[i];
        }
    }
    for (i = 0; i < nB; i++) {
        for (j = 0; j < nC; j++) {
            if (B[i] == C[j]) {
                // 从集合C中删除相同的元素
                for (k = j; k < nC - 1; k++) {
                    C[k] = C[k + 1];
                }
                nC--;
                break;
            }
        }
    }
    printf("Difference of set A and B: ");
    for (i = 0; i < nC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    // 补运算
    nC = 0;
    for (i = 0; i < nE; i++) {
        isDuplicate = 0;
        for (j = 0; j < nA; j++) {
            if (E[i] == A[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            C[nC++] = E[i];
        }
    }
    printf("Complement of set A with respect to set E: ");
    for (i = 0; i < nC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

#endif
/*
（3）二个集合的并运算：把数组A中各个元素先保存在数组C中。将数组B中的元素逐一与数组B中的元素进行比较，把不相同的元素添加到数组C中，数组C便是集合A和集合B的并。
    for(i=0;i<m;i++)
            c[i]=a[i];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                if(b[i]==c[j]) break;
            if(j==m){ c[m+k]=b[i];k++;}
        }
（4）二个集合的差运算：把数组A中各个元素先保存在数组C中。将数组B中的元素逐一与数组B中的元素进行比较，把相同的元素从数组C中删除，数组C便是集合A和集合B的差A-B。
C语言算法：
    for(i=0;i<m;i++)
        c[i]=a[i];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(b[i]==c[j])
            {
                for(k=j;k<m;k++)
                    c[k]=c[k+1];//移位
                m--;
                break;
            }
（5）集合的补运算：将数组E中的元素逐一与数组A中的元素进行比较，把不相同的元素保存到数组C中，数组C便是集合A关于集合E的补集。
     求补集是一种种特殊的集合差运算。
*/
#if 0
#include <stdio.h>
#define MAX_SIZE 100
int nA, nB, nE, nC;
int A[MAX_SIZE], B[MAX_SIZE], E[MAX_SIZE], C[MAX_SIZE];
void F1()
{
    printf("输入A元素的个数(最多%d个): ", MAX_SIZE);
    scanf("%d", &nA);
    printf("输入A的元素(用空格间隔开): ");
    for (int i = 0; i < nA; i++)
    {
        int x;
        scanf("%d", &x);
        // 检查元素是否重复
        for (int j = 0; j < i; j++) {
            if (A[j] == x) {
                printf("A中元素重复，请重新输入\n");
                return 1;
            }
        }
        A[i] = x;
    }
    printf("输入B元素的个数(最多%d个): ", MAX_SIZE);
    scanf("%d", &nB);
    printf("输入B的元素(用空格间隔开): ");
    for (int i = 0; i < nB; i++) {
        int x;
        scanf("%d", &x);
        // 检查元素是否重复
        for (int j = 0; j < i; j++) {
            if (B[j] == x) {
                printf("B中元素重复，请重新输入\n");
                return 1;
            }
        }
        B[i] = x;
    }
    printf("输入E元素的个数(最多%d个): ", MAX_SIZE);
    scanf("%d", &nE);
    printf("输入E的元素(用空格间隔开): ");
    for (int i = 0; i < nE; i++) {
        int x;
        scanf("%d", &x);
        // 检查元素是否重复
        for (int j = 0; j < i; j++) {
            if (E[j] == x) {
                printf("E中元素重复，请重新输入\n");
                return 1;
            }
        }
        E[i] = x;
    }
    // 检查集合A和B是否是集合E的子集
    for (int i = 0; i < nA; i++) {
        int found = 0;
        for (int j = 0; j < nE; j++) {
            if (A[i] == E[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("A不是E的子集\n");
            return 1;
        }
    }
    for (int i = 0; i < nB; i++) {
        int found = 0;
        for (int j = 0; j < nE; j++) {
            if (B[i] == E[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("B不是E的子集\n");
            return 1;
        }
    }
    printf("\n集合A: {");
    for (int i = 0; i < nA; i++) {
        if (i > 0) printf(", ");
        printf("%d", A[i]);
    }
    printf("}\n");
    printf("集合B: {");
    for (int i = 0; i < nB; i++) {
        if (i > 0) printf(", ");
        printf("%d", B[i]);
    }
    printf("}\n");
    printf("集合E: {");
    for (int i = 0; i < nE; i++) {
        if (i > 0) printf(", ");
        printf("%d", E[i]);
    }
    printf("}\n\n");
    printf("(1)A，B是集合E的子集\n\n");
}
void F2()
{
    int i, j, k, isDuplicate;
    // 交运算
    for (i = 0; i < nA; i++) {
        for (j = 0; j < nB; j++) {
            if (A[i] == B[j]) {
                // 检查是否已经在集合C中
                isDuplicate = 0;
                for (k = 0; k < nC; k++) {
                    if (A[i] == C[k]) {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate) {
                    C[nC++] = A[i];
                }
                break;
            }
        }
    }
    printf("(2)A交B集合：{");
    for (i = 0; i < nC; i++) {
        if (i > 0)printf(",");
        printf("%d ", C[i]);
    }
    printf("}\n");

    // 并运算
    for (i = 0; i < nA; i++) {
        // 检查是否已经在集合C中
        isDuplicate = 0;
        for (j = 0; j < nC; j++) {
            if (A[i] == C[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            C[nC++] = A[i];
        }
    }
    for (i = 0; i < nB; i++) {
        // 检查是否已经在集合C中
        isDuplicate = 0;
        for (j = 0; j < nC; j++) {
            if (B[i] == C[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            C[nC++] = B[i];
        }
    }
    printf("\n(3)A并B集合: {");
    for (i = 0; i < nC; i++) {
        if (i > 0)printf(",");
        printf("%d ", C[i]);
    }
    printf("}\n");

    // 差运算
    for (i = 0; i < nA; i++) {
        // 检查是否已经在集合C中
        isDuplicate = 0;
        for (j = 0; j < nC; j++) {
            if (A[i] == C[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            C[nC++] = A[i];
        }
    }
    for (i = 0; i < nB; i++) {
        for (j = 0; j < nC; j++) {
            if (B[i] == C[j]) {
                // 从集合C中删除相同的元素
                for (k = j; k < nC - 1; k++) {
                    C[k] = C[k + 1];
                }
                nC--;
                break;
            }
        }
    }
    printf("\n(4)A-B集合: {");
    for (i = 0; i < nC; i++) {
        if (i > 0)printf(",");
        printf("%d ", C[i]);
    }
    printf("}\n");

    // 补运算
    nC = 0;
    for (i = 0; i < nE; i++) {
        isDuplicate = 0;
        for (j = 0; j < nA; j++) {
            if (E[i] == A[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            C[nC++] = E[i];
        }
    }
    printf("\n(5)集合A关于集合E的补集: {");
    for (i = 0; i < nC; i++) {
        if (i > 0)printf(",");
        printf("%d ", C[i]);
    }
    printf("}\n");

    return 0;
}
int main()
{
    F1();
    F2();
    return 0;
}
#endif

//实验四：
/*
【实验目的】掌握二元关系在计算机上的表示方法，并掌握如果判定关系的性质。
【实验内容】 编程判断一个二元关系是否为等价关系，如果是，求其商集。
等价关系：集合A上的二元关系R同时具有自反性、对称性和传递性，则称R是A上的等价关系。
【实验原理和方法】
（1）A上的二元关系用一个n×n关系矩阵R=表示，定义一个n×n数组r[n][n]表示n×n矩阵关系。
（2）若R对角线上的元素都是1，则R具有自反性。
C语言算法：
    int i,flag=1;
    for(i=0;i<N && flag ;i++)
        if(r[i][i]!=1) flag=0;
    如果flag=1， 则R是自反关系
（3）若R是对称矩阵，则R具有对称性。对称矩阵的判断方法是：
。
C语言算法：
    int i,j,flag=1;
    for(i=0;i<N && flag ;i++)
        for(j=i+1;j<N && flag;j++)
             if(r[i][j] &&r[j][i]!=1) flag=0;
    如果flag=1， 则R是对称关系
（4）关系的传递性判断方法：对任意i，j，k，若。
C语言算法：
        int i,j,k,flag=1;
    for(i=0;i<N && flag;i++)
        for(j=0;j<N && flag;j++)
            for(k=0;k<N && flag;k++)
                if(r[i][j] &&r[j][k] && r[i][k]!=1) flag=0;
    如果flag=1， 则R是传递关系
（5）求商集的方法：商集是由等价类组成的集合。已知R是等价关系，下面的算法是把等价类分行打印出来。
C语言算法：
    int i,j,flag=1;
    int a[N];
    for(i=0;i<N;i++)
        a[i]=i+1;//i代表第i个元素
    for (i = 0; i < N; i++)
    {
        if (a[i])
        {
            printf("{ ");
            for (j = 0; j < N; j++)
                if (r[i][j] && a[j] != 0)
                {
                    printf("%d ", a[j]);//打印和第i个元素有关系的所有元素
                    a[j] = 0;
                }
            printf("}\n");
        }
    }
*/
#if 0
#include <stdio.h>

#define MAX_SIZE 20

int main() {
    int n, i, j, k;
    int r[MAX_SIZE][MAX_SIZE];
    int visited[MAX_SIZE] = { 0 }; // 标记已经访问过的元素
    int equivalence[MAX_SIZE][MAX_SIZE]; // 存储等价类
    int count = 0; // 记录等价类的个数


    printf("请输入二元关系矩阵的维数n：");
    scanf("%d", &n);
    printf("请输入二元关系矩阵R：\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &r[i][j]);
        }
    }

    // 判断自反性
    for (i = 0; i < n; i++) {
        if (r[i][i] != 1) {
            printf("该二元关系不具有自反性\n");
            return 0;
        }
    }

    // 判断对称性
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (r[i][j] != r[j][i]) {
                printf("该二元关系不具有对称性\n");
                return 0;
            }
        }
    }

    // 判断传递性
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (r[i][j] == 1) {
                for (k = 0; k < n; k++) {
                    if (r[j][k] == 1 && r[i][k] != 1) {
                        printf("该二元关系不具有传递性\n");
                        return 0;
                    }
                }
            }
        }
    }

    int flag = 1;
    int a[100010];
    for (i = 0; i < n; i++)
        a[i] = i + 1;/*i代表第i个元素*/
    for (i = 0; i < n; i++)
    {
        if (a[i])
        {
            printf("{ ");
            for (j = 0; j < n; j++)
                if (r[i][j] && a[j] != 0)
                {
                    printf("%d ", a[j]);/*打印和第i个元素有关系的所有元素*/
                    a[j] = 0;
                }
            printf("}\n");
        }
    }
    return 0;
}
#endif

//实验五：
/*
【实验目的】掌握求关系闭包的方法。
【实验内容】编程求一个关系的闭包，要求传递闭包用warshall方法。
【实验原理和方法】
设N元关元系用r[N][N]表示，c[N][N]表示各个闭包，函数initc(r)表示将c[N][N]初始化为r[N][N]。
（1）自反闭包：。
C语言算法： 将关系矩阵的对角线上所有元素设为1。
    initc(r);
    //将关系矩阵的对角线上所有元素设为1
for (i = 0; i < N; i++)
    c[i][i] = 1; （2）对称闭包：
    C语言算法： 在关系矩阵的基础上，若。
    initc(r);
for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
        if (c[i][j]) c[j][i] = 1;//将关系矩阵的对角线上所有元素设为1
（3）传递闭包：，或用warshall方法。
方法1：，下面求得的关系矩阵T = 就是。
int b[N][N];
initc(r);//用c装好r
for (m = 1; m < N; m++)  //得r的m次方,用c装好
{
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
        {
            b[i][j] = 0;
            for (k = 0; k < N; k++)
                b[i][j] += c[i][k] * r[k][j];
            if (b[i][j]) b[i][j] = 1;
        }
}
    initc(b);//把r的m次方b赋给c保存
    方法2：warshall方法
        initc(r);//用c装好r
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++)
                if (c[j][i])
                {
                    for (k = 0; k < N; k++)
                    {
                        c[j][k] = c[j][k] + c[i][k];
                        if (c[j][k]) c[j][k] = 1;
                    }
                }
*/
#if 0
#include <stdio.h>

#define MAX_SIZE 100
//求传递闭包
void warshall(int n, int R[MAX_SIZE][MAX_SIZE], int C[MAX_SIZE][MAX_SIZE]) {
    int i, j, k;
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                C[i][j] = C[i][j] || (C[i][k] && C[k][j]);
            }
        }
    }
}
//求自反闭包
void reflexive(int n, int R[MAX_SIZE][MAX_SIZE], int C[MAX_SIZE][MAX_SIZE]) {
    int i;

    for (i = 0; i < n; i++) {
        C[i][i] = 1;
    }
}
//求对称闭包
void symmetric(int n, int R[MAX_SIZE][MAX_SIZE], int C[MAX_SIZE][MAX_SIZE]) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (R[i][j]) {
                C[j][i] = 1;
            }
        }
    }
}
//初始化输出结果矩阵
void Init_C(int n, int R[MAX_SIZE][MAX_SIZE], int C[MAX_SIZE][MAX_SIZE])
{
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
                C[i][j] = 0;
                C[i][j] = R[i][j];
        }
    }
}

//tsr赋值函数
void write_tsr(int n, int R[MAX_SIZE][MAX_SIZE], int tsrR[MAX_SIZE][MAX_SIZE])
{
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if(R[i][j])
            tsrR[i][j] = R[i][j];
        }
    }
}

int main() {
    int n, i, j, R[MAX_SIZE][MAX_SIZE], C[MAX_SIZE][MAX_SIZE], tsrR[MAX_SIZE][MAX_SIZE] = { 0 };

    printf("输入矩阵维数: ");
    scanf("%d", &n);
    printf("输入关系矩阵:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &R[i][j]);
            C[i][j] = R[i][j];
        }
    }

    //自反闭包
    reflexive(n, R, C);
    write_tsr(n, C, tsrR);
    printf("自反闭包是:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    Init_C(n, R, C);

    //对称闭包
    symmetric(n, R, C);
    symmetric(n, tsrR, tsrR);
    printf("对称闭包是:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    Init_C(n, R, C);

    //传递闭包
    warshall(n, R, C);
    warshall(n, tsrR, tsrR);
    printf("传递闭包是:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    printf("同时具有自反、对称、传递三种性质的tsr闭包是:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", tsrR[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#endif

//实验六：
/*
【实验目的】掌握判断欧拉图的方法。
【实验内容】 判断一个图是不是，如果是，求出所有欧拉路
【实验原理和方法】
（1）用关系矩阵R=表示图。
（2）对无向图而言，若所有结点的度都是偶数，则该图为欧拉图。
        C语言算法：
    flag=1;
    for(i=1;i<=n && flag;i++)
    {
        sum=0;
        for(j=1;j<=n;j++)
            if(r[i][j]) sum++;
        if(sum%2==0) flag=0;
    }
    如果 flag  该无向图是欧拉图
（3）对有向图而言，若所有结点的入度等于出度，则该图为欧拉图。
    C语言算法：
flag=1;
    for(i=1;i<=n && flag;i++)
    {
        sum1=0;
        sum2=0;
        for(j=1;j<=n;j++)
            if(r[i][j]) sum1++;
        for(j=1;j<=n;j++)
            if(r[j][i]) sum2++;
        if(sum1%2==0 || sum2%2==0) flag=0;
    }
    如果 flag  该有向图是欧拉图
（4）求出欧拉路的方法：欧拉路经过每条边一次且仅一次。可用回溯的方法求得所有欧拉路。
C语言算法：
int count=0,cur=0,r[N][N]; // r[N][N]为图的邻接矩阵，cur为当前结点编号，count为欧拉路的数量。
int sequence[M];// sequence保留访问点的序列，M为图的边数
输入图信息;
void try1(int k) //k表示边的序号
{
    int i,pre=cur; //j保留前一个点的位置,pre为前一结点的编号
    for (i=0;i<N;i++)
        if (r[cur][i]) //当前第cur点到第i点连通
            {
//删除当前点与第i点的边，记下第k次到达点i，把第i个点设为当前点
                r[cur][i]=0;cur=sequence[k]=i;
                if (k<M) try1(k+1); //试下一个点
                else prt1();//经过了所有边，打印一个解
//上面条件不满足，说明当前点的出度为0，回溯，试下一位置
                r[pre][i]=1;cur=pre;
            }
}
*/
#if 0//失败作品
#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int graph[MAX][MAX], visited[MAX], degree[MAX], n, m;

void createGraph() {
    int i, j, k, flag = 0;
    printf("输入点的数目: ");
    scanf("%d", &n);
    printf("输入边的数目:");
    scanf("%d", &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            graph[i][j] = 0;
        }
    }
    printf("默认图为无向图,如果是有向图请打1：");
    scanf("%d", &flag);
    printf("输入边<u,v>的信息");
    for (k = 0; k < m; k++) {
        scanf("%d%d", &i, &j);
        if(flag == 0)graph[i][j] = graph[j][i] = 1;
        if(flag == 1)graph[i][j] = 1;
    }
}

void printGraph() {
    int i, j;
    printf("\n图的邻接矩阵是:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

void dfs(int u) {//深度优先搜索
    int v;
    visited[u] = 1;
    for (v = 0; v < n; v++) {
        if (graph[u][v] && !visited[v]) {
            dfs(v);
        }
    }
}

int isConnected() {//看是否连通
    int i;
    for (i = 0; i < n; i++) {
        visited[i] = 0;
    }
    for (i = 0; i < n; i++) {
        if (degree[i]) {
            dfs(i);
            break;
        }
    }
    for (i = 0; i < n; i++) {
        if (degree[i] && !visited[i]) {
            return 0;
        }
    }
    return 1;
}

int isEulerian() {//看是否为欧拉图
    int i, odd = 0;
    if (!isConnected()) {
        return 0;
    }
    for (i = 0; i < n; i++) {
        if (degree[i] % 2) {
            odd++;
        }
    }
    if (odd == 0) {
        return 2;
    }
    else if (odd == 2) {
        return 1;
    }
    return 0;
}

void printEulerianPath(int u) {
    int v;
    for (v = 0; v < n; v++) {
        if (graph[u][v]) {
            graph[u][v] = graph[v][u] = 0;
            printEulerianPath(v);
            break;
        }
    }
    printf("%d ", u);
}

void printEulerianCircuit(int u) {
    int v;
    for (v = 0; v < n; v++) {
        if (graph[u][v]) {
            graph[u][v] = graph[v][u] = 0;
            printEulerianCircuit(v);
            break;
        }
    }
    printf("%d ", u);
}

int main() {
    int i, j, type, start;
    createGraph();//建图
    printGraph();//打印图
    for (i = 0; i < n; i++) {
        degree[i] = 0;
        for (j = 0; j < n; j++) {
            if (graph[i][j]) {
                degree[i]++;
            }
        }
    }
    type = isEulerian();
    if (type == 0) {
        printf("\n该图不是欧拉图\n");
    }
    else {
        printf("\n该图是欧拉图\n");
        printf("\n欧拉回路是：\n");
        start = 0;
        for (i = 0; i < n; i++) {
            if (degree[i] % 2) {
                start = i;
                break;
            }
        }
        if (type == 1) {
            printEulerianPath(start);
        }
        else {
            printEulerianCircuit(start);
        }
        printf("\n");
    }
    return 0;
}
#endif
#if 0//最终作品
#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int graph[MAX][MAX], visited[MAX], degree[MAX], inDegree[MAX], outDegree[MAX], n, m, directed;

void createGraph() {
    int i, j, k;
    printf("输入点的数目: ");
    scanf("%d", &n);
    printf("输入边的数目: ");
    scanf("%d", &m);
    printf("图是有向图吗？(1代表是, 0代表不是): ");
    scanf("%d", &directed);
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            graph[i][j] = 0;
        }
    }
    printf("输入边<u,v>的信息:\n");
    for (k = 0; k < m; k++) {
        scanf("%d%d", &i, &j);
        graph[i][j] += 1;
        if (directed) {//有向图计算度数
            outDegree[i]++;
            inDegree[j]++;
        }
        else {
            graph[j][i] += 1;//无向图对称
        }
    }
    for (i = 1; i <= n; i++) {//无向图计算度数
        degree[i] = 0;
        for (j = 1; j <= n; j++) {
            if (graph[i][j]) {
                degree[i]++;
            }
        }
    }
}

void printGraph() {
    int i, j;
    printf("\n图的邻接矩阵是:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

void dfs(int u) {
    int v;
    visited[u] = 1;//标记访问
    for (v = 1; v <= n; v++) {
        if (graph[u][v] && !visited[v]) {
            dfs(v);
        }
    }
}

int isConnected() {
    int i;
    for (i = 1; i <= n; i++)
    {
        visited[i] = 0;
    }
    for (i = 1; i <= n; i++)
    {
        if (degree[i]) 
        {
            dfs(i);
            break;
        }
    }
    for (i = 1; i <= n; i++)
    {
        if (degree[i] && !visited[i]) 
        {//有度数但没被访问
            return 0;
        }
    }
    return 1;
}

int isEulerian() {
    int i, odd = 0;//odd判断奇度数的点个数
    if (!isConnected()) 
    {//判断是否连通
        return 0;
    }
    if (directed) //有向图
    {
        for (i = 1; i <= n; i++) 
        {
            if (inDegree[i] != outDegree[i]) 
            {
                return 0;
            }
        }
    }
    else 
    {
        for (i = 1; i <= n; i++) 
        {
            if (degree[i] % 2) 
            {
                odd++;
            }
        }
        if (odd == 0) 
        {//无奇度数点、存在欧拉回路
            return 2;
        }
        else if (odd == 2)
        {//有2个顶点的度数是奇数,存在欧拉路
            return 1;
        }
        return 0;
    }
    return 2;
}

void printEulerianPath(int u) //废，原用于求半欧拉图存在的欧拉路
{
    int v;
    for (v = 1; v <= n; v++) 
    {
        if (graph[u][v]) 
        {
            if (!directed)
            {
                graph[u][v]--;//删除这条边代表已经访问过
                graph[v][u]--;
            }
            if (directed) graph[u][v]--;
            if (directed) 
            {
                outDegree[u]--;
                inDegree[v]--;
            }
            printEulerianPath(v);
            break;
        }
    }
    printf("%d ", u);
}

void printEulerianCircuit(int u) {
    int v, temp;
    for (v = 1; v <= n; v++) 
    {
        temp = degree[v];
        if (graph[u][v]) 
        {
            if (!directed)
            {
                if (temp == 1)//有割边、先处理其他边先
                {
                    int ii;
                    static int state = 0;//用于判断是否深搜完成
                    for (ii = 1; ii <= n; ii++) // 找到另一个连通分量的起点
                    {
                        if (graph[u][ii] && degree[ii] != 1)
                        {
                            graph[u][ii]--;//删除这条边代表已经访问过
                            graph[ii][u]--; degree[u]--; degree[ii]--;
                            printEulerianCircuit(ii); // 从另一个连通分量的起点开始重新遍历
                            state++;//从另一个连通分量遍历完
                            break;
                        }
                    }
                    if (state) break;//完成深搜并返回
                    graph[u][v]--;//删除这条边代表已经访问过
                    graph[v][u]--;
                    degree[u]--;
                    degree[v]--;
                    printEulerianCircuit(v);
                    break;
                }
                graph[u][v]--;//删除这条边代表已经访问过
                graph[v][u]--;
                degree[u]--;
                degree[v]--;
                printEulerianCircuit(v);
            }
            if (directed)
            {
                if (temp == 1)//有割边、先处理其他边先
                {
                    int ii;
                    static int state = 0;//用于判断是否深搜完成
                    for (ii = 1; ii <= n; ii++) // 找到另一个连通分量的起点
                    {
                        if (graph[u][ii] && inDegree[ii] != 1)
                        {
                            graph[u][ii]--;
                            outDegree[u]--;
                            inDegree[ii]--;
                            printEulerianCircuit(ii); // 从另一个连通分量的起点开始重新遍历
                            state++;//从另一个连通分量遍历完
                            break;
                        }
                    }
                    if (state) break;//完成深搜并返回
                    graph[u][v]--;//删除这条边代表已经访问过
                    outDegree[u]--;
                    inDegree[v]--;
                    printEulerianCircuit(v);
                    break;
                }
                graph[u][v]--;//删除这条边代表已经访问过
                outDegree[u]--;
                inDegree[v]--;
                printEulerianCircuit(v);
            }
            break;
        }
    }
    printf("%d ", u);
}

int main() {
    int i, j, type, start;
    createGraph();
    printGraph();
    type = isEulerian();
    for (i = 1; i <= n; i++)
    {
        visited[i] = 0;
    }
    if (type == 0) {
        printf("\n该图不是欧拉图\n");
    }
    else {
        printf("\n该图是欧拉图\n");
        printf("输出欧拉路是倒序输出\n");
        start = 1;
        if (directed) 
        {
            for (i = 1; i <= n; i++) {
                if (outDegree[i] > inDegree[i]) {//有向图起点应该出度>入度
                    start = i;
                    break;
                }
            }
        }
        else 
        {
            for (i = 1; i <= n; i++) {
                if (degree[i] % 2) {//奇度数作为起点
                    start = i;
                    break;
                }
            }
        }
        if (type == 1) 
        {
            printf("\n欧拉路:\n");
            printEulerianPath(start);//输出欧拉路
        }
        else 
        {
            printf("\n欧拉回路:\n");
            printEulerianCircuit(start);//输出欧拉回路
        }
        printf("\n");
    }
    return 0;
}
#endif
#if 0//屎山代码但是可以输出所有欧拉回路,欧拉图正序输出
#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int graph[MAX][MAX], visited[MAX], degree[MAX], inDegree[MAX], outDegree[MAX], n, m, mm, directed;

void createGraph() {
    int i, j, k;
    printf("输入点的数目: ");
    scanf("%d", &n);
    printf("输入边的数目: ");
    scanf("%d", &m);
    printf("图是有向图吗？(1代表是, 0代表不是): ");
    scanf("%d", &directed);
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            graph[i][j] = 0;
        }
    }
    printf("输入边<u,v>的信息:\n");
    for (k = 0; k < m; k++) {
        scanf("%d%d", &i, &j);
        graph[i][j] = 1;
        if (directed) {//有向图计算度数
            outDegree[i]++;
            inDegree[j]++;
        }
        else {
            graph[j][i] = 1;//无向图对称
        }
    }
    for (i = 1; i <= n; i++) {//无向图计算度数
        degree[i] = 0;
        for (j = 1; j <= n; j++) {
            if (graph[i][j]) {
                degree[i]++;
                if (i == j)degree[i]++;
            }
        }
    }
}

void printGraph() {
    int i, j;
    printf("\n图的邻接矩阵是:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

void dfs(int u) {
    int v;
    visited[u] = 1;//标记访问
    for (v = 1; v <= n; v++) {
        if (graph[u][v] && !visited[v]) {
            dfs(v);
        }
    }
}

int isConnected() {
    int i;
    for (i = 1; i <= n; i++)
    {
        visited[i] = 0;
    }
    for (i = 1; i <= n; i++)
    {
        if (degree[i])
        {
            dfs(i);
            break;
        }
    }
    for (i = 1; i <= n; i++)
    {
        if (degree[i] && !visited[i])
        {//有度数但没被访问
            return 0;
        }
    }
    return 1;
}

int isEulerian() {
    int i, odd = 0;//odd判断奇度数的点个数
    if (!isConnected())
    {//判断是否连通
        return 0;
    }
    if (directed) //有向图
    {
        for (i = 1; i <= n; i++)
        {
            if (inDegree[i] != outDegree[i])
            {
                return 0;
            }
        }
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (degree[i] % 2)
            {
                odd++;
            }
        }
        if (odd == 0)
        {//无奇度数点、存在欧拉回路
            return 2;
        }
        else if (odd == 2)
        {//有2个顶点的度数是奇数,存在欧拉路
            return 1;
        }
        return 0;
    }
    return 2;
}

void printEulerianPath(int u) //废，原用于求半欧拉图存在的欧拉路，但目前只做了倒序输出一条路
{
    int v;
    for (v = 1; v <= n; v++)
    {
        if (graph[u][v])
        {
            if (!directed)
            {
                graph[u][v]--;//删除这条边代表已经访问过
                graph[v][u]--;
            }
            if (directed) graph[u][v]--;
            if (directed)
            {
                outDegree[u]--;
                inDegree[v]--;
            }
            printEulerianPath(v);
            break;
        }
    }
    printf("%d ", u);
}

int isLastnode(int u)
{
    int i = 0;
    if (m == 0)
    {
        return 1;//此时用到这个代码是真的到最后一个点了
    }
    if (degree[u] == 1 && m != 0)
    {
        return 2;//此时用到这个代码是尾二点判断是否先遍历其他点
    }
    else
    {
        return 0;
    }
}

int isLastSecnode(int u)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        if (graph[u][i] && (isLastnode(i) == 2) &&i!=u)
        {
            break;
        }
    }
    if (i<=n)
        return i;
    else
        return 0;
}

int luxian[10010];

void printEulerianCircuit(int u) {
    static P_OK = 1;//完成DFS后用数组保存，这是数组下标
    int v;
    if (isLastnode(u) == 1)
    {
        int i = 0;
        luxian[P_OK++] = u;
        for (i = 1; i <= mm+1; i++)
        {
            if (i > 1) printf("->");
            printf("%d", luxian[i]);
        }
        printf("\n");
        luxian[--P_OK] = 0;
        return;
    }
    for (v = 1; v <= n; v++)
    {
        if (graph[u][v])//有路两个分支一个正常DFS，一个可能尾二点需要先遍历其他在遍历这个点
        {
            if (!directed)
            {
                if (isLastSecnode(u))
                {
                    int i = 1;//找其他点
                    for (i = 1; i <= n; i++)
                    {
                        if (graph[u][i] && degree[i] != 1)
                        {
                            //现值更新，两个分支一个有向图一个无向图
                            graph[u][i]--; graph[i][u]--; m--;
                            degree[u]--; degree[i]--;
                            luxian[P_OK++] = u;
                            //DFS
                            printEulerianCircuit(i);
                            //回溯
                            graph[u][i]++; graph[i][u]++; m++;
                            degree[u]++; degree[i]++;
                            luxian[--P_OK] = 0;
                        }
                    }
                    graph[u][v]--; graph[v][u]--; m--;
                    degree[u]--; degree[v]--;
                    luxian[P_OK++] = u;
                    //DFS
                    printEulerianCircuit(v);
                    //回溯
                    graph[u][v]++; graph[v][u]++; m++;
                    degree[u]++; degree[v]++;
                    luxian[--P_OK] = 0;

                }
                else
                {
                    //现值更新，两个分支一个有向图一个无向图
                    graph[u][v]--; graph[v][u]--; m--;
                    degree[u]--; degree[v]--;
                    luxian[P_OK++] = u;
                    //DFS
                    printEulerianCircuit(v);
                    //回溯
                    graph[u][v]++; graph[v][u]++; m++;
                    degree[u]++; degree[v]++;
                    luxian[--P_OK] = 0;
                }
            }
            else
            {
                if (isLastSecnode(u))
                {
                    int i = 1;//找其他点
                    for (i = 1; i <= n; i++)
                    {
                        if (graph[u][i] && degree[i] != 1)
                        {
                            //现值更新，两个分支一个有向图一个无向图
                            graph[u][i]--;  m--;
                            outDegree[u]--; inDegree[i]--;
                            luxian[P_OK++] = u;
                            //DFS
                            printEulerianCircuit(i);
                            //回溯
                            graph[u][i]++;  m++;
                            outDegree[u]++; inDegree[i]++;
                            luxian[--P_OK] = 0;
                        }
                    }
                    //现值更新，两个分支一个有向图一个无向图
                    graph[u][v]--;  m--;
                    outDegree[u]--; inDegree[v]--;
                    luxian[P_OK++] = u;
                    //DFS
                    printEulerianCircuit(v);
                    //回溯
                    graph[u][v]++;  m++;
                    outDegree[u]++; inDegree[v]++;
                    luxian[--P_OK] = 0;
                }
                else
                {
                    //现值更新，两个分支一个有向图一个无向图
                    graph[u][v]--;  m--;
                    outDegree[u]--; inDegree[v]--;
                    luxian[P_OK++] = u;
                    //DFS
                    printEulerianCircuit(v);
                    //回溯
                    graph[u][v]++;  m++;
                    outDegree[u]++; inDegree[v]++;
                    luxian[--P_OK] = 0;
                }
            }
        }
    }
}

int main() {
    int i, j, type, start;
    createGraph();
    printGraph();
    type = isEulerian();
    mm = m;
    for (i = 1; i <= n; i++)
    {
        visited[i] = 0;
    }
    if (type == 0) {
        printf("\n该图不是欧拉图\n");
    }
    else {
        if (type == 1)
            printf("但作为半欧拉图，它存在欧拉路\n");
        else printf("\n该图是欧拉图\n");
        start = 1;
        if (directed)
        {
            for (i = 1; i <= n; i++) {
                if (outDegree[i] > inDegree[i]) {//有向图起点应该出度>入度
                    start = i;
                    break;
                }
            }
        }
        else
        {
            for (i = 1; i <= n; i++) {
                if (degree[i] % 2) {//奇度数作为起点
                    start = i;
                    break;
                }
            }
        }
        if (type == 1)
        {
            printf("\n倒序输出欧拉路:\n");
            printEulerianPath(start);//输出欧拉路
        }
        else
        {
            printf("\n欧拉回路:\n");
            printEulerianCircuit(start);//输出欧拉回路
        }
        printf("\n");
    }
    return 0;
}
#endif
//求哈密顿图
#if 0
#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int graph[MAX][MAX], visited[MAX], path[MAX], n, m;

void createGraph() {
    int i, j, k;
    printf("输入点的数目: ");
    scanf("%d", &n);
    printf("输入边的数目: ");
    scanf("%d", &m);
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            graph[i][j] = 0;
        }
    }
    printf("输入边<u,v>的信息:\n");
    for (k = 0; k < m; k++) {
        scanf("%d%d", &i, &j);
        graph[i][j] += 1;
        graph[j][i] += 1;//无向图对称
    }
}

void printGraph() {
    int i, j;
    printf("\n图的邻接矩阵是:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

void dfs(int u, int depth) {
    int v;
    visited[u] = 1;//标记访问
    path[depth] = u;//将当前节点加入路径中
    if (depth == n) {//找到了哈密顿回路
        printf("找到了哈密顿回路: ");
        for (v = 1; v <= n; v++) {
            printf("%d ", path[v]);
        }
        printf("\n");
        exit(0);//结束程序
    }
    for (v = 1; v <= n; v++) {
        if (graph[u][v] && !visited[v]) {
            dfs(v, depth + 1);
        }
    }
    visited[u] = 0;//回溯
}

void findHamiltonianPath() {
    int i, j, start;
    for (i = 1; i <= n; i++) {
        visited[i] = 0;
    }
    printf("输出哈密顿路径是倒序输出\n");
    for (start = 1; start <= n; start++) {
        path[1] = start;
        dfs(start, 1);
    }
    printf("没有找到哈密顿回路\n");
}

int main() {
    createGraph();
    printGraph();
    findHamiltonianPath();
    return 0;
}
#endif

#if 0
/*
各个景点之间有且仅有一个桥，通过欧拉图的判定，判断是否可以有有路线走完所有的景点
如果有路线可以走完，那么打印出所有的路线(起点相同)和所有路线的数量
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 50
int r[size][size];
char name[size][size];//景点的名字
int cur = 1;
int sequence[size];
int n, edgenum, sum1 = 0, sum2 = 0, flag;
int count = 0;
void prt1()
{
    printf("%s->", &name[1]);
    for (int i = 0; i < edgenum; i++)
    {
        printf("%s->", &name[sequence[i]]);
    }
    printf("\n");
}
void try1(int k) //k表示边的序号
{
    int i, pre = cur; //j保留前一个点的位置,pre为前一结点的编号
    for (i = 1; i < size; i++)
        if (r[cur][i]) //当前第cur点到第i点连通
        {
            //删除当前点与第i点的边，记下第k次到达点i，把第i个点设为当前点
            r[cur][i] = 0; cur = sequence[k] = i;
            if (k < edgenum - 1) try1(k + 1); //试下一个点
            else
            {
                prt1();//经过了所有边，打印一个解
                count++;
            }
            //上面条件不满足，说明当前点的出度为0，回溯，试下一位置
            r[pre][i] = 1; cur = pre;
        }
}

int main()
{
    //有向图欧拉图判定
    //每个节点的出度和入度相等

    printf("该图的节点数和边数为:");
    scanf("%d %d", &n, &edgenum);

    for (int i = 1; i <= n; i++)
    {
        printf("对应的景点的名字:\n");
        scanf("%s", &name[i]);
    }

    for (int i = 0; i < edgenum; i++)
    {
        int u, v;
        printf("起点和终点：");
        scanf("%d %d", &u, &v);
        r[u][v] = 1;
    }
    flag = 1;
    for (int i = 1; i <= n && flag; i++)
    {
        sum1 = 0;
        sum2 = 0;
        for (int j = 1; j <= n; j++)
            if (r[i][j]) sum1++;
        for (int j = 1; j <= n; j++)
            if (r[j][i]) sum2++;
        if (sum1 % 2 == 0 || sum2 % 2 == 0) flag = 0;
        //因为由握手定理得度数为边数得两倍，即偶数，
        //又因为有向图得出入度相等，所以出入度均为奇数
    }
    if (flag == 0)
        printf("该有向图不是欧拉图\n");
    else
        printf("该有向图是欧拉图\n");
    try1(0);
    printf("欧拉路数量有%d", count);
    return 0;
}
#endif

//试验七：
/*
【实验目的】掌握求最优二叉树的方法。
【实验内容】最优二叉树在通信编码中的应用。要求输入一组通信符号的使用频率，求各通信符号对应的前缀码。
【实验原理和方法】
（1）用一维数组f[N]存贮通信符号的使用频率，用求最优二叉树的方法求得每个通信符号的前缀码。
（2）用链表保存最优二叉树，输出前缀码时可用树的遍历方法。
#include <stdio.h>
#include <stdlib.h>
#define N 13
struct tree {
    float num;
    struct tree *Lnode;
    struct tree *Rnode;
}* fp[N];//保存结点
char s[2*N];//放前缀码

void inite_node(float f[],int n)//生成叶子结点
{
    int i;
    struct tree *pt;
    for(i=0;i<n;i++)
    {
        pt=(struct tree *)malloc(sizeof(struct tree));//生成叶子结点
        pt->num=f[i];
        pt->Lnode=NULL;pt->Rnode=NULL;
        fp[i]=pt;
    }
}

void sort(struct tree * array[],int n)//将第N-n个点插入到已排好序的序列中。
{
    int i;
    struct tree *temp;
    for(i=N-n;i<N-1;i++)
        if(array[i]->num>array[i+1]->num)
        {
            temp=array[i+1];
            array[i+1]=array[i];
            array[i]=temp;
        }
}

struct tree * construct_tree(float f[],int n)//建立树
{
    int i;
    struct tree *pt;
    for(i=1;i<N;i++)
    {
        pt=(struct tree *)malloc(sizeof(struct tree));//生成非叶子结点
        pt->num=fp[i-1]->num+fp[i]->num;
        pt->Lnode=fp[i-1];pt->Rnode=fp[i];
        fp[i]=pt;//w1+w2
        sort(fp,N-i);
    }
    return fp[N-1];
}

void preorder(struct tree *p,int k,char c)
{
    int j;
    if(p!=NULL)
    {
        if(c=='l') s[k]='0';
        else s[k]='1';
        if(p->Lnode==NULL) {//P指向叶子
            printf("%.2f:  ",p->num);
            for(j=0;j<=k;j++)
                printf("%c",s[j]);
            putchar('\n');
        }
        preorder(p->Lnode,k+1,'l');
        preorder(p->Rnode,k+1,'r');
    }
}

void main(){
    float f[N]={2,3,5,7,11,13,17,19,23,29,31,37,41};
    struct tree *head;
    inite_node(f,N); //初始化结点
    head=construct_tree(f,N);//生成最优树
    s[0]=0;
    preorder(head,0,'l');//遍历树
}
*/
#if 0
int main()
{

    return 0;
}
#endif

//实验八：
/*
【实验目的】掌握群的判定方法。
【实验内容】输入代数系统(A,*)的集合A和*运算的运算表，判断(A，*)是否是群。
【实验原理和方法】
（1）用一维数组a[n]存贮集合A。
（2）用二维数组op[n][n]存贮运算表。
（3）根据群的定义，代数系统(A，*)若为群，除运算表已表明运算*封闭外，还应该满足下列三个条件：*运算可结合、有幺元e、 A中任何元素都有逆元。
*运算可结合：
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            for(k=0;k<N;k++)
            {
                for(l=0;l<N;l++)
                {
                    if(op[i][j]==a[l]) x=l;/*op[i][j] 代表a*b
if (op[j][k] == a[l]) y = l;/*op[j][k] 代表b*c
                }
                if (op[i][y] != op[x][k])/*op[i][y]代表a*(b*c)
                {
                    printf("(%d*%d)*%d=%d,%d*(%d*%d)=%d,运算是不可结合！\n",
                        a[i], a[j], a[k], op[x][k], a[i], a[j], a[k], op[i][y]);
                    flag = 0;/*不满足结合性
                }
            }
            if (flag) printf("运算是可结合！\n");
        有幺元e:
            flag = 0;
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                    if (op[i][j] != a[j] || op[j][i] != a[j]) break;
                if (j == N)
                {
                    printf("群有幺元%d！\n", a[i]);
                    e = a[i];
                    flag = 1; break;
                }
            }
            if (!flag) printf("群没有幺元！\n");
            A中任何元素都有逆元：
                flag = 1;
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                    if (op[i][j] == e && op[j][i] == e) break;/*e是幺元
                if (j == N)
                {
                    flag = 0;
                    printf("A中元素%d没有逆元！\n", a[j]);
                }
            }
            if (flag) printf("A中任何元素都有逆元！\n");

*/
#if 0

int main()
{

    return 0;
}
#endif
