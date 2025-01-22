//swap as function
#include <stdio.h>

void swap(int *a, int *b){//a and b are pointers to integers 
    int temp;
    temp = *a;//tacking the value of a and putting it in temp
    *a = *b;//equalizing the value of a to the value of b
    *b = temp;//equalizing the value of b to the value of temp
}

int main()
{
    int x = 5, y = 10;
    printf("x=%d, y=%d\n", x, y);
    swap(&x, &y);//passing the addresses of x and y to the function
    printf("x=%d, y=%d\n", x, y);
int grade;
scanf("enter grade:%d",&grade);    //scanf gets the address of the variable using the & operator

    return 0;
}
