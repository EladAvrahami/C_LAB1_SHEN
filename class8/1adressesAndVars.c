#include <stdio.h>
//int i;// יתפוס 4 בייט בזיכרון
//char tav;//יתפוס 1 ביט בזיכרון 
//int *ptr  //משתנה מסוג מצביע הכוכב מסמן שהוא הולך להחזיק כתובות ולא ערכים וסוג הכתובת מסוג מספר שלם
//כתובת בזיכרון מיוצגת עי בסיס הקסדצימלי

//ההבדל בין * ל& הוא ש * מצביע על ערך ו & מצביע על כתובת
int main(){
int x =10;
char c='a';
char *str;//מצביע לchar
int *ptr;//מצביע לint
double d,*pt;//מצביע לdouble    
int *str=&x;//מצביע לint
char *cptr=&c;//מצביע לchar 

*ptr=30;//השמה לכתובת של מצביע
*cptr='A';//השמה לכתובת של מצביע
printf("x=%d\n",x);
printf("c=%c\n",c);

//אופרטור הכתובת & מחזיר את הכתובת של המשתנה
//אופרטור הערך * מחזיר את הערך של המשתנה שהמצביע מצביע עליו

//מגבלות 
//1. לא ניתן להשוות בין מצביעים של סוגים שונים
//2. לא ניתן להשוות בין מצביעים למספרים שלמים
//3. לא ניתן להשוות בין מצביעים למצביעים
//4. לא ניתן להשוות בין מצביעים למצביעים של סוגים שונים
//5. לא ניתן להשוות בין מצביעים למצביעים של סוגים שונים
//6. לא ניתן להשוות בין מצביעים למספרים שלמים

//example:
int x = 3;
double* pDouble;
int *pInt1, *pInt2;
pInt1 = &x;
printf("%d\n", *pInt1);
pInt2 = pInt1;//ok because we can assign a pointer to a pointer of the same type
printf("%d\n", *pInt2);
pDouble = (double*)pInt1;//ok because we can assign a pointer to a pointer of a different type
//erorrs examples:
//pInt1=1000;//error because we can't assign a number to a pointer
//pDouble = pInt1;//error because we can't assign a pointer to a pointer of a different type


//example 2: מה יודפס בתוכנית הבאה ? 
int num1=10,num2=20;
int *p1,*p2;
p1=&num1;//p1 points to num1
p2=&num2;//p2 points to num2
printf("p1=%p\n",*p1);//print the value of num1 //%p מדפיס כתובת
//להשלים ממצגת 


return 0;
}
