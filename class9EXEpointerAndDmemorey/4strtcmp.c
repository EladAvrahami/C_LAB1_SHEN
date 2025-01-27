#include <string.h>
#include <stdio.h>



//strcmp(str1,str2) compares two strings str1 and str2. It returns 0 if both the strings are identical, -1 if the first 
//mismatch character in str1 is less than the corresponding character in str2, and a positive number if the first mismatch character in str1 is greater than the corresponding character in str2.
int main(){
char str1[]="hello";
char str2[]= {'h','e','l','l','o','\0'};

printf("strcmp(str1,str2)=%d\n",strcmp(str1,str2));//0


    return 0;
}