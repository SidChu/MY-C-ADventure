#include <stdio.h>
int main()
{
    int array[2][2], sum = 0;
    printf("Enter the elements for the array here:");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&array[i][j]);
            sum=sum+array[i][j];
        }
    }
    printf("Sum is =%d",sum);
}