/*
כתבו פונקציה המקבלת 
מערך של אותיות אנגליות קטנות, c
את אורכו של המערך 
ומערך נוסף של מספרים count_char
הפונקציה מונה את מס הפעמים של כל אות ומכניסה את הערך למערך count_arr
במקום המתאים למשל 
ה. למשל, הא b ’מופיעה 3 פע נשים ערך 3
count_arr[1]
חתימת הפונקציה:
void how_many(char char_arr[], int, int count_arr[]);
*/

//count chars amounts that are in array
#include <stdio.h>

void how_many(char char_arr[], int length, int count_arr[]) {
    // אתחול מערך הספירה לאפס
    for (int i = 0; i < 26; i++) {
        count_arr[i] = 0;
    }

    // ספירה של כל אות באנגלית קטנה במערך
    for (int i = 0; i < length; i++) {
        if (char_arr[i] >= 'a' && char_arr[i] <= 'z') {
            count_arr[char_arr[i] - 'a']++; // עדכון מיקום מתאים במערך הספירה
        }
    }
}

int main() {
    // דוגמת שימוש בפונקציה
    char char_arr[] = "abbcccxyzzzddddeeeee"; // מערך האותיות
    int length = sizeof(char_arr) - 1;   // חישוב אורך המערך (לא כולל null-terminator)
    printf("length is:%d\n",length);
    int count_arr[26];                  // מערך הספירה של האותיות

    // קריאה לפונקציה
    how_many(char_arr, length, count_arr);

    // הצגת התוצאות
    for (int i = 0; i < 26; i++) {
        if (count_arr[i] > 0) {
            printf("The letter '%c' appears %d times.\n", 'a' + i, count_arr[i]);
        }
    }

    return 0;
}

/*#include <stdio.h>

void how_many(char char_arr[], int length, int count_arr[])
{
    int countCharShows=1;
    //count_arr[0]=1;
for (int i = 0; i < length; i++)
    char temp_char=char_arr[i];
{
    if (char_arr[i])
    {
        //
    }
    
}

}

int main()
{
    char char_arr[] = "abbcccddddeeeee";
    int charArrSize = sizeof(char_arr) / sizeof(char_arr[0]);
    printf("array size is:%d", charArrSize);
    int count_arr[charArrSize];
    how_many(char_arr[],charArrSize,count_arr[charArrSize]);

    return 0;
}*/





