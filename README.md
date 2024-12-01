init
<pre> 
  include<stdio.h>

void printTime(){
  
}
  
  int main(){

  return 0;
  }
<pre\>


  
#4.1
<pre>
#include <stdio.h>

void printTime(){
  
}
  
  int main(){
int h ,min;
  printf("ENTER NUM OF H AND M");
  scanf("%d%d",&h,&min);
  if(  (h>=0 && h<=23)  &&(min>=0 && min<=59)  ){
  printf("the time is %02d:%02d",h,min);  
    }else{
  printf("one or two of the integer is not valid");
}
  return 0;
  }
<pre\>
