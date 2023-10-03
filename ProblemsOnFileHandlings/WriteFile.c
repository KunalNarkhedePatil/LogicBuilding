#include<stdio.h>

int main()
{
    FILE *fptr=NULL;

    fptr=fopen("Demo.txt","a");
    //fprintf(fptr,"Ram");

   // fputs("My name is kunal",fptr);

   fputc('K',fptr);


    return 0;
}