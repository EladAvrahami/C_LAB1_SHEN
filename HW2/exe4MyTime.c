#include <stdio.h>
#include <time.h>

int main(void)
{ // not give us value
    printf("********************option1 ****************************\n");
    // https://www.geeksforgeeks.org/time-h-header-file-in-c-with-examples/
    time_t t;
    printf("Current date and time is: %s\n", ctime(&t));

    printf("********************option2 ****************************\n");
    // https://www.geeksforgeeks.org/time-function-in-c/

    time_t seconds = time(NULL);
    printf("Seconds since January 1, 1970 is: %ld\n", seconds); // https://www.quora.com/What-are-the-placeholders-used-in-C
    int sec = seconds % 60;                                     // חישוב השניות הנותרות לאחר חלוקה ב-60, כי יש 60 שניות בדקה
    int min = (seconds / 60) % 60;                              // חישוב הדקות הנותרות לאחר חלוקה ב-60, כי יש 60 דקות בשעה
    int hour = (seconds / 3600) % 24;                           // חישוב השעות הנותרות לאחר חלוקה ב-24, כי יש 24 שעות ביום
    int totalDays = (seconds / 86400) % 365;                          //(לא כולל שנים מעוברות) חישוב מספר הימים הנותרים לאחר חלוקה ב-365
    int years = 1970 + (t / (365 * 86400));                     // חישוב מספר השנים מאז 1970, כי כל שנה מכילה 365 ימים וכל יום מכיל 86400 שניות
    int month = totalDays / 30 + 1;
    int day = month%30;

    printf("Current time based on seconds since 1970:\n");

    printf("%d/%d/%d - %02d:%02d:%02d\n", day, month, years, hour, min, sec); // הדפסת השנה הנוכחית
    //%02d  כדי לוודא שהמספר יוצג כמו שעון עם אפס לפני במידה ומדובר במס בודד 

    
/*
      printf("*********שימוש מובנה ביכולות ספריית זמן option3 ****************************\n");
        time_t t2 = time(NULL);// קבלת הזמן הנוכחי כזמן גולמי
        struct tm tm = *localtime(&t2);// המרת הזמן הגולמי לזמן מקומי

        int day = tm.tm_mday;
        int month = tm.tm_mon + 1; // tm_mon is 0-11, so we add 1
        int year = tm.tm_year + 1900; // tm_year is years since 1900
        int hour = tm.tm_hour;
        int min = tm.tm_min;
        int sec = tm.tm_sec;

        printf("%02d/%02d/%04d - %02d:%02d:%02d\n", day, month, year, hour, min, sec);
   */

    return 0;
}