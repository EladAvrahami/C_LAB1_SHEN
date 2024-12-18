#include <stdio.h>
int Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
        return n + Sum(n - 1);
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