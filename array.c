#include <stdio.h>
int main()
{
    int A[3][3], B[3][3], C[3][3], i, j, a;
    printf("Enter the elements for the matrix A[%d][%d]:\n", i, j);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the elements for the matrix B[%d][%d]:\n", i, j);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            scanf("%d", &B[i][j]);
        }
    }
}