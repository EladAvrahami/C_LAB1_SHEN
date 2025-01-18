#include <stdio.h>
//לולאה מקוננת 
//nested loop enter nums until zero

int main(){
int a ;
while (1)//a!=0 ? 1:0 //true=1 in c langhug  -- זה תמיד 1 כלומר תמיד נכון אז תמיד יתקיים עד תנאי עצירה 
{
    printf("enter your number, press 0 to finish \n");
    scanf("%d", &a);
    if (a==0)
    break;
    printf("%d", a);
}

printf("done");
return 0;
}


//option2 count to 10 and done
/*int main(){
int a ; int i=0, N=10; 
while(1){
if (i>N)
break;
printf("%d", i);
i++;
}

printf("done");
return 0;
}
*/
//option3 
/*int main(){
int i=0, N=10;
while(i <= N){
printf("%d", i);
i++;
}

return 0;
}
*/




