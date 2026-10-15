#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, r1, r2;
    printf("Enter the coefficients \n");
    scanf("%f %f %f", &a, &b, &c);
    if(a==0)
    {
        printf("Not a quadratic equation");
        return 0;
    }
    d = b * b - 4 * a * c;
if (d == 0)
{
    printf("The roots are real and equal\n");

    r1 = -b / (2 * a);
    r2 = -b / (2 * a);

    printf("The roots are %f and %f", r1, r2);
}
else if (d > 0)
{
    printf("The roots are real but different\n");

    r1 = (-b + sqrt(d)) / (2 * a);
    r2 = (-b - sqrt(d)) / (2 * a);

    printf("The roots are %f and %f", r1, r2);
}
else
{
    printf("The equation has no real roots\n");
}
}
