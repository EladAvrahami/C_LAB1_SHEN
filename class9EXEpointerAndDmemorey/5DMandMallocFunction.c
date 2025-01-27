#include<stdio.h>
#include<stdlib.h>//gets null


//malloc function
//malloc function is used to allocate memory at runtime
//malloc function is defined in stdlib.h
//malloc function returns a pointer of type void
int main()
{
    char *str;
    str=(char*)malloc(6*sizeof(char));
    str[0]='H';
    str[1]='e';
    str[2]='l';
    str[3]='l';
    str[4]='o';
    str[5]='\0';
    printf("str=%s\n",str);
    free(str);




    int* ptr;
    ptr=(int*)malloc(1000*sizeof(int));//get 1000*4 bytes of memory
    //ptr is a pointer of type int that points to the first byte of the memory block
    if (ptr==NULL)//if memory allocation failed
    {
        printf("memory allocation failed\n");
        exit(1);
    }
    else
    {
        printf("memory allocation success\n");
    }
    free(ptr);//free the memory which means that the memory is available for other programs
    
    return 0;
}