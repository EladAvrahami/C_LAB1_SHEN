#include <stdio.h>

// 1. Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    // 2. Loop through each element in the array
    for (int i = 0; i < size; i++) {
        // 3. Check if the current element is the target
        if (arr[i] == target) {
            // 4. Return the index if the target is found
            return i;
        }
    }
    // 5. Return -1 if the target is not found
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int target = 3;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}