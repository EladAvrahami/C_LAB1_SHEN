#include <stdio.h>

/*כתוב תוכנית הבודקת מס שלם N הוא זוגי/אי זוגי וחיובי/שלשילי */

void checkIfNegOrPOs(int num){
    if(num<0){
        printf("And the num is negative");
    }else if(num>0){
        printf("And the num is positive");
    }else 
    printf("The num is zero so its not negative or positive");
}

int main(){
int n;
printf("Enter integer:\n");
scanf("%d",&n);
if(n%2==0){
    printf("The num is even\n");
    checkIfNegOrPOs(n);
}else{
    printf("The num is odd\n");
    checkIfNegOrPOs(n);
}

printf("Elad-Avrahami");
    return 0;
}