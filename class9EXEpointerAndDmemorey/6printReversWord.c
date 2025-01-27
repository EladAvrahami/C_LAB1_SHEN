#include<stdio.h>
#include<string.h>

void printReversWord(char *word){
int length = strlen(word);

for (int i = length-1; i >= 0; i--)
{
    printf("%c", word[i]);
}
printf("\n");

}

int main(){
    char word[] = "ABCDEFG";//כשמאתחלים בתוך גרשיים השפה לבד יודעת להציב בסוף \0
    printReversWord(word);
    return 0;
}












/*void printReversWord(char *str){
    int i = 0;
    int j = 0;
    int k = 0;
    int len = strlen(str);
    for(i = 0; i < len; i++){
        if(str[i] == ' '){
            for(j = i - 1; j >= k; j--){
                printf("%c", str[j]);
            }
            printf(" ");
            k = i + 1;
        }
    }
    for(j = len - 1; j >= k; j--){
        printf("%c", str[j]);
    }
    printf("\n");
}


int main(){
    char str[] = "I am a student.";
    printReversWord(str);
    return 0;
}*/