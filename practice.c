#include <stdio.h>
int mutiply(int a, int b)
{
    return (a * b);
}
int main()
{
    int x = 0, y = 0;

    printf("Enter the numbers:");
    scanf("%d %d", &x, &y);

    mutiply(x, y);
    printf("The product is %d", mutiply(x, y));
}
