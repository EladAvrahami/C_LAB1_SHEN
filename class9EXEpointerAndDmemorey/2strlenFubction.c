#include <string.h>
#include <stdio.h>


int main(){

char str1[]="hello";
char str2[]= {'h','e','l','l','o','\0'};

//strlen
//strlen(s) - returns the length of string s
//not including the null terminator
//strlen("hello") - 5
//strlen("") - 0
//strlen("a") - 1
//strlen("abc") - 3
//strlen("abc\0def") - 3
printf("strlen(str1)=%ld\n",strlen(str1));//5


    return 0;
}

