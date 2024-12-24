#include <stdio.h>
#include <math.h>

int sumDigOfPowNB(int N, int B)
{
    // Calculate N raised to the power B
    long long int result = 1;
    for (int i = 0; i < B; i++)
    {
        result *= N;
    }

    // Array to track which digits (0-9) appear in the result
    int digitCount[10] = {0};
    printf("the sum of the pow: %d \n", result);
    // Check each digit in the result
    while (result > 0)
    {
        int digit = result % 10;
        digitCount[digit] = 1; // Mark this digit as found
        result /= 10;
    }

    // Count the number of distinct digits
    int distinctDigits = 0;
    for (int i = 0; i < 10; i++)
    {
        if (digitCount[i] == 1)
        {
            distinctDigits++;
        }
    }

    return distinctDigits;
}

int main()
{
    int N, B;

    // Get input for N and B
    printf("Enter two integers to raise the first to the power of the second: ");
    scanf("%d%d", &N, &B);

    // Call the function to find the number of distinct digits in N^B
    int result = sumDigOfPowNB(N, B);

    // Output the result
    printf("The number of distinct digits in %d^%d is: %d\n", N, B, result);

    return 0;
}