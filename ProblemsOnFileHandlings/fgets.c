#include<stdio.h>

int main()
{
    char str[20];

    FILE *fptr=NULL;

    fptr=fopen("Demo.txt","r");

    fgets(str,20,fptr);

    printf("The string is :%s",str);
    fclose(fptr);

    return 0;
}