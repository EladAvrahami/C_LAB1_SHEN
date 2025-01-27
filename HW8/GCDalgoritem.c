#include <stdio.h>


// פונקציה למציאת ה-GCD באמצעות אלגוריתם אוקלידס
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b; // מוצאים את השארית
        a = b;         // b הופך ל-a
        b = r;         // השארית הופכת ל-b
    }
    return a; // כאשר b שווה ל-0, a הוא ה-GCD
}


//מקוצר
// פונקציה לחישוב ה-GCD (המחלק המשותף הגדול ביותר) לפישוט השבר
int gcd2(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd2(b, a % b);
}

int main() {
    int num1 = 48, num2 = 18;

    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
