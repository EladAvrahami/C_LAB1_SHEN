#include <stdio.h>
#include <math.h>


float perimeterTriangle(float a,float b,float c){
    return a+b+c ;
}

//Heron’s Formula for Triangles https://byjus.com/maths/heron-formula/
float areaTriangle(float a,float b,float c, float semiP){
    //printf("The Area is:%f",A);
    return sqrt( semiP*(semiP-a) * (semiP-b) * (semiP-c) );;
}

int isTriangleValid(float a, float b, float c){
if ((a+b>c && a+c>b && b+c>a) && a>0 && b>0 && c>0)
{
    float P=perimeterTriangle(a, b, c);
    printf("The Perimeter is:%f\n",P);
    float semiP=P/2;
    //areaTriangle(a,b,c,semiP);
    printf("The Area is:%f\n",areaTriangle(a,b,c,semiP));
    return 0;
}else
{
    printf("Triangle Not Valid");
    return 1;
}
}


int main(){

    float a,b,c;//legs var
    printf("insert 3 triangle sides nums");
    scanf("%f%f%f",&a,&b,&c);
    isTriangleValid(a,b,c);

    return 0;
}

