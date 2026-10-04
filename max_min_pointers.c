
#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max, min;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    max = min = *ptr;

    for (i = 1; i < n; i++) {
        ptr++;

        if (*ptr > max) {
            max = *ptr;
        }

        if (*ptr < min) {
            min = *ptr;
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}