#include <stdio.h>

//the 2 sighneturs of the function is diong the same

int str2int1(char* str){

printf("%s",str);

    return 0 ;
}
/*
int str2int2(char* str){

printf("%s",str);

    return ;
}*/


int str2int(char str[]) {
    int result = 0;
// עוברים על כל תו במחרוזת
    for (int i = 0; str[i] != '\0'; i++) {
        // אם התו הוא מספר (תו בין '0' ל-'9')
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] -"0" );  // החסרת הערכת האסקי של 0 מהערך האסקי מהמספר שהתקבל 
        } else {
            // אם יש תו שאינו מספר, נחזיר ערך שגוי (כמו 0)
            return 0;  // או להחזיר שגיאה אחרת בהתאם
        }
    }

    return result ;  // אם היה סימן מינוס, מחזירים את התוצאה עם סימן שלילי
}






int main(){
char str[]="789";
str2int(str);

str2int1(str);
//str2int2(str);

    return 0;
}