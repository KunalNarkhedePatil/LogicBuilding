#include<stdio.h>
int main()
{
    FILE *fptr1=fopen("Demo1.txt","r");

    if(fptr1==NULL)
    {
        printf("file is not exist\n");
        exit(1);
    }

    FILE *fptr2=fopen("Demo2.txt","w");

    if(fptr2==NULL)
    {
        printf("file is not exist\n");
        exit(1);
    }

    //decrypt

    char ch=fgetc(fptr2);

    while(1)
    {
        ch=fgetc(fptr2);
        if(ch==EOF)
        {
            break;
        }
        else
        {
            fputc(ch-100,fptr1); 
        }
    }
    fclose(fptr1);
    fclose(fptr2);

    return 0;
}