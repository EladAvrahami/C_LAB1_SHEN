#include<stdio.h>
#include <stdlib.h>
#include <time.h>
//https://www.geeksforgeeks.org/c-rand-function/
// https://www.geeksforgeeks.org/time-function-in-c/

double randUnit(){

    return (double)rand()/RAND_MAX;
    
}



int main (){

srand(time(NULL));//כדי לקבל תוצאות שונות בכל הרצה 

printf("random num between 0 and 1:  %05.4f",randUnit());

    return 0;
}