#include <stdio.h>
#include <string.h>

// Function to convert an integer to a string
void num2str(int num, char *str) {
    int i = 0, is_negative = 0;

    // Handle the special case where the number is 0
    if (num == 0) {
        str[i++] = '0';  // Set the first character to '0'
        str[i] = '\0';   // Null-terminate the string
        return;          // Exit the function
    }

    // Handle negative numbers
    if (num < 0) {
        is_negative = 1; // Mark the number as negative
        num = -num;      // Make the number positive for processing
    }

    // Convert each digit of the number to a character
    while (num != 0) {
        str[i++] = (num % 10) + '0'; // Get the last digit and convert to character
        num /= 10;                   // Remove the last digit from num
    }

    // Add the negative sign if the number was negative
    if (is_negative) {
        str[i++] = '-';
    }

    // Null-terminate the string
    str[i] = '\0';

    // Reverse the string to get the correct order
    int start = 0, end = i - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int num;
    char str[12]; // Buffer to hold the string representation of the number
    printf("Enter a number: ");
    scanf("%d", &num); 

    num2str(num, str); // Convert the integer to a string
    printf("The number as string is: %s\n", str); // Print the string representation of the number
    return 0;
}