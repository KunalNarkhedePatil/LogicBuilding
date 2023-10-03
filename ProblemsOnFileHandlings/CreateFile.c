#include<stdio.h>

int main()
{
    FILE *fp=NULL;

    fp=fopen("Demo.txt","w");

    if(fp==NULL)
    {
        printf("File is dose not exist\n");
    }
    else
    {
        printf("File gets created successfully\n");
    }
    return 0;
}