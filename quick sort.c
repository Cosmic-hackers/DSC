
#include <stdio.h>

void quicksort(int a[50], int lb, int ub) {
    int i, j, pivot, temp;
    if (lb < ub) {
        pivot = lb;
        i = lb;
        j = ub;
    
        while (i < j) {
            while (a[i] <= a[pivot] && i < ub)
                i++;
            while (a[j] > a[pivot])
                j--;
            if (i < j) { 
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;

        quicksort(a, lb, j - 1);
        quicksort(a, j + 1, ub);
    }
}

int main() {
    int i, n, a[50];
    printf("Enter the size of N: ");
    scanf("%d", &n);
    printf("Enter elements in the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n - 1);
    printf("Sorted elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
