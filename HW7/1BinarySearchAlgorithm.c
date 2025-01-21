#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target)
{
    int left = 0;         // 1. Initialize the left index
    int right = size - 1; // 2. Initialize the right index

    while (left <= right)
    {                                        // 3. Loop until the left index is less than or equal to the right index
        int mid = left + (right - left) / 2; // 4. Calculate the middle index

        if (arr[mid] == target)
        {               // 5. Check if the target is at the middle index
            return mid; // 6. If found, return the index
        }

        if (arr[mid] < target)
        {                   // 7. If the target is greater than the middle element
            left = mid + 1; // 8. Move the left index to mid + 1
        }
        else
        {                    // 9. If the target is less than the middle element
            right = mid - 1; // 10. Move the right index to mid - 1
        }
    }

    return -1; // 11. If the target is not found, return -1
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};           // 12. Define a sorted array
    int size = sizeof(arr) / sizeof(arr[0]); // 13. Calculate the size of the array
    int target = 10;                         // 14. Define the target value to search for

    int result = binarySearch(arr, size, target); // 15. Call the binary search function

    if (result != -1)
    {                                                       // 16. Check if the target was found
        printf("Element is present at index %d\n", result); // 17. Print the index of the target
    }
    else
    {
        printf("Element is not present in array\n"); // 18. Print that the target is not in the array
    }

    return 0; // 19. Return 0 to indicate successful execution
}