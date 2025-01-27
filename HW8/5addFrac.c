/*#include <stdio.h>

float addFrac(int a, int b, int c, int d)
{
    int *m=a/b;
    int *n=c/d;
    return ((a/b)+(c/d))
}

int main()
{

    int a = 2, b = 2, c = 6, d = 3;
    int n,m;
    // scanf("insert4 nums:%d%d%d%d",&a,&b,&c,&d);
    printf("%d%d%d%d", a, b, c, d);
}*/


#include <stdio.h>

// פונקציה לחישוב ה-GCD (המחלק המשותף הגדול ביותר) לפישוט השבר
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// פונקציה לחיבור שני שברים
void addFrac(int a, int b, int c, int d, int *n, int *m) {
    // מכנה משותף
    *m = b * d;
    // מונה
    *n = (a * d) + (c * b);
    
    // פישוט השבר
    int commonDivisor = gcd(*n, *m);
    *n /= commonDivisor;
    *m /= commonDivisor;
}

int main() {
    int a = 1, b = 2; // שבר ראשון: 1/2
    int c = 3, d = 4; // שבר שני: 3/4
    int n, m;

    // קריאה לפונקציה
    addFrac(a, b, c, d, &n, &m);

    // הדפסת התוצאה
    printf("The result of %d/%d + %d/%d is %d/%d\n", a, b, c, d, n, m);

    return 0;
}