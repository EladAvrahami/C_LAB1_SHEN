#include <stdio.h>

int main()
{
    int size = 3;

    /*******use array way: */
    float array[size];

    printf("Enter %d numbers: \n", size);
    for (int i = 0; i < size; i++)
    {
        float temp;
        printf("The %dth number is:\n", i + 1);
        scanf("%f", &temp);
        array[i] = temp;
    }

    for (int j = size - 1; j >= 0; j--)
    {
        printf("%.2f\n", array[j]);
    }

    return 0;
}