#include <stdio.h>

int main() {
    int a[20], i, j, n, swap;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Selection sort logic
    for (i = 0; i < n - 1; i++) {
        int min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        if (min != i) {
            swap = a[i];
            a[i] = a[min];
            a[min] = swap;
        }
    }

    printf("Sorted array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
