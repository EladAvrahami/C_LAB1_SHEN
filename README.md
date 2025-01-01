init
<pre> 
//init start base
#include <stdio.h>

//הפרש בין אות קטנה לאות קטנה באסקי הוא 32 
ASCII : https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.geeksforgeeks.org%2Fascii-table%2F&psig=AOvVaw3ikbCZqUFrr5uh2zeVAflH&ust=1735484594416000&source=images&cd=vfe&opi=89978449&ved=0CBEQjRxqFwoTCOjflojeyooDFQAAAAAdAAAAABAJ
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

<pre\> 

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
