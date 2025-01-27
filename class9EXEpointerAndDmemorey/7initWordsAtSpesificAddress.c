#include<stdio.h>

void initWords(char *word1,char *word2,char *word3){
    printf("Enter 3 words sparated by space:\n");
    scanf("%s %s %s",word1,word2,word3);

    //print the words after the user entered them
    printf("word1=%s\n",word1);
    printf("word2=%s\n",word2);
    printf("word3=%s\n",word3);
}

int main(){

char word1[11],word2[11],word3[11];//additional byte for \0
initWords(word1,word2,word3);

    return 0;
}