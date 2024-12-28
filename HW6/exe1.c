#include<stdio.h>


int main(){

int i = 3;
printf(" %d \n", i);//3 
printf(" %d \n", i++);//3
printf(" %d \n", i);//4
i = 3;
printf(" %d \n", i);//3
printf(" %d \n", ++i);//4
printf(" %d \n", i);//4


    return 0;
}