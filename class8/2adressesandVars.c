// מה יודפס בתוכנית הבאה 


#include <stdio.h>
void main(){


int num1=10,num2=20;
int *p1,*p2;
p1=&num1;//p1 points to num1
p2=&num2;//p2 points to num2
printf("p1=%p\n",*p1);//print the value of num1


}