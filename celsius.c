#include<stdio.h>
int main()
{
    int C;
    float F;
    while(1)
    {
    printf("Enter temp in Celsius\n");
    scanf("%d",&C);
    F=(C*9.0/5.0)+32;
    printf("Fahrenheit =%f\n",F);
    }
}