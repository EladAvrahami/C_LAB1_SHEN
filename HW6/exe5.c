#include<stdio.h>
#include<math.h>
// פונקציה לחישוב שורש ריבועי בשיטת ניוטון-רפסון

//שיטת ניוטון-רפסון. זוהי שיטה חישובית שמאפשרת למצוא שורש ריבועי של מספר בצורה איטרטיבית. 
//השיטה מתקדמת על ידי חישוב סדרה של ערכים קרובים יותר ויותר לשורש הנכון.
double sroot(double a) {
    // אם המספר הוא 0
    if (a == 0) return 0;
     // בדיקה אם המספר שלילי
    if (a < 0) {
        printf("Error: Cannot calculate square root of a negative number.\n");
        return -1;  // מחזירים ערך שמציין שגיאה
    }

    // נתחיל באומדן ראשוני
    double x = a / 2.0;
    double tolerance = 1e-6;  // טולרנס למדיוקות התוצאה
    double diff;
/*
tolerance explanation:
1e-6 הוא פשוט דרך מקוצרת לכתיבה של 
0.000001 עשר בחזקת מינוס שש או 
0.000001, שזה מספר מאוד קטן, והם מתארים את רמת הדיוק או הטולרנס (הסף הקטן ביותר בין הערכים שממנו נפסיק את החישוב).
*/

    do {
        double next_x = 0.5 * (x + a / x);  // חישוב חצי ממוצע
        diff = next_x - x;
        x = next_x;
    } while (diff > tolerance || diff < -tolerance);  // חזור עד שההבדל בין הערכים קטן מהטולרנס

    return x;
}

int main() {
    double number = 20.0;
    double result = sroot(number);
    
    printf("The square root of %.2f is approximately %.6f\n", number, result);

    return 0;
}
