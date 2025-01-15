#include <string.h>
#include <stdio.h>

// פונקציה להשוואת סטרינגים (כמו strcmp)
int strEq(char *a, char *b) {
    return strcmp(a, b) == 0; // מחזיר 1 אם הם שווים, אחרת מחזיר 0
}

int main() {
    char a[] = "abc", b[] = "abcd", c[] = "aba";
    char *eq[] = {"false", "true"}; // מערך עם "false" ו-"true"

    // הדפסות של תוצאות השוואות
    printf("streq a==a ? %s\n", eq[strEq(a, a)]); // a==a
    printf("strcmp: a==a ? %s\n", eq[strcmp(a, a) == 0]); // a==a
    printf("strEq: a==b ? %s\n", eq[strEq(a, b)]); // a==b
    printf("strcmp: a==b ? %s\n", eq[strcmp(a, b) == 0]); // a==b
    printf("strEq: b==a ? %s\n", eq[strEq(b, a)]); // b==a
    printf("strcmp: b==a ? %s\n", eq[strcmp(b, a) == 0]); // b==a
    printf("strEq: a==c ? %s\n", eq[strEq(a, c)]); // a==c
    printf("strcmp: a==c ? %s\n", eq[strcmp(a, c) == 0]); // a==c

    return 0;
}
