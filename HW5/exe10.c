/*
יש משושה בעל שש קודקודים ממוספרים מ1 עד 6
כמה טיולים באורך n המתחילים בקודקוד ,1 ומסתיימים בקדקוד 1 יש בגרף?
● לדוגמה עבור 2=n יש שני טיולים כלאה: 1,2,1 ו- 1,6,1
● לדוגמה עבור 4=n יש שישה טיולים כאלה, ביניהם: 1,2,1,2,1 ו- 1,6,5,6,1
*/
#include <stdio.h>

// math example
// T=trip n=steps num k=kodkod num
// Tn(k) = Tn-1(k-1)+Tn-1(k+1) role
// T0(1)=1 //no more steps and on kodkod 1 bring point
// T0(K)=0 //no more steps and on other kodkod that not 1 fail
// numeric example :
/*
n=2
T2(1)=T1(6)+T1(2)
NOW according to the role lets separate T1(6) and T1(2)
T1(2)=T0(1)+T0(6) = 1+0
T1(6)=T0(5)+T0(1) = 0+1
//COUNT TOTAL NUM OF T0(1)(or the sum of 1 )
*/

int countPaths(int n)
{

    // int T[n+1][7] = {0};  //   צעדים n מערך של טבלאות שמכיל את מספר הדרכים לכל קודקוד אחרי
    int T[n + 1][7] = {0};
    T[0][1] = 1; // init on kodkod 1
    for (int i = 1; i <= n; i++)
    {
        T[i][1] = T[i - 1][6] + T[i - 1][2]; // אם אנחנו בקודקוד 1
        T[i][2] = T[i - 1][1] + T[i - 1][3];
        T[i][3] = T[i - 1][2] + T[i - 1][4];
        T[i][4] = T[i - 1][3] + T[i - 1][5];
        T[i][5] = T[i - 1][4] + T[i - 1][6];
        T[i][6] = T[i - 1][5] + T[i - 1][1];
    }
    return T[n][1]; // המספר של הדרכים להגיע ל-1 אחרי n צעדים
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = countPaths(n);
    printf("Number of paths of length %d starting and ending at 1: %d\n", n, result);

    return 0;
}
