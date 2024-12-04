#include <stdio.h>
#include <math.h>


int checkPythagoras(int a, int b, int c) {
    if ((pow(a, 2) + pow(b, 2)) == pow(c, 2)) {
        return 0; // שלשה פיתגורית
    } else {
        return 1; // לא שלשה פיתגורית
    }
}

// פונקציה לבדיקת משפט פרמה
int checkFermat(int a, int b, int c, int n) {
    if (n > 2 && (pow(a, n) + pow(b, n) == pow(c, n))) {
        return 1; // משפט פרמה שגוי
    } else {
        return 0; // משפט פרמה נכון
    }
}

int main(){
    int A,B,C,N;
    printf("insert 4 integers each parameter separated by enter:\n");
    scanf("%d%d%d%d",&A,&B,&C,&N);
    /*if (N>2 && (pow(A,N) + pow(B,N)!=pow(C,N)) )
    {
    return 1;
        printf("holly smoke ! Fermat was wrong!\n");
    }else{
        printf("No  that doesn't work\n");
        return 0;
    }*/

    if (checkFermat(A, B, C, N)) {
        printf("Holy smokes, Fermat was wrong!\n");
    } else {
        printf("No, that doesnt work\n");
    }

    // בדיקת שלשות פיתגוריות
    if (checkPythagoras(A, B, C)) {
        printf("Pythagorean triple!\n");
    } else {
        printf("Not a Pythagorean triple\n");
    }



    return 0;
}