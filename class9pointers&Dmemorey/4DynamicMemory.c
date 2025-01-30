//malloc
//*malloc is a function that allocates a block of memory (in bytes)
// and returns a pointer to the beginning of the block.
//https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/

//מערכים דינאמיים
//כאשר אנו רוצים ליצור מערך דינאמי נשתמש בפונקציית malloc
//הפונקציה מקבלת כפרמטר את גודל המערך בבתים ומחזירה כתובת לתחילת המערך
//הפונקציה מחזירה את הכתובת במידה והיא מצליחה להקצות את הזיכרון הדרוש ואם לא היא מחזירה את הערך NULL
//הפונקציה מקבלת כפרמטר את גודל המערך בבתים ומחזירה כתובת לתחילת המערך
//הפונקציה מחזירה את הכתובת במידה והיא מצליחה להקצות את הזיכרון הדרוש ואם לא היא מחזירה את הערך NULL


#include <stdio.h>
int main(){
int x=2;
int *p = &x;
printf("x=%d\n",(int) sizeof(x));

int y[3];
int *p1=y;
printf("y=%d\n",(int) sizeof(y));
printf("p1=%d\n",(int) sizeof(p1));


    return 0;
}