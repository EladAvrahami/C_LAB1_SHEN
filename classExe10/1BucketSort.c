//inputs:
// messy arr and size of arr 
//sorted arr
//arr 0,2,2,1,0,1,2



//outputs:
//crete histogram h[3]={2,2,3}

#include <stdio.h>
#include <stdlib.h>

void bucketSort(int arr[], int n) {
    int i, j;
    int count[3] = {0, 0, 0};//histogram
    for (i = 0; i < n; i++) {//counting the number of 0,1,2
        (count[arr[i]])++;//counting the number of 0,1,2 by incrementing the count array
    }
    for (i = 0, j = 0; i < 3; i++) {
        while (count[i] > 0) {
            arr[j++] = i;
            count[i]--;
        }
    }
}



void backetSort(int arr[],int size,int numCategories){
    //stage 1: create histogram
    h[numCategories]={0};
    for(int i=0;i<size;i++){
        h[arr[i]]++;
    }

    //stage 2: sort the array
    int counter=0;
    for(int i=0;i<numCategories;i++){//run over the histogram (0,1,2) ריצה על הקטגוריות השונות
        for(int j=0;j<h[i];j++){//run over the number of elements in the category ריצה על מספר האיברים בקטגוריה
            arr[counter++]=i;//put the category in the array
        }
    }
}


int main() {
    int arr[] = {0, 2, 2, 1, 0, 1, 2};//input
    int n = sizeof (arr) / sizeof (arr[0]);//size of the array
    bucketSort(arr, n);//sort the array and put the result in new arr after running out the old arr in the function
    for (int i = 0; i < n; i++) {//print the sorted array
        printf("%d ", arr[i]);
    }
    return 0;
}


//יתרון 
//סיבוכיות זמן: O(n)שכן נרוץ על כל המערך פעם אחת ונבצע פעולות קבועות בכל איטרציה

//לעומת אלגוריתמי מיון אחרים כמו BUUBLE SORT OR MAX SORT שסיבוכיות זמן שלהם היא O(n^2) ו O(nlogn) בהתאמה
//האלגוריתם הזה יעיל יותר כי סיבוכיות זמן שלו נמוכה יותר

//חיסרון
//חסרון שלו הוא שהוא עובד רק על מספרים שהם קטנים וקבועים ולא עובד על מספרים שהם גדולים ומשתנים
//לכן זה יכול להיות פחות יעיל במקרים של מספרים גדולים ומשתנים

//סיבוכיות 
//סיבוכיות סופרת את מס הפעולות 
//סיבוכיות זמן: O(n)שכן נרוץ על כל המערך פעם אחת ונבצע פעולות קבועות בכל איטרציה
//סיבוכיות מקום: O(n)שכן ניצור מערך עזר בגודל n




