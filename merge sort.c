#include <stdio.h>

void merge(int a[], int lb, int mid, int ub) {
    int i = lb;
    int j = mid + 1;
    int k = 0;
    int temp[ub - lb + 1];

    while (i <= mid && j <= ub) {
        if (a[i] <= a[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = a[i++];
    }

    while (j <= ub) {
        temp[k++] = a[j++];
    }

    for (i = lb, k = 0; i <= ub; i++, k++) {
        a[i] = temp[k];
    }
}

void mergesort(int a[], int lb, int ub) {
    if (lb < ub) {
        int mid = (lb + ub) / 2;
        mergesort(a, lb, mid);
        mergesort(a, mid + 1, ub);
        merge(a, lb, mid, ub);
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

    mergesort(a, 0, n - 1);

    printf("Sorted elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
