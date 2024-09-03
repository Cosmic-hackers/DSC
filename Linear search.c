//WITHOUT USER INPUT:
// C code to linearly search x in arr[].

#include <stdio.h>

int search(int arr[], int N, int x)
{
    for (int i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

// Driver code
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int N = sizeof(arr) / sizeof(arr[0]);

    // Function call
    int result = search(arr, N, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}


//Updated Code (with User Input):
#include <stdio.h>

// Function to search for an element in an array
int search(int arr[], int N, int x) {
    for (int i = 0; i < N; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;  // Element not found
}

// Driver code
int main(void) {
    int N, x;

    // Ask user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    // Declare array with the size provided by the user
    int arr[N];

    // Take input for array elements
    printf("Enter %d elements of the array:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask user for the element to search
    printf("Enter the element to search: ");
    scanf("%d", &x);

    // Function call to search for the element
    int result = search(arr, N, x);

    // Output the result
    if (result == -1)
        printf("Element is not present in array\n");
    else
        printf("Element is present at index %d\n", result);

    return 0;
}
