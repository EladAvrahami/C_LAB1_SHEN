#include <stdio.h>
//use sizeof to calc array length
int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Declare and initialize the array
    int length = (sizeof(arr) / sizeof(arr[0])-1);  // Calculate the number of elements in the array

    printf("The length of the array is: %d\n", length);

    return 0;
}


/*
sizeof(arr) gives the total size of the array in bytes.
sizeof(arr[0]) gives the size of the first element of the array, which is the same for all elements of the array (since all elements are of the same type).
Dividing sizeof(arr) by sizeof(arr[0]) gives the number of elements in the array.

*/
