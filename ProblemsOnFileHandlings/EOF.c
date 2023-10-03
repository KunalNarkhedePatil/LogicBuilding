#include<stdio.h>

int main()
{
    FILE *fp=fopen("Demo.txt","r");

    if(fp==NULL)
    {
        printf("File dose not exits\n");

    }
    char ch=fgetc(fp);

    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    fclose(fp);
    return  0;
}