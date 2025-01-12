#include <stdio.h>

//Break and Flage 
//break to get out of the loop 
//flage to indicate if each letter in string a equal to letter i string b 

int main(){

char a[] ="abc",b[]="abp";
int flag =1;
for (int i = 0; a[i]!=NULL; i++) //null ='\0'= 0  that indicates the end of the string
{
    if (a[i]!=b[i])
    {
        flag=0;
        break;//exit the loop 
    }
    
}
if (flag)
{
    printf("Equal string");
}else {
    printf("not equal");
}

return 0;
}

