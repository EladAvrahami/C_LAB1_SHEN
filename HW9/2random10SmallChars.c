#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* randWord() {
    // Seed the random number generator
    srand(time(NULL));

    //random length between 1 and 10
    int length = rand() % 10 + 1;

    // Allocate memory for the word (+1 for the null terminator)
    char* word = (char*)malloc((length + 1) * sizeof(char));//malloc returns a pointer to the allocated memory
    if (word == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    // create random small letters
    for (int i = 0; i < length; i++) {
        word[i] = 'a' + rand() % 26;
    }

    // Null-terminate the string
    word[length] = '\0';

    return word;
}

int main() {
    char* randomWord = randWord();
    printf("Random word: %s\n", randomWord);

    // Free the allocated memory
    free(randomWord);

    return 0;
}