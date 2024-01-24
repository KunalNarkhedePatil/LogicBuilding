#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>  //file control
int main()
{
    int fd=0;
    int iRet=0;
    char FileName[30];
    char Arr[100]={'\0'};

    printf("Enter the name of file that you want to create into current directory\n");
    scanf("%[^'\n']s",FileName);

    fd=open(FileName,O_RDWR|O_APPEND);
    //full path -absolute path
    //relative path

    if(fd==-1)
    {
        printf("Unable to creat file\n");
    }
    else
    {
       printf("%s gets opened successfully with file descripter %d\n",FileName,fd);
       
       printf("Enter the data that you want to write into file:\n");
       scanf(" %[^'\n']s",Arr);
       iRet=write(fd,Arr,strlen(Arr));

       printf("%d bytes gets successfully written into file\n",iRet);

       close(fd);
    }
    return 0;
}

