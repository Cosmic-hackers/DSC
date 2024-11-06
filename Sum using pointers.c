#include <stdio.h>

int main() {
    int a[100], n, i, sum = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + *(a + i); // Corrected pointer syntax
    }

    printf("Sum of numbers is %d\n", sum);

    return 0;
}
