#include<stdio.h>

int main()
{
    FILE *fp=NULL;

    fp=fopen("Demo1.txt","r");

    if(fp==NULL)
    {
        printf("File is not exist\n");
    }

    char ch=fgetc(fp);
    int iCnt=0;
    while(ch!=EOF)
    {
        if(ch=='\n')
        {
            iCnt++;
        }
        ch=fgetc(fp);
    }
    printf("Number of line is %d\n",iCnt+1);
    return 0;
}