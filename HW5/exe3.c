#include <stdio.h>


int Sum(int n)
{
int sum=(n*(1+n))/2;
return sum;
}

int main(){
    int num = 5;
    Sum(num);
    printf("%d\n", Sum(num));
    return 0;
}

