#include<stdio.h>

int main(){
//https://www.mathsisfun.com/binary-decimal-hexadecimal-converter.html
//https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/
//12 binary =00001100
//42 binary =00101010
//more explanation in Auxiliary meterials folder

int a=12 , b=42 ;
printf("%d\n",a&b);//Bitwise And(*)  001000 = in decimal 8
printf("%d\n",a^b);//Bitwise Xor 100110 = in decimal 38
printf("%d\n",a|b);//Bitwise OR 101110 = 46
printf("%d\n",a>>2);//move two bits right 00000011 = in dec 3
printf("%d\n",b<<1);//move one bit left 01010100 =in dec 84
printf("%d\n",!(a+b));//the sum is 54 and its not worth 0(false) 
//so the operator ! make it false which mean 0 
printf("%d\n",!a+b);//a not worth 0 so it true, and than the mark ! make
//it to false which mean 0 and than (!a)=0 +b which worth 42 gat us 42 




    return 0;
}