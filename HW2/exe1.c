#include <stdio.h>
int main()
{

    /**********************שני נק ראשונות ************ */
    char ch;
    printf("Please enter a character between a-z or A-Z: ");
    scanf("%c", &ch);
    printf("The char u enter is: %c\nand it ASCII val is:%d\n", ch, ch);
    printf("The next char AFTER is:%c and its ASCII val is:%d\n\n\n", ch + 1, ch + 1);

    /**********************שני נקודות שניות ************************** */
    char sch;
    printf("Enter letter between a-z (small letter):");
    scanf("%c", &sch);
    // if(122>(int)sch>96) according to ascii table
    if ((int)sch > 96 && (int)sch < 123)
    {
        printf("The capital letter of your init char is:%c and its ASCII val is:%d", sch - 32, sch - 32);
    }
    else
    {
        printf("ERROR- try to rerun and enter the right char cuz we didnt learn while yet");
    }

    /*
    char sch;
    do{
    printf("enter small char in english\n");
    scanf("%c",&sch);
    }
    while (!(int)sch > 96 && !(int)sch < 123);
    {
        printf("ERROR typo - try to enter valid small char in english\n");
    }
    printf("The capital letter of your init char is:%c and its ASCII val is:%d",sch-32,sch-32);
    */

    return 0;
}
