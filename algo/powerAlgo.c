#include <stdio.h>

// פונקציה רקורסיבית לחישוב חזקה בסיבוכיות O(log n)
long long power(int base, int exp) {
    if (exp == 0) // כל מספר בחזקת 0 שווה ל-1
        return 1;

    long long half = power(base, exp / 2); // חישוב החזקה עבור exp/2

    if (exp % 2 == 0) {
        return half * half; // אם המעריך זוגי: מחזירים חצי כפול חצי
    } else {
        return half * half * base; // אם המעריך אי-זוגי: מכפילים בבסיס פעם נוספת
    }
}

int main() {
    int base = 2, exp = 10;
    printf("%d^%d = %lld\n", base, exp, power(base, exp));
    return 0;
}
