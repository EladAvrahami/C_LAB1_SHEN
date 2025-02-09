#include <stdio.h>

int max(int* arr, int n) {
    //  case1: if the array has only one element, return its index (0)
    if (n == 1) {
        return 0;
    }

    // Recursive case2: find the index of the maximum element in the rest of the array
    int maxIndex = max(arr, n - 1);

    // Compare the last element with the maximum element found so far
    if (arr[n - 1] > arr[maxIndex]) {
        return n - 1;
    } else {
        return maxIndex;
    }
}

int main() {
    int arr[] = {1, 3, 5, 72, 2, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = max(arr, n);
    printf("The index of the largest element is: %d\n", index);
    return 0;
}