#include<stdio.h>

/*
int x = 5; int *y = &x; *y = 0;
int x = 5; int *y = &x; *x = 0;
int *x = 5; int y = &x; *y = 0;
int x = 5; int *y = &x; &y = 0;
 */



int main(){
int x = 5; int *y = &x; *y = 0; // x is assigned to 5, y is assigned to the address of x, and the value of y is assigned to 0. So, x is 0 and y is 0.
//int x = 5; int *y = &x; *x = 0;//this line will give an error because x is an integer and it cannot be dereferenced.
//int *x = 5; int y = &x; *y = 0;//this line will give an error because x is a pointer and it cannot be assigned to an integer.
//int x = 5; int *y = &x; &y = 0; //this line will give an error because y is a pointer and it cannot be assigned to an integer.
printf("x is: %d\n", x);
printf("y is: %d\n", *y);


//צור משתנה, הדפס את הערך ואת הכתובת שלו
int z=30;
printf("z value is: %d\n", z);
printf("z address is: %p\n", &z);
//השתמש בפוינטר כדי לשנות את ערך המשתנה.
int *pointer=&z;
*pointer=10;
printf("z value is: %d\n", z);
//עבד עם מערכים וגישת פוינטרים אליהם
int arr[5]={1,2,3,4,5};
int *pointer2=arr;
printf("arr[0] is: %d\n", *pointer2);
printf("arr[0]address is: %d\n", &arr[0]);
printf("arr[1] is: %d\n", *(pointer2+1));
printf("arr[1]address is: %d\n", &arr[1]);
//by the difference between the addresses of the two elements we can see
// that the size of an integer is 4 bytes.





    return 0;
}