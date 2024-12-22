#include <stdio.h>
// power(b,n)=b*power(b,n-1)&&power(b,0)=1

//implement pow function by recursion

double power(double x, int n)
{
    if (n ==0){
    return 1;
    }
    printf("*******power execute return********\n");
    return x*power(x,n-1);
}

int main()
{
    double x;
    int n;
    printf("enter x and n to compute the n^th power of x:\n");
    scanf("%lf%d", &x, &n);
    printf("%f^%d=%f\n", x, n, power(x, n));

    return 0;
}
