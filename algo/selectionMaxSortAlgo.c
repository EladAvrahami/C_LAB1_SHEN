#include <stdio.h>
//int arr[] = {64, 25, 12, 22, 11};
// פונקציית מיון מקסימום (Selection Sort)
void selectionSort(int arr[], int size) {
    for (int i = size - 1; i > 0; i--) { 
        int maxIndex = i;
        for (int j = 0; j < i; j++) { 
            if (arr[j] > arr[maxIndex]) { 
                maxIndex = j; 
            }
        }
        // החלפה של המספר הגדול ביותר עם המקום האחרון
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

// הדגמה
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    selectionSort(arr, size);

    printf("sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}