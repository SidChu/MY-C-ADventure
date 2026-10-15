#include <stdio.h>
int main()
{int pattern[3][3],i,j;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
    printf("Enter the elements for the array:");
    scanf("%d",&pattern[i][j]);
    printf("\n");
        }
    }
    printf("The matrix formed by this array is as follows :\n %d",pattern[i][j]);

}