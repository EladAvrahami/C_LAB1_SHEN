#include <stdio.h>
int Sum(int n)
{
    int sum=0;
    while (n != 0)
    {
    sum=sum+n;
    n--;
    }
return sum;
}

int main()
{
    int num = 3;
    // printf("enter num:");
    // scanf("%d",&num);
    Sum(num);
    printf("%d\n", Sum(num));
    return 0;
}