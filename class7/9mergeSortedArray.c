#include <stdio.h>

void mergeSortArrays(int arr1[],int len1,int arr2[],int len2,int res[]){
    int i=0,j=0,k=0;
    while (i<len1,l<len2)
    {
        if (arr[i]<=arr2[j])
        {
            res[k++]=arr1[i++];
        }else{
            res[k++]=arr2[j++];
        }
    }
    while (i<len1)
    {
        res[k++] =arr1[i++];
    }
    while (l<len2)
    {
        res[k++] =arr2[j++];
    }
    
    
    
}

int main(){


    return 0;
}