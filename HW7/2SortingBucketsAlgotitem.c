#include <stdio.h>
#include <stdlib.h>

// Function to perform insertion sort on a bucket
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        // Shift elements of arr[0..i-1] that are greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function to perform bucket sort
void bucketSort(int arr[], int n) {
    if (n <= 0) return;

    // Find the maximum value in the array
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Create empty buckets
    int bucketCount = 10;  // You can adjust this depending on the input range
    int buckets[bucketCount][n];
    int bucketSizes[bucketCount];  // Array to store the size of each bucket
    for (int i = 0; i < bucketCount; i++) {
        bucketSizes[i] = 0;  // Initialize the bucket sizes to zero
    }

    // Put array elements in different buckets
    for (int i = 0; i < n; i++) {
        int index = arr[i] * bucketCount / (max + 1);  // Calculate the bucket index
        buckets[index][bucketSizes[index]] = arr[i];
        bucketSizes[index]++;
    }

    // Sort each bucket using insertion sort
    for (int i = 0; i < bucketCount; i++) {
        insertionSort(buckets[i], bucketSizes[i]);
    }

    // Concatenate the sorted buckets into the original array
    int index = 0;
    for (int i = 0; i < bucketCount; i++) {
        for (int j = 0; j < bucketSizes[i]; j++) {
            arr[index++] = buckets[i][j];
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
    int arr[] = {0.42, 0.32, 0.64, 0.51, 0.81, 0.53};  // Example array of floats in the range [0, 1)
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate number of elements in the array

    printf("Original array: \n");
    printArray(arr, n);

    bucketSort(arr, n);  // Sort the array using bucket sort

    printf("\nSorted array: \n");
    printArray(arr, n);

    return 0;
}
