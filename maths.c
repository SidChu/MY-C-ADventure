#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, result;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Average\n");
    printf("6. Percentage\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 5)
    {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
    }
    else if (choice == 6)
    {
        printf("Enter obtained marks and total marks: ");
        scanf("%f %f", &num1, &num2);
    }

    switch (choice)
    {
        case 1:
            result = num1 + num2;
            printf("Result: %f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %f\n", result);
            break;
        case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("Result: %f\n", result);
            }
            else
            {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        case 5:
            result = (num1 + num2) / 2;
            printf("Average: %f\n", result);
            break;
        case 6:
            if (num2 != 0)
            {
                result = (num1 / num2) * 100;
                printf("Percentage: %f%%\n", result);
            }
            else
            {
                printf("Error! Total marks cannot be zero.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}