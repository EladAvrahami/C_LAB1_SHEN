#include <stdio.h>




int main()
{

//מחרוזת זה מערך של תווים והוא נגמר ב\0
char str[6]={'H','e','l','l','o','\0'};//לא מומלץ להשתמש בכך
char str3[]={'H','e','\0','l','l','o'};// הוא עוצר את הקריאה \0
char str4[]={'H','e',0,'l','l','o'};// הערך האסקי של \0 הוא 0 ולכן יעצור
char str0[]="hello";//הכי כדאי להשתמש בזה
char str1[30]="hello";
//    /*פלט  */
printf("str=%s\n",str);// הדפסת מחרוזת
printf("str=%s\n",str3);// הדפסת מחרוזת
printf("str=%s\n",str4);// הדפסת מחרוזת


/*קלט עם %s */
char str5[10];
printf("enter string\n");
scanf("%s",str5);//no & because str5 is a pointer
printf("str5=%s\n",str5);// הדפסת מחרוזת

    return 0;
}