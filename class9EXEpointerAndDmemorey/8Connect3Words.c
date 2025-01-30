#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatWords(char* w1, char* w2, char* w3) {
    // Calculate the total length of the connectWords string
    int length = strlen(w1) + strlen(w2) + strlen(w3) + 1; // +1 for the null terminator

    // Allocate memory for the new string
    char* result = (char*)malloc(length * sizeof(char));
    if (result == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    result[0] = '\0'; // Initialize the string with null terminator
    // Copy the first word into the result
    strcat(result, w1);
    // Concatenate the second word
    strcat(result, w2);
    // Concatenate the third word
    strcat(result, w3);

    return result;
}

int main() {
    char word1[] = "Hello";
    char word2[] = "World";
    char word3[] = "Again";

    char* result = concatWords(word1, word2, word3);
    if (result != NULL) {
        printf("connectWords string: %s\n", result);
        // Free the allocated memory
        free(result);
    }

    return 0;
}