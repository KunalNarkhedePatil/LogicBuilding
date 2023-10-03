#include<stdio.h>

int  main()
{
    FILE *fp=fopen("Demo1.txt","r");
    if(fp==NULL)
    {
        printf("File is not exist\n");
    }

    char ch=fgetc(fp);

    int iCntWord=0;
    int iCntChar=0;

    while(ch!=EOF)
    {
        if(ch==' ')
        {
            iCntWord++;
        }
        else
        {
            iCntChar++;
        }
        ch=fgetc(fp);
    }
    printf("Number of words are %d\n",iCntWord+1);
    printf("Number of char are %d\n",iCntChar);
    return 0;
}