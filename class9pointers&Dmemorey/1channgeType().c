#include <stdio.h>


////שינוי אקטיבי של טיפוס
int main(){
int a=6;
float f=7.5;

f=(float)a;// שינוי הטיפוס של משתנה מסוג אחד לסוג אחר
printf("%f\n",f);


    return 0;
}