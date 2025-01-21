#include <stdio.h>

// Function prototype
int binarySearch(int arr[], int left, int right, int x);

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result != -1)
        printf("Element is present at index %d\n", result);
    else
        printf("Element is not present in array\n");
    return 0;
}

// Recursive binary search function
int binarySearch(int arr[], int left, int right, int x) {
    // 1. Check base case
    if (right >= left) {
        int mid = left + (right - left) / 2;

        // 2. If the element is present at the middle itself
        if (arr[mid] == x)
            return mid;

        // 3. If element is smaller than mid, then it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);

        // 4. Else the element can only be present in right subarray
        return binarySearch(arr, mid + 1, right, x);
    }

    // 5. Element is not present in array
    return -1;
}