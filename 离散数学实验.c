#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

/****************************************************************************************
* ˵��:����������ɢ��ѧʵ��һ����
* ����ʵ������ŷ��ͼ�Ѷ��е�ߣ�����ֻд�������ɹ����룬�����ݴ˸ĳ�һ������ܶ�ͼ����
* ʹ�÷�������Ӧʵ����� #if 0�ĳ�#if 1���ɵ�������
* ע��ֻ����һ�� #if 1����ᱨ��
****************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//ʵ��һ��
/*
�û��������߼���ʽ�ķ������һ��5�˱�����ص�·��Ҫ��3�����ϣ���3�ˣ�ͬ������ͨ�����������������
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

//�ο���
//#include<stdio.h>
//int vote(int a, int b, int c, int d, int e)
//{
//	//��������ȡ���˵Ĳ�ͬ��ȡ����10�֡�
//	if (a && b && c || a && b && d || a && b && e || a && c && d || a && c && e || a && d && e || b && c && d || b && c && e || b && d && e || c && d && e)
//		return 1;
//	else
//		return 0;
//}
//
//void main()
//{
//	int a, b, c, d, e;
//	printf("�����������˵ı��ֵ��0��1���ո�ֿ�����");
//	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
//	if (vote(a, b, c, d, e))
//		printf("�ܺã����ͨ����\n");
//	else
//		printf("�ź������û��ͨ����\n");
//}
#endif

//ʵ�����
/*
ʵ��������������������⣬�����߼�������ȷ��˭�������ߣ�д��������̡�
��1��ӪҵԱA��B͵���ֱ�
��2����A����������������Ӫҵʱ�䣻
��3����B�ṩ��֤����ȷ�������ĩ������
��4����B�ṩ��֤�ݲ���ȷ��������������Ӫҵʱ�䣻
��5��������������
*/
#if 0
//�����¼�
//����͵���ֱ�
int A;//A͵��
int B;//B͵��
//������Ӫҵʱ��
int P;
//B�ṩ��֤����ȷ
int Q;
//��������
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
                            if (A == 1)printf("A��������\n"); else printf("A����������\n");
                            if (B == 1)printf("B��������\n"); else printf("B����������\n");
                        }
                    }
                }
            }
        }
    }
    return 0;
}
#endif

//ʵ������
/*
��ʵ��Ŀ�ġ������ü�����󼯺ϵĽ���������Ͳ�����ķ�����
��ʵ�����ݡ����ʵ�ּ��ϵĽ���������Ͳ����㡣
��ʵ��ԭ��ͷ�����
��1��������A��B��C��E��ʾ���ϡ���������A��B��E��ȫ��������������ʱҪ���������Ƿ��ظ��������е�����Ҫ���ظ�����Ҫ�󼯺�A��B�Ǽ���E���Ӽ���
����ÿһ�����㶼Ҫ���Ƚ�����C�óɿռ���
*/
/*
��2���������ϵĽ����㣺������A��Ԫ����һ������B�е�Ԫ�ؽ��бȽϣ�����ͬ��Ԫ�ط�������C�У�����C���Ǽ���A�ͼ���B�Ľ���
C�����㷨��
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

    // ���뼯��A
    printf("Enter the number of elements in set A: ");
    scanf("%d", &nA);
    printf("Enter the elements of set A: ");
    for (i = 0; i < nA; i++) {
        isDuplicate = 0;
        scanf("%d", &A[i]);
        // ����Ƿ����ظ�Ԫ��
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

    // ���뼯��B
    printf("Enter the number of elements in set B: ");
    scanf("%d", &nB);
    printf("Enter the elements of set B: ");
    for (i = 0; i < nB; i++) {
        isDuplicate = 0;
        scanf("%d", &B[i]);
        // ����Ƿ����ظ�Ԫ��
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

    // ����ȫ��E
    printf("Enter the number of elements in set E: ");
    scanf("%d", &nE);
    printf("Enter the elements of set E: ");
    for (i = 0; i < nE; i++) {
        scanf("%d", &E[i]);
    }

    // ��鼯��A��B�Ƿ��Ǽ���E���Ӽ�
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

    // ������
    for (i = 0; i < nA; i++) {
        for (j = 0; j < nB; j++) {
            if (A[i] == B[j]) {
                // ����Ƿ��Ѿ��ڼ���C��
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

    // ������
    for (i = 0; i < nA; i++) {
        // ����Ƿ��Ѿ��ڼ���C��
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
        // ����Ƿ��Ѿ��ڼ���C��
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

    // ������
    for (i = 0; i < nA; i++) {
        // ����Ƿ��Ѿ��ڼ���C��
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
                // �Ӽ���C��ɾ����ͬ��Ԫ��
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

    // ������
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
��3���������ϵĲ����㣺������A�и���Ԫ���ȱ���������C�С�������B�е�Ԫ����һ������B�е�Ԫ�ؽ��бȽϣ��Ѳ���ͬ��Ԫ����ӵ�����C�У�����C���Ǽ���A�ͼ���B�Ĳ���
    for(i=0;i<m;i++)
            c[i]=a[i];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                if(b[i]==c[j]) break;
            if(j==m){ c[m+k]=b[i];k++;}
        }
��4���������ϵĲ����㣺������A�и���Ԫ���ȱ���������C�С�������B�е�Ԫ����һ������B�е�Ԫ�ؽ��бȽϣ�����ͬ��Ԫ�ش�����C��ɾ��������C���Ǽ���A�ͼ���B�Ĳ�A-B��
C�����㷨��
    for(i=0;i<m;i++)
        c[i]=a[i];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(b[i]==c[j])
            {
                for(k=j;k<m;k++)
                    c[k]=c[k+1];//��λ
                m--;
                break;
            }
��5�����ϵĲ����㣺������E�е�Ԫ����һ������A�е�Ԫ�ؽ��бȽϣ��Ѳ���ͬ��Ԫ�ر��浽����C�У�����C���Ǽ���A���ڼ���E�Ĳ�����
     �󲹼���һ��������ļ��ϲ����㡣
*/
#if 0
#include <stdio.h>
#define MAX_SIZE 100
int nA, nB, nE, nC;
int A[MAX_SIZE], B[MAX_SIZE], E[MAX_SIZE], C[MAX_SIZE];
void F1()
{
    printf("����AԪ�صĸ���(���%d��): ", MAX_SIZE);
    scanf("%d", &nA);
    printf("����A��Ԫ��(�ÿո�����): ");
    for (int i = 0; i < nA; i++)
    {
        int x;
        scanf("%d", &x);
        // ���Ԫ���Ƿ��ظ�
        for (int j = 0; j < i; j++) {
            if (A[j] == x) {
                printf("A��Ԫ���ظ�������������\n");
                return 1;
            }
        }
        A[i] = x;
    }
    printf("����BԪ�صĸ���(���%d��): ", MAX_SIZE);
    scanf("%d", &nB);
    printf("����B��Ԫ��(�ÿո�����): ");
    for (int i = 0; i < nB; i++) {
        int x;
        scanf("%d", &x);
        // ���Ԫ���Ƿ��ظ�
        for (int j = 0; j < i; j++) {
            if (B[j] == x) {
                printf("B��Ԫ���ظ�������������\n");
                return 1;
            }
        }
        B[i] = x;
    }
    printf("����EԪ�صĸ���(���%d��): ", MAX_SIZE);
    scanf("%d", &nE);
    printf("����E��Ԫ��(�ÿո�����): ");
    for (int i = 0; i < nE; i++) {
        int x;
        scanf("%d", &x);
        // ���Ԫ���Ƿ��ظ�
        for (int j = 0; j < i; j++) {
            if (E[j] == x) {
                printf("E��Ԫ���ظ�������������\n");
                return 1;
            }
        }
        E[i] = x;
    }
    // ��鼯��A��B�Ƿ��Ǽ���E���Ӽ�
    for (int i = 0; i < nA; i++) {
        int found = 0;
        for (int j = 0; j < nE; j++) {
            if (A[i] == E[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("A����E���Ӽ�\n");
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
            printf("B����E���Ӽ�\n");
            return 1;
        }
    }
    printf("\n����A: {");
    for (int i = 0; i < nA; i++) {
        if (i > 0) printf(", ");
        printf("%d", A[i]);
    }
    printf("}\n");
    printf("����B: {");
    for (int i = 0; i < nB; i++) {
        if (i > 0) printf(", ");
        printf("%d", B[i]);
    }
    printf("}\n");
    printf("����E: {");
    for (int i = 0; i < nE; i++) {
        if (i > 0) printf(", ");
        printf("%d", E[i]);
    }
    printf("}\n\n");
    printf("(1)A��B�Ǽ���E���Ӽ�\n\n");
}
void F2()
{
    int i, j, k, isDuplicate;
    // ������
    for (i = 0; i < nA; i++) {
        for (j = 0; j < nB; j++) {
            if (A[i] == B[j]) {
                // ����Ƿ��Ѿ��ڼ���C��
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
    printf("(2)A��B���ϣ�{");
    for (i = 0; i < nC; i++) {
        if (i > 0)printf(",");
        printf("%d ", C[i]);
    }
    printf("}\n");

    // ������
    for (i = 0; i < nA; i++) {
        // ����Ƿ��Ѿ��ڼ���C��
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
        // ����Ƿ��Ѿ��ڼ���C��
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
    printf("\n(3)A��B����: {");
    for (i = 0; i < nC; i++) {
        if (i > 0)printf(",");
        printf("%d ", C[i]);
    }
    printf("}\n");

    // ������
    for (i = 0; i < nA; i++) {
        // ����Ƿ��Ѿ��ڼ���C��
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
                // �Ӽ���C��ɾ����ͬ��Ԫ��
                for (k = j; k < nC - 1; k++) {
                    C[k] = C[k + 1];
                }
                nC--;
                break;
            }
        }
    }
    printf("\n(4)A-B����: {");
    for (i = 0; i < nC; i++) {
        if (i > 0)printf(",");
        printf("%d ", C[i]);
    }
    printf("}\n");

    // ������
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
    printf("\n(5)����A���ڼ���E�Ĳ���: {");
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

//ʵ���ģ�
/*
��ʵ��Ŀ�ġ����ն�Ԫ��ϵ�ڼ�����ϵı�ʾ����������������ж���ϵ�����ʡ�
��ʵ�����ݡ� ����ж�һ����Ԫ��ϵ�Ƿ�Ϊ�ȼ۹�ϵ������ǣ������̼���
�ȼ۹�ϵ������A�ϵĶ�Ԫ��ϵRͬʱ�����Է��ԡ��Գ��Ժʹ����ԣ����R��A�ϵĵȼ۹�ϵ��
��ʵ��ԭ��ͷ�����
��1��A�ϵĶ�Ԫ��ϵ��һ��n��n��ϵ����R=��ʾ������һ��n��n����r[n][n]��ʾn��n�����ϵ��
��2����R�Խ����ϵ�Ԫ�ض���1����R�����Է��ԡ�
C�����㷨��
    int i,flag=1;
    for(i=0;i<N && flag ;i++)
        if(r[i][i]!=1) flag=0;
    ���flag=1�� ��R���Է���ϵ
��3����R�ǶԳƾ�����R���жԳ��ԡ��Գƾ�����жϷ����ǣ�
��
C�����㷨��
    int i,j,flag=1;
    for(i=0;i<N && flag ;i++)
        for(j=i+1;j<N && flag;j++)
             if(r[i][j] &&r[j][i]!=1) flag=0;
    ���flag=1�� ��R�ǶԳƹ�ϵ
��4����ϵ�Ĵ������жϷ�����������i��j��k������
C�����㷨��
        int i,j,k,flag=1;
    for(i=0;i<N && flag;i++)
        for(j=0;j<N && flag;j++)
            for(k=0;k<N && flag;k++)
                if(r[i][j] &&r[j][k] && r[i][k]!=1) flag=0;
    ���flag=1�� ��R�Ǵ��ݹ�ϵ
��5�����̼��ķ������̼����ɵȼ�����ɵļ��ϡ���֪R�ǵȼ۹�ϵ��������㷨�ǰѵȼ�����д�ӡ������
C�����㷨��
    int i,j,flag=1;
    int a[N];
    for(i=0;i<N;i++)
        a[i]=i+1;//i�����i��Ԫ��
    for (i = 0; i < N; i++)
    {
        if (a[i])
        {
            printf("{ ");
            for (j = 0; j < N; j++)
                if (r[i][j] && a[j] != 0)
                {
                    printf("%d ", a[j]);//��ӡ�͵�i��Ԫ���й�ϵ������Ԫ��
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
    int visited[MAX_SIZE] = { 0 }; // ����Ѿ����ʹ���Ԫ��
    int equivalence[MAX_SIZE][MAX_SIZE]; // �洢�ȼ���
    int count = 0; // ��¼�ȼ���ĸ���


    printf("�������Ԫ��ϵ�����ά��n��");
    scanf("%d", &n);
    printf("�������Ԫ��ϵ����R��\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &r[i][j]);
        }
    }

    // �ж��Է���
    for (i = 0; i < n; i++) {
        if (r[i][i] != 1) {
            printf("�ö�Ԫ��ϵ�������Է���\n");
            return 0;
        }
    }

    // �ж϶Գ���
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (r[i][j] != r[j][i]) {
                printf("�ö�Ԫ��ϵ�����жԳ���\n");
                return 0;
            }
        }
    }

    // �жϴ�����
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (r[i][j] == 1) {
                for (k = 0; k < n; k++) {
                    if (r[j][k] == 1 && r[i][k] != 1) {
                        printf("�ö�Ԫ��ϵ�����д�����\n");
                        return 0;
                    }
                }
            }
        }
    }

    int flag = 1;
    int a[100010];
    for (i = 0; i < n; i++)
        a[i] = i + 1;/*i�����i��Ԫ��*/
    for (i = 0; i < n; i++)
    {
        if (a[i])
        {
            printf("{ ");
            for (j = 0; j < n; j++)
                if (r[i][j] && a[j] != 0)
                {
                    printf("%d ", a[j]);/*��ӡ�͵�i��Ԫ���й�ϵ������Ԫ��*/
                    a[j] = 0;
                }
            printf("}\n");
        }
    }
    return 0;
}
#endif

//ʵ���壺
/*
��ʵ��Ŀ�ġ��������ϵ�հ��ķ�����
��ʵ�����ݡ������һ����ϵ�ıհ���Ҫ�󴫵ݱհ���warshall������
��ʵ��ԭ��ͷ�����
��NԪ��Ԫϵ��r[N][N]��ʾ��c[N][N]��ʾ�����հ�������initc(r)��ʾ��c[N][N]��ʼ��Ϊr[N][N]��
��1���Է��հ�����
C�����㷨�� ����ϵ����ĶԽ���������Ԫ����Ϊ1��
    initc(r);
    //����ϵ����ĶԽ���������Ԫ����Ϊ1
for (i = 0; i < N; i++)
    c[i][i] = 1; ��2���ԳƱհ���
    C�����㷨�� �ڹ�ϵ����Ļ����ϣ�����
    initc(r);
for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
        if (c[i][j]) c[j][i] = 1;//����ϵ����ĶԽ���������Ԫ����Ϊ1
��3�����ݱհ���������warshall������
����1����������õĹ�ϵ����T = ���ǡ�
int b[N][N];
initc(r);//��cװ��r
for (m = 1; m < N; m++)  //��r��m�η�,��cװ��
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
    initc(b);//��r��m�η�b����c����
    ����2��warshall����
        initc(r);//��cװ��r
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
//�󴫵ݱհ�
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
//���Է��հ�
void reflexive(int n, int R[MAX_SIZE][MAX_SIZE], int C[MAX_SIZE][MAX_SIZE]) {
    int i;

    for (i = 0; i < n; i++) {
        C[i][i] = 1;
    }
}
//��ԳƱհ�
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
//��ʼ������������
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

//tsr��ֵ����
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

    printf("�������ά��: ");
    scanf("%d", &n);
    printf("�����ϵ����:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &R[i][j]);
            C[i][j] = R[i][j];
        }
    }

    //�Է��հ�
    reflexive(n, R, C);
    write_tsr(n, C, tsrR);
    printf("�Է��հ���:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    Init_C(n, R, C);

    //�ԳƱհ�
    symmetric(n, R, C);
    symmetric(n, tsrR, tsrR);
    printf("�ԳƱհ���:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    Init_C(n, R, C);

    //���ݱհ�
    warshall(n, R, C);
    warshall(n, tsrR, tsrR);
    printf("���ݱհ���:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    printf("ͬʱ�����Է����Գơ������������ʵ�tsr�հ���:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", tsrR[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#endif

//ʵ������
/*
��ʵ��Ŀ�ġ������ж�ŷ��ͼ�ķ�����
��ʵ�����ݡ� �ж�һ��ͼ�ǲ��ǣ�����ǣ��������ŷ��·
��ʵ��ԭ��ͷ�����
��1���ù�ϵ����R=��ʾͼ��
��2��������ͼ���ԣ������н��Ķȶ���ż�������ͼΪŷ��ͼ��
        C�����㷨��
    flag=1;
    for(i=1;i<=n && flag;i++)
    {
        sum=0;
        for(j=1;j<=n;j++)
            if(r[i][j]) sum++;
        if(sum%2==0) flag=0;
    }
    ��� flag  ������ͼ��ŷ��ͼ
��3��������ͼ���ԣ������н�����ȵ��ڳ��ȣ����ͼΪŷ��ͼ��
    C�����㷨��
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
    ��� flag  ������ͼ��ŷ��ͼ
��4�����ŷ��·�ķ�����ŷ��·����ÿ����һ���ҽ�һ�Ρ����û��ݵķ����������ŷ��·��
C�����㷨��
int count=0,cur=0,r[N][N]; // r[N][N]Ϊͼ���ڽӾ���curΪ��ǰ����ţ�countΪŷ��·��������
int sequence[M];// sequence�������ʵ�����У�MΪͼ�ı���
����ͼ��Ϣ;
void try1(int k) //k��ʾ�ߵ����
{
    int i,pre=cur; //j����ǰһ�����λ��,preΪǰһ���ı��
    for (i=0;i<N;i++)
        if (r[cur][i]) //��ǰ��cur�㵽��i����ͨ
            {
//ɾ����ǰ�����i��ıߣ����µ�k�ε����i���ѵ�i������Ϊ��ǰ��
                r[cur][i]=0;cur=sequence[k]=i;
                if (k<M) try1(k+1); //����һ����
                else prt1();//���������бߣ���ӡһ����
//�������������㣬˵����ǰ��ĳ���Ϊ0�����ݣ�����һλ��
                r[pre][i]=1;cur=pre;
            }
}
*/
#if 0//ʧ����Ʒ
#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int graph[MAX][MAX], visited[MAX], degree[MAX], n, m;

void createGraph() {
    int i, j, k, flag = 0;
    printf("��������Ŀ: ");
    scanf("%d", &n);
    printf("����ߵ���Ŀ:");
    scanf("%d", &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            graph[i][j] = 0;
        }
    }
    printf("Ĭ��ͼΪ����ͼ,���������ͼ���1��");
    scanf("%d", &flag);
    printf("�����<u,v>����Ϣ");
    for (k = 0; k < m; k++) {
        scanf("%d%d", &i, &j);
        if(flag == 0)graph[i][j] = graph[j][i] = 1;
        if(flag == 1)graph[i][j] = 1;
    }
}

void printGraph() {
    int i, j;
    printf("\nͼ���ڽӾ�����:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

void dfs(int u) {//�����������
    int v;
    visited[u] = 1;
    for (v = 0; v < n; v++) {
        if (graph[u][v] && !visited[v]) {
            dfs(v);
        }
    }
}

int isConnected() {//���Ƿ���ͨ
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

int isEulerian() {//���Ƿ�Ϊŷ��ͼ
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
    createGraph();//��ͼ
    printGraph();//��ӡͼ
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
        printf("\n��ͼ����ŷ��ͼ\n");
    }
    else {
        printf("\n��ͼ��ŷ��ͼ\n");
        printf("\nŷ����·�ǣ�\n");
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
#if 0//������Ʒ
#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int graph[MAX][MAX], visited[MAX], degree[MAX], inDegree[MAX], outDegree[MAX], n, m, directed;

void createGraph() {
    int i, j, k;
    printf("��������Ŀ: ");
    scanf("%d", &n);
    printf("����ߵ���Ŀ: ");
    scanf("%d", &m);
    printf("ͼ������ͼ��(1������, 0������): ");
    scanf("%d", &directed);
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            graph[i][j] = 0;
        }
    }
    printf("�����<u,v>����Ϣ:\n");
    for (k = 0; k < m; k++) {
        scanf("%d%d", &i, &j);
        graph[i][j] += 1;
        if (directed) {//����ͼ�������
            outDegree[i]++;
            inDegree[j]++;
        }
        else {
            graph[j][i] += 1;//����ͼ�Գ�
        }
    }
    for (i = 1; i <= n; i++) {//����ͼ�������
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
    printf("\nͼ���ڽӾ�����:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

void dfs(int u) {
    int v;
    visited[u] = 1;//��Ƿ���
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
        {//�ж�����û������
            return 0;
        }
    }
    return 1;
}

int isEulerian() {
    int i, odd = 0;//odd�ж�������ĵ����
    if (!isConnected()) 
    {//�ж��Ƿ���ͨ
        return 0;
    }
    if (directed) //����ͼ
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
        {//��������㡢����ŷ����·
            return 2;
        }
        else if (odd == 2)
        {//��2������Ķ���������,����ŷ��·
            return 1;
        }
        return 0;
    }
    return 2;
}

void printEulerianPath(int u) //�ϣ�ԭ�������ŷ��ͼ���ڵ�ŷ��·
{
    int v;
    for (v = 1; v <= n; v++) 
    {
        if (graph[u][v]) 
        {
            if (!directed)
            {
                graph[u][v]--;//ɾ�������ߴ����Ѿ����ʹ�
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
                if (temp == 1)//�и�ߡ��ȴ�����������
                {
                    int ii;
                    static int state = 0;//�����ж��Ƿ��������
                    for (ii = 1; ii <= n; ii++) // �ҵ���һ����ͨ���������
                    {
                        if (graph[u][ii] && degree[ii] != 1)
                        {
                            graph[u][ii]--;//ɾ�������ߴ����Ѿ����ʹ�
                            graph[ii][u]--; degree[u]--; degree[ii]--;
                            printEulerianCircuit(ii); // ����һ����ͨ��������㿪ʼ���±���
                            state++;//����һ����ͨ����������
                            break;
                        }
                    }
                    if (state) break;//������Ѳ�����
                    graph[u][v]--;//ɾ�������ߴ����Ѿ����ʹ�
                    graph[v][u]--;
                    degree[u]--;
                    degree[v]--;
                    printEulerianCircuit(v);
                    break;
                }
                graph[u][v]--;//ɾ�������ߴ����Ѿ����ʹ�
                graph[v][u]--;
                degree[u]--;
                degree[v]--;
                printEulerianCircuit(v);
            }
            if (directed)
            {
                if (temp == 1)//�и�ߡ��ȴ�����������
                {
                    int ii;
                    static int state = 0;//�����ж��Ƿ��������
                    for (ii = 1; ii <= n; ii++) // �ҵ���һ����ͨ���������
                    {
                        if (graph[u][ii] && inDegree[ii] != 1)
                        {
                            graph[u][ii]--;
                            outDegree[u]--;
                            inDegree[ii]--;
                            printEulerianCircuit(ii); // ����һ����ͨ��������㿪ʼ���±���
                            state++;//����һ����ͨ����������
                            break;
                        }
                    }
                    if (state) break;//������Ѳ�����
                    graph[u][v]--;//ɾ�������ߴ����Ѿ����ʹ�
                    outDegree[u]--;
                    inDegree[v]--;
                    printEulerianCircuit(v);
                    break;
                }
                graph[u][v]--;//ɾ�������ߴ����Ѿ����ʹ�
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
        printf("\n��ͼ����ŷ��ͼ\n");
    }
    else {
        printf("\n��ͼ��ŷ��ͼ\n");
        printf("���ŷ��·�ǵ������\n");
        start = 1;
        if (directed) 
        {
            for (i = 1; i <= n; i++) {
                if (outDegree[i] > inDegree[i]) {//����ͼ���Ӧ�ó���>���
                    start = i;
                    break;
                }
            }
        }
        else 
        {
            for (i = 1; i <= n; i++) {
                if (degree[i] % 2) {//�������Ϊ���
                    start = i;
                    break;
                }
            }
        }
        if (type == 1) 
        {
            printf("\nŷ��·:\n");
            printEulerianPath(start);//���ŷ��·
        }
        else 
        {
            printf("\nŷ����·:\n");
            printEulerianCircuit(start);//���ŷ����·
        }
        printf("\n");
    }
    return 0;
}
#endif
#if 0//ʺɽ���뵫�ǿ����������ŷ����·,ŷ��ͼ�������
#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int graph[MAX][MAX], visited[MAX], degree[MAX], inDegree[MAX], outDegree[MAX], n, m, mm, directed;

void createGraph() {
    int i, j, k;
    printf("��������Ŀ: ");
    scanf("%d", &n);
    printf("����ߵ���Ŀ: ");
    scanf("%d", &m);
    printf("ͼ������ͼ��(1������, 0������): ");
    scanf("%d", &directed);
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            graph[i][j] = 0;
        }
    }
    printf("�����<u,v>����Ϣ:\n");
    for (k = 0; k < m; k++) {
        scanf("%d%d", &i, &j);
        graph[i][j] = 1;
        if (directed) {//����ͼ�������
            outDegree[i]++;
            inDegree[j]++;
        }
        else {
            graph[j][i] = 1;//����ͼ�Գ�
        }
    }
    for (i = 1; i <= n; i++) {//����ͼ�������
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
    printf("\nͼ���ڽӾ�����:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

void dfs(int u) {
    int v;
    visited[u] = 1;//��Ƿ���
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
        {//�ж�����û������
            return 0;
        }
    }
    return 1;
}

int isEulerian() {
    int i, odd = 0;//odd�ж�������ĵ����
    if (!isConnected())
    {//�ж��Ƿ���ͨ
        return 0;
    }
    if (directed) //����ͼ
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
        {//��������㡢����ŷ����·
            return 2;
        }
        else if (odd == 2)
        {//��2������Ķ���������,����ŷ��·
            return 1;
        }
        return 0;
    }
    return 2;
}

void printEulerianPath(int u) //�ϣ�ԭ�������ŷ��ͼ���ڵ�ŷ��·����Ŀǰֻ���˵������һ��·
{
    int v;
    for (v = 1; v <= n; v++)
    {
        if (graph[u][v])
        {
            if (!directed)
            {
                graph[u][v]--;//ɾ�������ߴ����Ѿ����ʹ�
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
        return 1;//��ʱ�õ������������ĵ����һ������
    }
    if (degree[u] == 1 && m != 0)
    {
        return 2;//��ʱ�õ����������β�����ж��Ƿ��ȱ���������
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
    static P_OK = 1;//���DFS�������鱣�棬���������±�
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
        if (graph[u][v])//��·������֧һ������DFS��һ������β������Ҫ�ȱ��������ڱ��������
        {
            if (!directed)
            {
                if (isLastSecnode(u))
                {
                    int i = 1;//��������
                    for (i = 1; i <= n; i++)
                    {
                        if (graph[u][i] && degree[i] != 1)
                        {
                            //��ֵ���£�������֧һ������ͼһ������ͼ
                            graph[u][i]--; graph[i][u]--; m--;
                            degree[u]--; degree[i]--;
                            luxian[P_OK++] = u;
                            //DFS
                            printEulerianCircuit(i);
                            //����
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
                    //����
                    graph[u][v]++; graph[v][u]++; m++;
                    degree[u]++; degree[v]++;
                    luxian[--P_OK] = 0;

                }
                else
                {
                    //��ֵ���£�������֧һ������ͼһ������ͼ
                    graph[u][v]--; graph[v][u]--; m--;
                    degree[u]--; degree[v]--;
                    luxian[P_OK++] = u;
                    //DFS
                    printEulerianCircuit(v);
                    //����
                    graph[u][v]++; graph[v][u]++; m++;
                    degree[u]++; degree[v]++;
                    luxian[--P_OK] = 0;
                }
            }
            else
            {
                if (isLastSecnode(u))
                {
                    int i = 1;//��������
                    for (i = 1; i <= n; i++)
                    {
                        if (graph[u][i] && degree[i] != 1)
                        {
                            //��ֵ���£�������֧һ������ͼһ������ͼ
                            graph[u][i]--;  m--;
                            outDegree[u]--; inDegree[i]--;
                            luxian[P_OK++] = u;
                            //DFS
                            printEulerianCircuit(i);
                            //����
                            graph[u][i]++;  m++;
                            outDegree[u]++; inDegree[i]++;
                            luxian[--P_OK] = 0;
                        }
                    }
                    //��ֵ���£�������֧һ������ͼһ������ͼ
                    graph[u][v]--;  m--;
                    outDegree[u]--; inDegree[v]--;
                    luxian[P_OK++] = u;
                    //DFS
                    printEulerianCircuit(v);
                    //����
                    graph[u][v]++;  m++;
                    outDegree[u]++; inDegree[v]++;
                    luxian[--P_OK] = 0;
                }
                else
                {
                    //��ֵ���£�������֧һ������ͼһ������ͼ
                    graph[u][v]--;  m--;
                    outDegree[u]--; inDegree[v]--;
                    luxian[P_OK++] = u;
                    //DFS
                    printEulerianCircuit(v);
                    //����
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
        printf("\n��ͼ����ŷ��ͼ\n");
    }
    else {
        if (type == 1)
            printf("����Ϊ��ŷ��ͼ��������ŷ��·\n");
        else printf("\n��ͼ��ŷ��ͼ\n");
        start = 1;
        if (directed)
        {
            for (i = 1; i <= n; i++) {
                if (outDegree[i] > inDegree[i]) {//����ͼ���Ӧ�ó���>���
                    start = i;
                    break;
                }
            }
        }
        else
        {
            for (i = 1; i <= n; i++) {
                if (degree[i] % 2) {//�������Ϊ���
                    start = i;
                    break;
                }
            }
        }
        if (type == 1)
        {
            printf("\n�������ŷ��·:\n");
            printEulerianPath(start);//���ŷ��·
        }
        else
        {
            printf("\nŷ����·:\n");
            printEulerianCircuit(start);//���ŷ����·
        }
        printf("\n");
    }
    return 0;
}
#endif
//����ܶ�ͼ
#if 0
#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int graph[MAX][MAX], visited[MAX], path[MAX], n, m;

void createGraph() {
    int i, j, k;
    printf("��������Ŀ: ");
    scanf("%d", &n);
    printf("����ߵ���Ŀ: ");
    scanf("%d", &m);
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            graph[i][j] = 0;
        }
    }
    printf("�����<u,v>����Ϣ:\n");
    for (k = 0; k < m; k++) {
        scanf("%d%d", &i, &j);
        graph[i][j] += 1;
        graph[j][i] += 1;//����ͼ�Գ�
    }
}

void printGraph() {
    int i, j;
    printf("\nͼ���ڽӾ�����:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

void dfs(int u, int depth) {
    int v;
    visited[u] = 1;//��Ƿ���
    path[depth] = u;//����ǰ�ڵ����·����
    if (depth == n) {//�ҵ��˹��ܶٻ�·
        printf("�ҵ��˹��ܶٻ�·: ");
        for (v = 1; v <= n; v++) {
            printf("%d ", path[v]);
        }
        printf("\n");
        exit(0);//��������
    }
    for (v = 1; v <= n; v++) {
        if (graph[u][v] && !visited[v]) {
            dfs(v, depth + 1);
        }
    }
    visited[u] = 0;//����
}

void findHamiltonianPath() {
    int i, j, start;
    for (i = 1; i <= n; i++) {
        visited[i] = 0;
    }
    printf("������ܶ�·���ǵ������\n");
    for (start = 1; start <= n; start++) {
        path[1] = start;
        dfs(start, 1);
    }
    printf("û���ҵ����ܶٻ�·\n");
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
��������֮�����ҽ���һ���ţ�ͨ��ŷ��ͼ���ж����ж��Ƿ��������·���������еľ���
�����·�߿������꣬��ô��ӡ�����е�·��(�����ͬ)������·�ߵ�����
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 50
int r[size][size];
char name[size][size];//���������
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
void try1(int k) //k��ʾ�ߵ����
{
    int i, pre = cur; //j����ǰһ�����λ��,preΪǰһ���ı��
    for (i = 1; i < size; i++)
        if (r[cur][i]) //��ǰ��cur�㵽��i����ͨ
        {
            //ɾ����ǰ�����i��ıߣ����µ�k�ε����i���ѵ�i������Ϊ��ǰ��
            r[cur][i] = 0; cur = sequence[k] = i;
            if (k < edgenum - 1) try1(k + 1); //����һ����
            else
            {
                prt1();//���������бߣ���ӡһ����
                count++;
            }
            //�������������㣬˵����ǰ��ĳ���Ϊ0�����ݣ�����һλ��
            r[pre][i] = 1; cur = pre;
        }
}

int main()
{
    //����ͼŷ��ͼ�ж�
    //ÿ���ڵ�ĳ��Ⱥ�������

    printf("��ͼ�Ľڵ����ͱ���Ϊ:");
    scanf("%d %d", &n, &edgenum);

    for (int i = 1; i <= n; i++)
    {
        printf("��Ӧ�ľ��������:\n");
        scanf("%s", &name[i]);
    }

    for (int i = 0; i < edgenum; i++)
    {
        int u, v;
        printf("�����յ㣺");
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
        //��Ϊ�����ֶ���ö���Ϊ��������������ż����
        //����Ϊ����ͼ�ó������ȣ����Գ���Ⱦ�Ϊ����
    }
    if (flag == 0)
        printf("������ͼ����ŷ��ͼ\n");
    else
        printf("������ͼ��ŷ��ͼ\n");
    try1(0);
    printf("ŷ��·������%d", count);
    return 0;
}
#endif

//�����ߣ�
/*
��ʵ��Ŀ�ġ����������Ŷ������ķ�����
��ʵ�����ݡ����Ŷ�������ͨ�ű����е�Ӧ�á�Ҫ������һ��ͨ�ŷ��ŵ�ʹ��Ƶ�ʣ����ͨ�ŷ��Ŷ�Ӧ��ǰ׺�롣
��ʵ��ԭ��ͷ�����
��1����һά����f[N]����ͨ�ŷ��ŵ�ʹ��Ƶ�ʣ��������Ŷ������ķ������ÿ��ͨ�ŷ��ŵ�ǰ׺�롣
��2�������������Ŷ����������ǰ׺��ʱ�������ı���������
#include <stdio.h>
#include <stdlib.h>
#define N 13
struct tree {
    float num;
    struct tree *Lnode;
    struct tree *Rnode;
}* fp[N];//������
char s[2*N];//��ǰ׺��

void inite_node(float f[],int n)//����Ҷ�ӽ��
{
    int i;
    struct tree *pt;
    for(i=0;i<n;i++)
    {
        pt=(struct tree *)malloc(sizeof(struct tree));//����Ҷ�ӽ��
        pt->num=f[i];
        pt->Lnode=NULL;pt->Rnode=NULL;
        fp[i]=pt;
    }
}

void sort(struct tree * array[],int n)//����N-n������뵽���ź���������С�
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

struct tree * construct_tree(float f[],int n)//������
{
    int i;
    struct tree *pt;
    for(i=1;i<N;i++)
    {
        pt=(struct tree *)malloc(sizeof(struct tree));//���ɷ�Ҷ�ӽ��
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
        if(p->Lnode==NULL) {//Pָ��Ҷ��
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
    inite_node(f,N); //��ʼ�����
    head=construct_tree(f,N);//����������
    s[0]=0;
    preorder(head,0,'l');//������
}
*/
#if 0
int main()
{

    return 0;
}
#endif

//ʵ��ˣ�
/*
��ʵ��Ŀ�ġ�����Ⱥ���ж�������
��ʵ�����ݡ��������ϵͳ(A,*)�ļ���A��*�����������ж�(A��*)�Ƿ���Ⱥ��
��ʵ��ԭ��ͷ�����
��1����һά����a[n]��������A��
��2���ö�ά����op[n][n]���������
��3������Ⱥ�Ķ��壬����ϵͳ(A��*)��ΪȺ����������ѱ�������*����⣬��Ӧ��������������������*����ɽ�ϡ�����Ԫe�� A���κ�Ԫ�ض�����Ԫ��
*����ɽ�ϣ�
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            for(k=0;k<N;k++)
            {
                for(l=0;l<N;l++)
                {
                    if(op[i][j]==a[l]) x=l;/*op[i][j] ����a*b
if (op[j][k] == a[l]) y = l;/*op[j][k] ����b*c
                }
                if (op[i][y] != op[x][k])/*op[i][y]����a*(b*c)
                {
                    printf("(%d*%d)*%d=%d,%d*(%d*%d)=%d,�����ǲ��ɽ�ϣ�\n",
                        a[i], a[j], a[k], op[x][k], a[i], a[j], a[k], op[i][y]);
                    flag = 0;/*����������
                }
            }
            if (flag) printf("�����ǿɽ�ϣ�\n");
        ����Ԫe:
            flag = 0;
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                    if (op[i][j] != a[j] || op[j][i] != a[j]) break;
                if (j == N)
                {
                    printf("Ⱥ����Ԫ%d��\n", a[i]);
                    e = a[i];
                    flag = 1; break;
                }
            }
            if (!flag) printf("Ⱥû����Ԫ��\n");
            A���κ�Ԫ�ض�����Ԫ��
                flag = 1;
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                    if (op[i][j] == e && op[j][i] == e) break;/*e����Ԫ
                if (j == N)
                {
                    flag = 0;
                    printf("A��Ԫ��%dû����Ԫ��\n", a[j]);
                }
            }
            if (flag) printf("A���κ�Ԫ�ض�����Ԫ��\n");

*/
#if 0

int main()
{

    return 0;
}
#endif
