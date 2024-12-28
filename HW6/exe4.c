#include <stdio.h>
//Pyramid and revers Pyramid algo

void printSpace(int n){
for (int i = 0; i < n; i++)
{
  printf(" ");
}
}



void pyramid(char A, int oddSize){
int numSpace=0;
for (int i = oddSize; i > 0; i-=2)
{
  printSpace(numSpace);
    for(int j=0;j<i;j++){
      printf("%c",A);
      //printSpace(numSpace);
      }
      printSpace(numSpace);
      numSpace++;
      printf("\n");
}
}


void reversPyramid(char smallChar, int oddSize){
int numS=oddSize -1;
  for (int i = 0; i < oddSize; i+=2)
  {
    printSpace(numS/2);
    printf("%c",smallChar);
      for(int j=0;j<i;j++){
        printf("%c",smallChar);
        }
    printSpace(numS/2);
    numS-=2;
    printf("\n");
  }

}

//הפרש בין אות קטנה לאות גדולה באסקי הוא 32   
int main(){

//char A ='A';
int oddSize;
char A;
char smallChar;

printf("Enter capital letter:");
scanf("%c",&A);



if (A>='A' && A<'Z')
{
  printf("the CAPITAL char is:%c\n",A);
  smallChar = A+32;
  printf("Enter Odd number BETWEEN 1-21 :");
  scanf("%d",&oddSize);
  if (oddSize%2==0){
  printf("num is NOT ODD");
  return 1;
    }else if (1>oddSize>21){
    printf("SIZE INPUT ERROR");
    return 1;
  }else
  {
  pyramid(A,oddSize);
  reversPyramid(smallChar,oddSize);
  }
  
}else
printf("NOT capital char - LETTER INPUT ERROR EXCEPTION \n");
return 1;

//pyramid(A,oddSize);
//reversPyramid(smallChar,oddSize);

    return 0;
}