#include <stdio.h>

/*
כתוב פונקציה שמקבלת מצביע למערך של מספרים שלמים ואת גודל המערך. הפונקציה צריכה
להחזיר את סכום כל האיברים במערך.
*/

int sumOfArr(int * arr, int arrSize){
int sum=0;
printf("val of * arr is: %d\n",* arr);
for (int i = 0; i < arrSize; i++)
{
    sum+=*(arr+i);
}
//printf("the sum of array ints is: %d",sum);
return sum;
}


int main(){
int arr[]={1,2,3,4,5};
int arrSize= sizeof(arr)/sizeof(arr[0]);

printf("the sum of array ints is: %d",sumOfArr(arr,arrSize));

    return 0;
}