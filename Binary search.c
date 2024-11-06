#include <stdio.h>

// Function to perform binary search
int binary_search(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // Check if the target is present at mid
        if (arr[mid] == target)
            return mid;  // Return the index of the target

        // If target is greater, ignore the left half
        else if (arr[mid] < target)
            low = mid + 1;

        // If target is smaller, ignore the right half
        else
            high = mid - 1;
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binary_search(arr, size, target);
    if (result != -1)
        printf("Element is present at index %d\n", result);
    else
        printf("Element is not present in the array\n");

    return 0;
}
