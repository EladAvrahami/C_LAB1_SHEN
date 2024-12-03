#include <stdio.h>
#include <math.h>
// calc two points distance
//(x-px)^2 +(y-py)^2 = r^2 //יחס רדיוס ממרכז מעגל ונקודה נוסחא
int dist(float x1, float y1, float Px, float Py, float r)
{
    float distance = sqrt(pow(Px - x1, 2) + pow(Py - y1, 2));
    float squaredR = pow(r,2);
    if (distance<=squaredR)
    {
        return 1;
    }else{
        return 0;
    }
    
}


void isRect_in_circ(float x1, float y1,float x2, float y2 ,float Px, float Py, float r)
{
    if (dist(x1,y1,Px,Py,r) || dist(x1,y2,Px,Py,r) || dist(x2,y1,Px,Py,r) || dist(x2,y2,Px,Py,r))
    {
        printf("At least one rect vertices is inside the circle.\n");
    }else 
        printf("No rect vertices is inside the circle.\n");
}

int main()
{
    float Px, Py, r;
    // x1y1 topleft  x2y2 bottom right
    float x1, y1, x2, y2, distance;
    printf("Insert circ center(Px,Py) and R each parameter separated by enter:\n");
    scanf("%f%f%f", &Px, &Py, &r);
    printf("Insert rec top left x y (separated by enter) :\n");
    scanf("%f%f", &x1, &y1);
    printf("Insert rec bottom right x y (separated by enter) :\n");
    scanf("%f%f", &x2, &y2);
    isRect_in_circ(x1,y1,x2,y2,Px,Py,r);
    
    return 0;
}


