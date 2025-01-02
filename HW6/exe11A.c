#include<stdio.h>
#include <stdlib.h>
#include <time.h>



int randInt(int minVal,int maxVal){

    time_t t2 = time(NULL);// קבלת הזמן הנוכחי כזמן גולמי
        struct tm tm = *localtime(&t2);// המרת הזמן הגולמי לזמן מקומי

       /* int day = tm.tm_mday;
        int month = tm.tm_mon + 1; // tm_mon is 0-11, so we add 1
        int year = tm.tm_year + 1900; // tm_year is years since 1900
        int hour = tm.tm_hour;
        int min = tm.tm_min;*/
        int sec = tm.tm_sec;

        printf("num of sec: %02d\n", sec);

return abs((maxVal -sec)%10 -1) + minVal;//ערך מוחלט https://www.tutorialspoint.com/c_standard_library/c_function_abs.htm
}


int main (){
int minVal;
int maxVal;
printf("enter min and max val:");
scanf("%d%d",&minVal,&maxVal);
printf("random between min and max val:%d",randInt(minVal, maxVal));
    return 0;
}