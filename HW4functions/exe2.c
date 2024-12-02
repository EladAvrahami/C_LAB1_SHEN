#include <stdio.h>
#include <math.h>
//calc two points distance
void dist_scan(){
    float x1,y1,x2,y2,distance;
    printf("enter x and y of 2 points each parameter separated by enter:\n");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    distance=sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the points is: %.2f\n", distance);
}


int main(){
dist_scan();
return 0;
}