#include <stdio.h>

int main() {
    int arr[] = {45, 12, 8, 30, 25};
    int n = 5;
    int i, j, temp;
    int target, found = 0;

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array in ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter a number to search: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("Found! The number %d is in the array.\n", target);
    } else {
        printf("Not found! The number %d is not in the array.\n", target);
    }

    return 0;
}