#include <stdio.h>

int main()
{
    int str[15] = {10, 20, 30, 4, 7, -5, 11, 8, 9, 23, 21, 56, 43, 21, 3};
    int flag = 1;

    int i = 0;
    while (i < 15)
    {
        if (str[i] < 0)
        {
            flag = 0;
            break;
        }
        i++;
    }

    if (flag == 1)
    {
        printf("All positive num");
    }
    else
    {
        printf("there is a negative num");
    }


return 0;
}