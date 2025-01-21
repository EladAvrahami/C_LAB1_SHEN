#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;

    // Traverse through all array elements
    for (i = 0; i < n - 1; i++) {
        swapped = 0;  // Flag to check if any swapping happens

        // Last i elements are already in place
        for (j = 0; j < n - 1 - i; j++) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        // If no two elements were swapped in the inner loop, then the array is already sorted
        if (swapped == 0) {
            break;
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {200, 54, 25, 12, 22, 11, 90};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate number of elements in the array

    printf("Original array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);  // Sort the array

    printf("\nSorted array: \n");
    printArray(arr, n);

    return 0;
}
