#include<stdlib.h>
#include <stdio.h>


void sum(int*a){
int s

}

int main(){

    srand(time(0));
int *p =(int*) malloc(3*sizeof(int));//תפסתי חנייה בזיכרון
for (int i = 0; i < 3; i++)
{
    p[i]=rand()%10;
    *(p+1)=rand()%10;
}

printf("p=%d\n",*p);
free(p);//שחרור חנייה בזיכרון


    printf("p=%d\n",(int) sizeof(p));
    return 0;
}
