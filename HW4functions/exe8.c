#include <stdio.h>
#include <stdlib.h>
void Ping (){
    printf (".\n");
}

void Baffle ()
{
    printf ("wg");
    Ping ();
}

void Zoop ()
{
    Baffle ();
    printf ("You wugga ");
    Baffle ();
}

int main () 
{

printf("No, I ");
Zoop ();
printf ("I ");
Baffle ();

return 0;

}
/*
מדפיסה :
No, I wg.
You wugga wg.
I wg.
*/

/* stack diagram
+-----------------+
| Ping()          |  <- הפונקציה הנוכחית בפעולה
+-----------------+
| Baffle()        |  <- נקראה מ-Zoop
+-----------------+
| Zoop()          |  <- נקראה מ-main
+-----------------+
| main()          |  <- התחילה את התוכנית
+-----------------+

*/

