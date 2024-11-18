// https://github.com/EladAvrahami
#include <stdio.h>
#include <math.h>
int main()

{
    // int -save more space in memory
    double num1, num2, num3, numN;
    printf("enter 4 nums A B C and the 4th will be the exponent spared by space:\n");
    scanf("%d%d%d%d", &num1, &num2, &num3, &numN);
    num1 = pow(num1, numN); // המרת תוצאת pow ל-int ->num1= (int)pow(num1, numN);
    num2 = pow(num2, numN);
    num3 = pow(num3, numN);

    if (num1 + num2 != num3)
    {
        printf("OMG Fermat was wrong !\n");
    }
    else
    {
        printf("No that doesn't work \n");
    }

    return 0;
}