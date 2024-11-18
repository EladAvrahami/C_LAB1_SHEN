#include <stdio.h>
#include <math.h>
// exe 5+6 I execute it with printing function 
void printAvgSumSquare(int num1, int num2){
    float sum = num1+num2;
    float avg = sum/2;
    printf("The sum of them is:%f\n", sum);
    printf("The avg of them is:%f\n", avg);

    if (num1>num2)
    {
        printf("The big num sqr1 small num is:%f\n", pow(num1, num2));
        printf("The small num sqr2 big num is:%f\n", pow(num2, num1));
    }else{
        printf("The big num sqr1 small num is:%f\n", pow(num2, num1));
        printf("The small num sqr2 big num is:%f\n", pow(num1, num2));
    }
    
}


int main(){
    
    int num1, num2;
    
    printf("enter 2 numbers even and uneven:");
    scanf("%d%d",&num1,&num2);
    if(num1 % 2 == 0 && num2 % 2 == 1 || num1 % 2 == 1 && num2 % 2 == 0){
        printAvgSumSquare(num1,num2);
    }else{
        printf("please enter valid nums as the instruction said");
    }
        
    return 0;
}
