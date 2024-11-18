#include <stdio.h>

int main()
{

    float p1x, p1y, p2x, p2y, h, w, s;
    printf("Enter x and y of the left top corner point separated by space:\n ");
    scanf("%f%f", &p1x, &p1y);
    printf("Enter x and y of the right bottom corner point separated by space:\n ");
    scanf("%f%f", &p2x, &p2y);
    h = p1y - p2y;
    w = p2x - p1x;
    s = h * w;

    printf("The S of the rectangle is:%f", s);

    return 0;
}