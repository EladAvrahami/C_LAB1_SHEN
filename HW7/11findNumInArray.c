#include <stdio.h>
//is num in array 

int searchNumber(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return 1; // Number found
        }
    }
    return 0; // Number not found
}

int main() {
    int arr[] = {12, 7, 5, 3, 9, 2, 15, 0}; // Array ending with zero and all positive numbers
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    printf("Enter a natural number to search: ");
    scanf("%d", &num);

    if (searchNumber(arr, size, num)) {
        printf("The number %d in the array.\n", num);
    } else {
        printf("The number %d not in array.\n", num);
    }

    return 0;
}