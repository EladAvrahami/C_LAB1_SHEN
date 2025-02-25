#include <stdio.h>

// פונקציה לחישוב שורש ריבועי באמצעות שיטת ניוטון-רפסון
double sqrt_newton(double num) {
    if (num < 0) {
        printf("לא ניתן לחשב שורש ריבועי של מספר שלילי.\n");
        return -1;
    }
    
    double approx = num / 2.0; // ניחוש התחלתי
    double prev_approx;
    double epsilon = 0.00001; // סף דיוק
    
    do {
        prev_approx = approx;
        approx = (prev_approx + num / prev_approx) / 2.0; // נוסחת ניוטון-רפסון
    } while ((approx - prev_approx > epsilon) || (prev_approx - approx > epsilon));
    
    return approx;
}

int main() {
    double number=25.0;
    
    double result = sqrt_newton(number);
    if (result != -1) {
        printf("THE SQURT OF%.5f IS: %.5f\n", number, result);
    }
    
    return 0;
}
