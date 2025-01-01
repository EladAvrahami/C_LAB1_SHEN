#include <stdio.h>

int main()
{
    int size = 15;
    float avg=0;
    /*******use array way: */
    float array[size];

    printf("Enter %d numbers: \n", size);
    for (int i = 0; i < size; i++)
    {
        float temp;  
        printf("The %dth number is:\n", i + 1);
        scanf("%f", &temp);
        array[i] = temp;
        avg+= temp;
    }
printf("The AVG number is:%.3f\n",avg/=size);

int count=0;
for (int i = 0; i < size; i++)
{
    if (array[i]>avg)
    {
        count++;
    }
    
} 
printf("The total num over avg is:%d\n",count);
}