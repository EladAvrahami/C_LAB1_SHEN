#include <stdio.h>

//Binary search with recursion
//ניתוח זמן ריצה :
// O(log2(n)):
//n/2^0
//n/2^1
//n/2^2
//n/2^x =1 -> 2^x=n x=log2(n).
//סך הפעולות = (מס שלבי החיפוש) *(מס הפעולות בכל שלב)
// log2(n)              * const(c)          = c*log2(n)

int binarySearch(int arr[], int left, int right, int value) {
    int mid = (int)(left + right)/2;
	if (value == arr[mid]) //נכון -תנאי עצירה ראשון 
		return mid; 
	
    if (left > right)   //לא נכון - תנאי עצירה שני 
		return -1;
	
	if (value < arr[mid]) //
		return binarySearch(arr, left, mid-1, value); //קריאה רקורסיבית 
	else 
		return binarySearch(arr, mid+1, right, value); //קריאה רקורסיבית 

}



int main(){



    return 0;
}