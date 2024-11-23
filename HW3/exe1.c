#include <stdio.h>
#include <math.h>
/*נתון מעגל חשמלי פשוט ןבן מחברים בטור סוללה על מתח 5V נגד של 10 אוהם ונורה בעלת התנגדות של 5 אוהם 
כתובת תוכנית המבצעת את החיבובים הבאים :   */
//מהו זרם המעגל? 
//מהו המתח הנופל על הנורה ? 
//מהו הספק הנורה ? 

float calcCircI(float v1,float r1,float r2){
float I= v1/(r1+r2);
printf("The Intensitas is:%fA\n",I);
return I;
}




int main(){
    float V1,R1,R2,I,V2/*Voltage on the bulb*/,P/*Bulb power*/;
    printf("enter battray volt, Resistance of an electrical resistor and resistance of bulb:");
    scanf("%f%f%f",&V1,&R1,&R2);
    I=calcCircI(V1,R1,R2);
    V2=I*R2;
    printf("The V at the bulb is:%fV\n",V2);//מתח חשמלי (מסומן באות V)
    P=I*V2;
    printf("The electrical Power of the bulb is:%fV\n",P);


    return 0;
}