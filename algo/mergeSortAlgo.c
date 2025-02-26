#include <stdio.h>

// פונקציה למיזוג שני מערכים ממוינים
void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;

    // כל עוד יש איברים בשני המערכים
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // אם נשארו איברים במערך הראשון
    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    // אם נשארו איברים במערך השני
    while (j < n2) {
        merged[k++] = arr2[j++];
    }
}

// הדגמה
int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[n1 + n2]; // מערך מאוחד בגודל n1+n2

    mergeSortedArrays(arr1, n1, arr2, n2, merged);

    printf("מערך ממוזג: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    
    return 0;
}
