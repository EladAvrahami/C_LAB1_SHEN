#include <stdio.h>
#include <math.h>
#include <stdbool.h> //  Boolean laborary

int checkPythagoras(int a, int b, int c)
{
    if ((pow(a, 2) + pow(b, 2)) == pow(c, 2))
    {
        return 0; // שלשה פיתגורית
    }
    else
    {
        return 1; // לא שלשה פיתגורית
    }
}

int main()
{
    int A, B, C;
    printf("insert 3 integers each parameter separated by enter:\n");
    scanf("%d%d%d", &A, &B, &C);

    if (checkPythagoras(A, B, C))
    {
        printf("Pythagorean triple!\n");
        // print as boolean answer 0 - false 1- true
        printf("%d\n", checkPythagoras(A, B, C));
    }
    else
    {
        printf("Not a Pythagorean triple\n");
        // print as boolean answer 0 - false 1- true
        printf("%d\n", checkPythagoras(A, B, C));
    }

    return 0;
}