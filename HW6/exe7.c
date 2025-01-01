#include <stdio.h>
#include <math.h>

int prime_is(int num) {
    // אם המספר קטן מ-2, הוא לא ראשוני
    if (num <= 1) {
        return 0;
    }

    // אם המספר הוא 2, הוא ראשוני
    if (num == 2) {
        return 1;
    }

    // אם המספר זוגי (ולא 2), הוא לא ראשוני
    if (num % 2 == 0) {
        return 0;
    }


/*
דוגמא
אם אנחנו רוצים לבדוק אם 29 הוא ראשוני:
השורש הריבועי של 29 הוא ≈5.39
ולכן נבדוק רק את המספרים 2, 3 ו-5.
אם 29 לא מתחלק באף אחד מהם, אנחנו יכולים לקבוע שהוא ראשוני.
הבדיקה עד השורש הריבועי חוסכת הרבה חישובים ומייעלת את הבדיקה.
 */
    // נבדוק עד השורש הריבועי של המספר
    int limit = (int)sqrt(num);
    for (int i = 3; i <= limit; i += 2) {
        if (num % i == 0) {
            return 0; // נמצא מחלק, המספר לא ראשוני
        }
    }

    return 1; // אם לא נמצאו מחלקים, המספר ראשוני
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (prime_is(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
