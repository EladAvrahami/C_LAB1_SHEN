#include <stdio.h>

//Encapsulation & isEqualString

int strEqu(char a[],char b[]){
    for (int i = 0; a[i]!='\0'; i++)
    {
        if (a[i]!=b[i])
        {
            return 0;
        }
        if (b[i]==NULL){
        return 1;
        } else
        return 0;
    
    }
    
    
    
}

int main(){
char a[] ="abc",b[]="abc";

if (strEqu(a, b)) {
        printf("Equal strings\n");
    } else {
        printf("Not equal strings\n");
    }
    return 0;
}

