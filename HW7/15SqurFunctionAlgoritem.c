#include <stdio.h>

// 1. Define the sqrt function that takes a double as input and returns a double
double sqrt(double num) {
    // 2. Initialize variables for the approximation and the previous approximation
    double approx = num / 2.0;
    double prev_approx;

    // 3. Iterate until the approximation is close enough to the previous approximation
    do {
        // 4. Store the current approximation as the previous approximation
        prev_approx = approx;
        // 5. Update the approximation using the average of the previous approximation and num divided by the previous approximation
        approx = (prev_approx + num / prev_approx) / 2.0;
    } while (approx != prev_approx); // 6. Continue until the approximation does not change

    // 7. Return the final approximation
    return approx;
}

int main() {
    double number = 25.0;
    printf("The square root of %.2f is %.5f\n", number, sqrt(number));
    return 0;
}