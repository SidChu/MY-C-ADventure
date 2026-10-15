#include <stdio.h>
int factorial(int n)
{
    printf("Enter a number whose factorial is needed:");
    if (n == 0 || n == 1)
    {
      return 1;
    }
    else
    {
      return  (n *factorial(n - 1));
    }
}

int main()
{
    factorial();
    printf("The factorial is %d",factorial());
}