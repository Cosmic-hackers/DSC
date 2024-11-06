#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    ptr = (int*) malloc(n * sizeof(int));

    // Check if memory has been successfully allocated
    if (ptr == NULL) {
        printf("Memory not allocated\n");
        exit(0);
    } else {
        printf("Memory allocated successfully\n");

        printf("Enter the elements:\n");
        for (i = 0; i < n; i++) {
            scanf("%d", (ptr + i)); // Store elements in allocated memory
        }

        printf("The elements of the array are:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", *(ptr + i)); // Access elements using pointer
        }
        printf("\n");

        // Free the allocated memory
        free(ptr);
    }

    return 0;
}
