#include<string.h>
#include<stdio.h>


int main(){
//init an array with user enters capital letters from the ABC alphabet at the 
//end of the array add a 0 to indicate the end of the array

//init an array with the ABC alphabet
char ABC[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int arrSize = sizeof(ABC)/sizeof(ABC[0]);
printf("the arrSize is: %d\n", arrSize);
char abcCountArr[26]={0}; ;
int flag=1;

//check if all the letters in the ABC alphabet are in the array
//if not print 0 if yes print 1
for (int i = 0; i < arrSize; i++)
{

    char tempchar =ABC[i]; //char from the ABC alphabet
    (int)tempchar;
    //printf("the charin the abc val is: %d\n", tempchar);
    abcCountArr[tempchar-'A'] ++;//increment the count of the char in the array
    
}
for (int i = 0; i < 26; i++){
    //printf("=%d,", abcCountArr[i]);
    if (abcCountArr[i] == 0)
    {
        flag = 0;
        break;
    }
}
if (flag){
    printf("all the letters in the ABC alphabet are in the array\n");
    return 1;
}
else{
    printf("not all the letters in the ABC alphabet are in the array\n");
    return 0;
}



    return 0;
}
