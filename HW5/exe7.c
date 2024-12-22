//implement power by loop
#include <stdio.h>


double power(double x, int n){
    double res=1;
    for (int i = 0; i < n; i++)
    {
    res*=x;
    }
    return res;
    
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
