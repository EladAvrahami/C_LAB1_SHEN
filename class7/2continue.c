#include <stdio.h>
//continue 


int main(){
char a[] ="abc",b[]="abc";
int flag =1;//נניח ששניהם שווים עד שיוכח אחרת 

for (int i = 0; a[i]!=NULL; i++) {
    if (a[i]==b[i])
        {
            continue; //skip the rest ot the iteration
        }
    flag=0;
}
if (flag)
printf("equal strings");
else
printf("not equal");


    return 0;
}