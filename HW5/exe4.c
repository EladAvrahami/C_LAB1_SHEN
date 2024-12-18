#include <stdio.h>

void printBin(int num)
{
    if (num > 1)
    {
        printBin(num / 2); // קריאה ריקורסיבית עם חצי מהמספר
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
        printBin(num); // קריאה לפונקציה הריקורסיבית
    }

    return 0;
}
