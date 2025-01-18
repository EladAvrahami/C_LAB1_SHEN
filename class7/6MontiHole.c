//Montihole
//שלוש דלתות 
//בוחרים דלת
//פותחים דלת שאין בה פרס
//נשארנו עם שני דלתות תישאר עם הדלת שלך או תחליף 
//המידול אומר להחליף ולהגדיל את הסיכוי 

//פתרון לוגיקה באמצעות סימולציה 

#include <stdio.h>
/*
הסבר על הקשר בין הספריות:
rand() ו-srand() (מ-stdlib.h): מספקים את המנגנון לייצור מספרים אקראיים.
time(NULL) (מ-time.h): משמש כערך גרעין (seed) ל-srand() כדי לשנות את התוצאה האקראית בין ריצות.
*/
#include <stdlib.h>
#include <time.h>

// פונקציה למציאת הדלת שהמנחה חושף
int revealDoor(int price, int initialChoice) {
    for (int door = 1; door <= 3; door++) {
        // הדלת אינה הבחירה הראשונית ואינה הדלת עם הפרס
        if (door != price && door != initialChoice) {
            printf("The gout door revealed is:%d\n",door);
            return door;
        }
    }
    return -1; // ערך שגיאה במקרה של כשל
}

// פונקציה למציאת הדלת שאליה ניתן להחליף
int thirdDoor(int d1, int d2) {
    for (int door = 1; door <= 3; door++) {
        if (door != d1 && door != d2) {
            printf("The door you can switch to is:%d\n",door);
            return door;
        }
    }
    return -1;
}

// פונקציה לסימולציה של משחק אחד
int simulateOneGame() {
    int price = rand() % 3 + 1;           // הדלת עם הפרס
    printf("The price door is:%d\n",price);
    int initialChoice = rand() % 3 + 1;   // הבחירה הראשונית של המשתתף
    printf("The person init door is:%d\n",initialChoice);
    int revealed = revealDoor(price, initialChoice); // המנחה חושף דלת עם עז
    int switchTo = thirdDoor(initialChoice, revealed); // הדלת הנותרת להחלפה

    // בדיקת תוצאות המשחק
    if (initialChoice == price) {
    printf("The initialChoice:%d WIN\n",initialChoice);
        return 1; // ניצחון אם נשארים
    } else {
    printf("The Switch Choice:%d WIN\n",initialChoice);
        return 2; // ניצחון אם מחליפים
    }
}

int main() {
    srand(time(NULL)); // אתחול גרעין אקראי

    int totalPlays = 10; // מספר הסימולציות
    int stayWins = 0, switchWins = 0;

    for (int i = 0; i < totalPlays; i++) {
    printf("***NEW GAME START***:\n");
        int winner = simulateOneGame();
        if (winner == 1) {
            stayWins++;
        } else {
            switchWins++;
        }
    }

    printf("Stay wins: %d games (%.2f%%).\n", stayWins, (stayWins / (float)totalPlays) * 100);
    printf("Switch wins: %d games (%.2f%%).\n", switchWins, (switchWins / (float)totalPlays) * 100);

    return 0;
}
