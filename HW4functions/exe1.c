#include <stdio.h>

void printTime(int h,int min){
if(  (h>=0 && h<=23)  &&(min>=0 && min<=59)  ){
printf("The time is %02d:%02d",h,min);  
    }else{
printf("one or two of the integer is not valid");
}
}

int main(){
int h ,min;
printf("ENTER NUM OF Hour AND Min separated by space or enter :\n ");
scanf("%d%d",&h,&min);
printTime(h,min);
return 0 ;
}