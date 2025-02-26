#include <stdio.h>

// Function to perform bucket sort
void bucketSort(int arr[], int n)
{
    int i, j;
    int count[10] = {0}; // Histogram to count occurrences of digits 0-9

    // Count the number of occurrences of each digit
    for (i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // Sort the array based on the counts
    for (i = 0, j = 0; i < 10; i++)
    {
        while (count[i] > 0)
        {
            arr[j++] = i;
            count[i]--;
        }
    }
}

int main()
{
    int arr[] = {9, 0, 2, 8, 7, 1, 3, 5, 4, 6, 2, 1, 0}; // Input array with at least 11 different digits
    int n = sizeof(arr) / sizeof(arr[0]);                // Size of the array

    bucketSort(arr, n); // Sort the array

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}