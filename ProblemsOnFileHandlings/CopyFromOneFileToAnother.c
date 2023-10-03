#include<stdio.h>

int main()
{
    FILE *fptr1,*fptr2;

    fptr1=fopen("Demo1.txt","r");

    if(fptr1==NULL)
    {
        printf("file not exist\n");
        exit(1);
    }

    fptr2=fopen("Demo2.txt","w");
    if(fptr2==NULL)
    {
        printf("file not exist\n");
    }

    char ch=fgetc(fptr1);

    while(1)
    {
        if(ch==EOF)
        {
            break;
        }
        else
        {
            fputc(ch,fptr2);
        }
        ch=fgetc(fptr1);
    }

    //decrypt the data

    ch=fgetc(fptr2);

    while(1)
    {
        if(ch==EOF)
        {
            break;
        }
        else
        {
            putc(ch-100,fptr2);
            ch=fgetc(fptr2);
        }
    }
    return 0;
}