#include <stdio.h>
#include <math.h>

// פונקציה לחישוב המרחק בין שתי נקודות
float dist(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Heron’s Formula for Triangles https://byjus.com/maths/heron-formula/
float areaTriangle(float x[], float y[])
{
    float a = dist(x[0], y[0], x[1], y[1]);
    float b = dist(x[1], y[1], x[2], y[2]);
    float c = dist(x[2], y[2], x[0], y[0]);

    float s = (a + b + c) / 2;
    // חישוב שטח המשולש לפי נוסחת Heron
    return sqrt(s * (s - a) * (s - b) * (s - c));
    ;
}

int main()
{
    float x[3], y[3];

    for (int i = 0; i < 3; i++)
    {
        printf("insert the %luth pair of x&y for triangle vertex", i + 1); //%lu: מציין שצפוי מספר שלם חיובי ללא סימן (unsigned long)
        scanf("%f%f", &x[i], &y[i]);
    }
    // הצגת הערכים שהוזנו
    for (int i = 0; i < 3; i++)
    {
        printf("Vertex %lu: x = %.2f, y = %.2f\n", i + 1, x[i], y[i]);
    }

    float area = areaTriangle(x, y);

    printf("The area of the triangle is: %.2f\n", area);
}