algo:
1****************GCD:****************
https://github.com/EladAvrahami/c_lab1_Shen/commit/58c90ea3ee3f98f9c286e9983b267608c976ed7d#diff-9adb57dde3a8c4688e3a11a1341af0b8270a1ae2cb4ceb846c8c29c5c201bb55

2*******BinarySearch*************
https://github.com/EladAvrahami/c_lab1_Shen/commit/1051b94df012f1737e520a8056134ea1543ee353

3********LinearSearch***************
2easy2remember

4************Power Algo***************
https://github.com/EladAvrahami/c_lab1_Shen/commit/bd2c3edace8cc20b2bf3c61b56c85951b4347410

5***********Square Algo****************
https://github.com/EladAvrahami/c_lab1_Shen/commit/22ae3817ad3a8a07df55747c5d08e9d719ab6ef2

6******Selection/MAX Sort************
find max:
https://github.com/EladAvrahami/c_lab1_Shen/commit/650f555389566a810013b2fd64fd99d941a4af47
find minimum:
https://github.com/EladAvrahami/c_lab1_Shen/commit/7d1657a855ca03df17f8ca51407adcef26e47092


***********Bubble Sorting***************
https://github.com/EladAvrahami/c_lab1_Shen/commit/3047efc3efc072bb566f970be92b40de71b807fa

***********Merge Sorted Array**********
https://github.com/EladAvrahami/c_lab1_Shen/commit/32d01ff1f08b8d3f4162967c05b1d1686e5a062d   
and:
https://github.com/EladAvrahami/c_lab1_Shen/commit/ac15102c6de66b2a8425e38529c5a6c7304722e6
להשלים משיעור 7 



*******BucketSort/Histogram Sort**************
https://github.com/EladAvrahami/c_lab1_Shen/commit/3291fdfdba479079ef2899350053dc8ddc2ba60a   
and:
https://github.com/EladAvrahami/c_lab1_Shen/commit/3df3a52b5a7fd4bf114e2d546bd49748d9fd7bd0

10**************Monta Carlo******************

********simulation algo MonthHall***********
https://github.com/EladAvrahami/c_lab1_Shen/commit/e600f1eb72a4bac4af7e9cb49cdfed5715abbe37







<pre> 
//init start base
#include <stdio.h>
int main(){

    return 0;
}
<pre\>

%lu -מציין שצפוי מספר שלם חיובי ללא סימן (unsigned long)
postfix:
if a=2
a=c++ ->
a=c-- ->

prefix:
if a=2
a=++c ->  
a=--c ->

For loops

***********Array************
//https://www.geeksforgeeks.org/c-arrays/
<pre> 
int a[10]; //create 10 cells (0-9)
a[0]=5; //give val of 5 to cell 0 
//define array: 
int a[3];a[0]=2;a[1]=6;.... //define each cell separatly
int b[3]={6,3,1};//give var to cells
int c[]={6,3,1};//לא דינאמי נקבע באותו רגע 
int d[3]={6} //={6,0,0}
int e[3]={6,7,8,2};//ERROR cuz array init with 3 cells
short a[5]={'h',4,6,7,'E'};//אות הופכת למס לפי אסקי
int memSize=sizeof(a);//memSize = items(vars)*2 bytes =10

 // Calculate the number of elements in the array
 int length = sizeof(arr) / sizeof(arr[0]); //חישוב אורך המערך (לא כולל null-terminator)

<pre\> 


//הפרש בין אות קטנה לאות קטנה באסקי הוא 32 
ASCII : https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.geeksforgeeks.org%2Fascii-table%2F&psig=AOvVaw3ikbCZqUFrr5uh2zeVAflH&ust=1735484594416000&source=images&cd=vfe&opi=89978449&ved=0CBEQjRxqFwoTCOjflojeyooDFQAAAAAdAAAAABAJ




//***********************String**************
https://www.geeksforgeeks.org/strings-in-c/
can NOT compere 2 String like this :
if "abc" == "abc";


<pre\> 

result = result + (str[i] -"0" );  // החסרת הערכת האסקי של 0 מהערך האסקי מהמספר שהתקבל 


מימוש חזקה pow algoritem
****** linear compliexity *****
<pre>
pow(a,b)= a*pow(a,b-2)->pow(a,0)=1

****** log compliexity *****
pow(a,b)=pow(a,b/2)*pow(a,b/2) אם זוגי 
        = a*pow(a,b/2)*pow(a,b/2) אם אי זוגי 
<pre\>

אלגוריתמיים שנלמדו  :
<pre>
1. pow
2. bubble sort
3. euclides algorithm
<pre\>

// הדפסת המספר עם 4 ספרות לפני הנקודה ו-3 ספרות אחרי הנקודה
// https://www.geeksforgeeks.org/printf-in-c/   //spacial printing
<pre>printf("%08.3f\n", num);<pre\>


***** Binary values *****
https://www.geeksforgeeks.org/sizeof-operator-c/

To write a C program that takes an integer as input and outputs its binary representation, you can use bitwise operations. Here's a simple example of how to achieve this:

```c
#include <stdio.h>

void printBinary(int n) {
    // Loop through each bit of the integer, starting from the highest bit
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--) {
        // Print '1' or '0' depending on whether the bit is set or not
        if (n & (1 << i)) {
            printf("1");
        } else {
            printf("0");
        }
        
        // Add a space after every 8 bits (optional, for better readability)
        if (i % 8 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int num;
    
    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Print the binary representation of the integer
    printf("Binary value: ");
    printBinary(num);
    
    return 0;
}
```

### Explanation:
- **`printBinary(int n)`**: This function prints the binary representation of the integer `n`. It loops through all the bits of the integer, starting from the most significant bit (highest bit) down to the least significant bit. The bitwise AND operation (`n & (1 << i)`) is used to check whether each bit is set to `1` or `0`.
- **`sizeof(n) * 8`**: This ensures the program works with the size of the integer type, regardless of the system architecture (typically 32 bits or 64 bits).
- **`printf("1")` and `printf("0")`**: Print the corresponding bit values for each position.
- **Space every 8 bits**: To make the output more readable, a space is printed every 8 bits.

### Example Output:
If the user enters `5` as input, the output will be:
```
Enter an integer: 5
Binary value: 00000000 00000000 00000000 00000101
```

The leading zeros ensure that the full 32-bit representation is shown.





//סימולציות 




סיכום האלגוריתמים שפגשתם בקורס:
1. חיפוש לינארי / בינארי
2.מיון: בועות דלאים מיזוג ובחירה 
3. נומריים: חזקה ,שורש,חצייה סימולציה ומונטה קרלו אוקלידס למציאת GCD 









********************מצביע (pointer)**************************
//int i;// יתפוס 4 בייט בזיכרון
//char tav;//יתפוס 1 ביט בזיכרון 
//int *ptr  //משתנה מסוג מצביע הכוכב מסמן שהוא הולך להחזיק כתובות ולא ערכים וסוג הכתובת מסוג מספר שלם
//כתובת בזיכרון מיוצגת עי בסיס הקסדצימלי

//ההבדל בין * ל& הוא ש * מצביע על ערך ו & מצביע על כתובת



המצביע הזה מצביע למיקום בזיכרון שבו נשמרת המחרוזת (או כל נתון אחר), ולא מכיל את המידע עצמו ישירות. במקום לשמור את המחרוזת עצמה, המצביע שומר את הכתובת בזיכרון שבה המחרוזת נמצאת.

נניח שיש לנו את הפונקציה strEq:

int strEq(char *a, char *b) {
    return strcmp(a, b) == 0;
}

במקרה הזה:

char *a ו-char *b הם שני מצביעים למחרוזות.
המצביע a מצביע לכתובת בזיכרון שבה נשמרת המחרוזת a, והמצביע b מצביע לכתובת בזיכרון שבה נשמרת המחרוזת b.
מה קורה מאחורי הקלעים?
המחרוזות (כמו a[] = "abc") נשמרות כטבלה של תו אחרי תו בזיכרון.
כל תו במחרוזת נשמר במיקום אחר בזיכרון, והמַצביע (כמו *a או *b) מכיל את הכתובת שבה התו הראשון במחרוזת מאוחסן.
למה זה חשוב?
המצביעים מאפשרים לפונקציות לעבוד עם נתונים בצורה יותר גמישה, כי במקום להעביר את כל המחרוזת, אנחנו מעבירים רק את הכתובת שלה בזיכרון. בכך אנחנו חוסכים בזיכרון ומאפשרים למערכת לנוע ביעילות.

דוגמה עם המצביע:
אם אתה שולח פונקציה את המצביע למחרוזת, הפונקציה תוכל לקרוא את המחרוזת דרך הכתובת של המצביע מבלי צורך להעביר את המחרוזת כולה. אם היו שולחים את המחרוזת עצמה (לא את הכתובת שלה), זה היה דורש הרבה יותר זיכרון.

מתי משתמשים ב-* ו-&?
*a: כשאתה כותב *a בתוך הפונקציה, אתה בעצם מתייחס לערך שאליו המצביע a מצביע.
a: כשאתה כותב a (בלי ה-*), אתה מתייחס לכתובת בזיכרון שאליה המצביע a מכוון.
הסימן * לפני משתנה בפונקציה (כמו ב-char *a) משדר למערכת שזו משתנה שהוא מצביע (pointer).


/*הפרמטר (char* str): הפונקציה מקבלת פרמטר אחד שהוא מצביע למערך תוים (מחרוזת) מסוג char. המצביע char* מציין כי המשתנה str הוא מצביע (pointer) למערך של תוים, כלומר, המערכת מצפה למחרוזת תוים כקלט.
למשל : char str[] = "12345"
מציינת שפונקציה זו מקבלת מחרוזת (שהיא מצביע למערך תוים) ומחזירה ערך מסוג מס שלם */
<pre> 
int str2int(char* str){}