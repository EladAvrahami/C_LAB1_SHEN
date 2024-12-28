#include <stdio.h>

void function1(int n)
{
    int count = 0;
    int maxVal = 0;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2; // https://www.w3schools.com/c/c_conditions_short_hand.php
            n > maxVal ? maxVal = n : maxVal;
            printf("used if and get:%d\n", n);
            count++;
        }
        else
        {
            n = (n * 3) + 1;
            n > maxVal ? maxVal = n : maxVal;
            printf("used else and get:%d\n", n);
            count++;
        }
    }
    printf("the count is: %d\n", count);
    printf("the max val is: %d", maxVal);
}

int main()
{
    int num;
    printf("enter num :");
    scanf("%d", &num);
    function1(num);

    return 0;
}