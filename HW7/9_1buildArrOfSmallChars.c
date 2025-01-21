#include <stdio.h>

void how_many(char char_arr[], int length, int count_arr[]) {
    // אתחול מערך הספירה לאפס
    for (int i = 0; i < 26; i++) {
        count_arr[i] = 0;
    }

    // ספירה של כל אות באנגלית קטנה במערך
    for (int i = 0; i < length; i++) {
        if (char_arr[i] >= 'a' && char_arr[i] <= 'z') {
            count_arr[char_arr[i] - 'a']++; // עדכון מיקום מתאים במערך הספירה
        }
    }
}

int main() {
    char char_arr[100]; // מערך לקליטת האותיות מהמשתמש
    int count_arr[26];  // מערך לספירת תדירות האותיות
    int length = 0;     // אורך המערך

    // קבלת קלט מהמשתמש בלולאה
    printf("Enter lowercase English letters one by one (press '!' to stop):\n");
    char input;
    while (length < 100) {
        scanf(" %c", &input); // קליטת אות אחת
        if (input == '!') {   // עצירת הלולאה כאשר מוקלד '!'
            break;
        }
        if (input >= 'a' && input <= 'z') { // רק אותיות קטנות מותרות
            char_arr[length++] = input; // הוספת האות למערך
        } else {
            printf("Invalid input, only lowercase letters are allowed.\n");
        }
    }

    // קריאה לפונקציה how_many
    how_many(char_arr, length, count_arr);

    // הדפסת התוצאה
    printf("\n Letter  how_many\n");
    printf("--------- --------\n");
    for (int i = 0; i < 26; i++) {
        printf("%6c %8d\n", 'a' + i, count_arr[i]);
    }

    return 0;
}
