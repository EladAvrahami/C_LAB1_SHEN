#include <stdio.h>

void printBinary(int num)
{
    if (num > 1)
    {
        printBinary(num / 2); // קריאה ריקורסיבית עם חצי מהמספר
    }
    printf("%d", num % 2); // הדפסת שארית החילוק ב-2
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Binary representation: ");
    if (num == 0)
    {
        printf("0"); // אם המספר הוא 0, נדפיס ישירות 0
    }
    else
    {
        printBinary(num); // קריאה לפונקציה הריקורסיבית
    }

    return 0;
}
