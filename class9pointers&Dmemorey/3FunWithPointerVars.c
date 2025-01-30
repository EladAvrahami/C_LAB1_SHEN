#include <stdio.h>
//נותן ערך של כתובת של משתנה
//משמשע באמצעות הכוכבית ז פועל ישירות על המשתנה
int f(int*x,int*y){
int x=x+y;
return x;

}

int main(){
int a=3,b=2;
f(a,b);

    return 0;
}