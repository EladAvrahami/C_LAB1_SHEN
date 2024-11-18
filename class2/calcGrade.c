#include <stdio.h>

int main()
{
    int A, B, P, E, finalGrade;
    int maxGrade = 100, minGrade = 0;
    printf("A,B,P,E =");
    scanf("%d%d%d%d", &A, &B, &P, &E);
    // int grade1=(35*A+53*P+35*E)/100 +B-11;
    int grade1 = 33. / 100. * A + 53. / 100. * P + 35. / 100. * E + B - 11; // floating-point division מחזירה תוצאה מדויקת עם חלקים עשרוניים.
    int grade2 =E+B-6;

    if(grade1>grade2){
        finalGrade=grade1;
    }else{
        finalGrade=grade2;
    }if(finalGrade<minGrade){
        finalGrade=minGrade;
    }if(finalGrade>maxGrade){
        finalGrade=maxGrade;
    }

    printf("your final grade is :%d",finalGrade);
    return 0;
}