#include <stdio.h>
//revers array 
//1,2,3,5
//5,3,2,1

//method 1 
void reversArray(int arr1[], int arr2[],int length){
    for (int i = length-1, j=0; i >=0; i--,j++)// הצהרה וקאסטינג של של משתנים j and i 
    {
        arr2[j]= arr1[i];
    }
    

}

//method 2 
void reversArray(int arr1[], int length){
    for (int i = 0, j=length-1; i <j; i++,j--)
    {
        //swap(arr[start] , arr[end])
        int temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    

}



int main(){


    return 0;
}