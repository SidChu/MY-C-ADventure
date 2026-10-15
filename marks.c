#include <stdio.h>

int main()
{
    float marks[50], sum = 0, avg;
    int i;

    printf("Enter marks of 50 students:\n");
    for (i = 0; i < 50; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum = sum + marks[i];
    }

    avg = sum / 50;

    printf("\nAverage marks = %f\n", avg);

    return 0;
}