#include <stdio.h>
#include <string.h>

int findIndexChar(char str[],char c){
    int flag =0;//נצא מנק הנחה שלא נמצא 
    int charLocation;
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (c==str[i])
        {
            flag=1;
            charLocation=i+1;
            break;//exit the loop
        }
    }
    if (flag)
{
    printf("the char '%c' location is: %d",c,charLocation);
    return 0;
}else {
    printf("char not found");
    return -1;
}

}


int main(){

char c='F';
char str[]="elad";
printf("%d is the number of the str chars\n",sizeof(str)/sizeof(str[0]));

findIndexChar(str,c);

return 0;
}