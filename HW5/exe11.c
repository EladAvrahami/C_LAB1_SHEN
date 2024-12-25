#include <stdio.h>

void calculateAverage() {
    int grade, credits;
    int totalCredits = 0;
    float weightedSum = 0;
    char continueInput;

    
    do {
        printf("Enter grade (0-100): ");
        scanf("%d", &grade);

        // בדיקת אם הציון נמצא בטווח החוקי
        if (grade < 0 || grade > 100) {
            printf("Error: Grade must be between 0 and 100.\n");
            return;  // יוצאים מהפונקציה במקרה של שגיאה
        }

        printf("Enter credits (0-7): ");
        scanf("%d", &credits);

        // בדיקת אם נקודות הזכות נמצאות בטווח החוקי
        if (credits < 0 || credits > 7) {
            printf("Error: Credits must be between 0 and 7.\n");
            return;  // יוצאים מהפונקציה במקרה של שגיאה
        }

        // חישוב סכום משוקלל של הציונים
        weightedSum += grade * credits;
        totalCredits += credits;

        // שאלת המשתמש אם הוא רוצה להוסיף עוד ציון
        printf("Do you want to add another grade? (Y/N): ");
        scanf(" %c", &continueInput);  // הוספנו רווח לפני %c כדי להתמודד עם קריאות קודמות

    } while (continueInput == 'Y' || continueInput == 'y');  // אם המשתמש רוצה להוסיף ציון נוסף

    // בדיקת אם יש נקודות זכות תקפות
    if (totalCredits == 0) {
        printf("Error: No valid credits entered.\n");
        return;  // יוצאים אם אין נקודות זכות
    }

    // חישוב הממוצע המשוקלל
    float average = weightedSum / totalCredits;

    // הדפסת הממוצע וההערה המתאימה
    printf("Weighted Average: %.2f\n", average);

    if (average >= 85) {
        printf("מצויין\n");
    } else if (average >= 60) {
        printf("כל הכבוד\n");
    } else {
        printf("דרוש שיפור\n");
    }
}

int main() {
    calculateAverage();  // קריאה לפונקציה לחישוב ממוצע
    return 0;
}
