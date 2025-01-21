#include <stdio.h>

// Function to merge two halves of an array
void merge(int arr[], int left, int right) {
    if (left >= right) return;  // Base case: only one element, no need to merge
    
    int mid = left + (right - left) / 2;  // Find the middle point
    merge(arr, left, mid);  // Sort the left half
    merge(arr, mid + 1, right);  // Sort the right half

    // Create temporary arrays for the left and right subarrays
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = arr[mid + 1 + i];
    }

    // Merge the temporary arrays back into the original array
    int i = 0;  // Initial index of the left subarray
    int j = 0;  // Initial index of the right subarray
    int k = left;  // Initial index of the merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
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
    int arr[] = {12, 11, 13, 5, 6, 7};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array

    printf("Original array: \n");
    printArray(arr, n);

    merge(arr, 0, n - 1);  // Sort the array using merge sort

    printf("\nSorted array: \n");
    printArray(arr, n);

    return 0;
}
