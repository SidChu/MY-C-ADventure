#include <stdio.h>

long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int num, terms, i;

    printf("Enter a number to calculate factorial: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial of a negative number doesn't exist.\n");
    }
    else
    {
        printf("Factorial of %d = %lld\n", num, factorial(num));
    }

    printf("\nEnter number of terms for Fibonacci series: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");
    for (i = 0; i < terms; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}