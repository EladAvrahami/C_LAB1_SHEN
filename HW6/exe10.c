#include <stdio.h>


int main()
{
    int size = 10;
    int scoresArr[size];
    int arrCountScoreExist[101]={0};



//init the scoresArr
    printf("Enter %d numbers: \n", size);
    for (int i = 0; i < size; i++)
    {
        printf("The %dth number is:\n", i + 1);
        scanf("%d", &scoresArr[i]);
        arrCountScoreExist[scoresArr[i]]++; 
        //שאתה מוצא ציון במערך ציונים מס הציון מהווה את המקום במערך השני שכל פעם שמתקבל ציון נוסף יש הפנייה לתא השני והעלתו ב1 
        
    }

    for (int i = 0; i <=100; i++)
    {
        if (arrCountScoreExist[i]>0)
        {
            printf("%d appears: %d times\n",i,arrCountScoreExist[i]); //עובר על מערך בעל 100 תאים המס שבתוך התא מבט את מס הפעמים שמס התא הוקלד עי המשתמש
        }
        
    }
    
    return 0;

}