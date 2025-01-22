#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;
    printf("a[0] = %d\n", a[0]);
    printf("a[0] = %d\n", *a);
    printf("a[0] = %d\n", *p);
    printf("a[1] = %d\n", a[1]);
    printf("a[1] = %d\n", *(a + 1));
    printf("a[1] = %d\n", *(p + 1));


    int arr[10];
    //same address in memory
    printf("%p\n", &arr[0]);//0x7fffbf7b3b40 address of arr[0]
    printf("%p\n", arr);//0x7fffbf7b3b40 the same addres of arr[0] because 
    //arr is the address of the first element of the array



    //ניתן לבצע את ההשמה הבאה 
    int *ptr;
    int arr1[10];
    ptr = arr1;//ptr points to the first element of the array so we can assign
    // it to the array name
    //אפשר להשתמש בשני השמות של המערך והמצביע כאשר נרצה לגשת לאיברים במערך
    //לאחר ההשמה הפעולות הבאות שקולות:
    arr1[5]=100; printf("%d\n",arr1[5]);
    ptr[5]=100;  printf("%d\n",ptr[5]);
    *(arr1+5)=100; printf("%d\n",*(arr1+5));
    *(ptr+5)=100; printf("%d\n",*(ptr+5));
    
    
    
    return 0;
}