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

    fd=open(FileName,O_RDWR);
    //full path -absolute path
    //relative path

    if(fd==-1)
    {
        printf("Unable to creat file\n");
    }
    else
    {
       printf("%s gets opened successfully with file descripter %d\n",FileName,fd);
      
       iRet=read(fd,Arr,10);

       printf("%d bytes gets successfully written into file\n",iRet);

       printf("Data from file is :%s\n",Arr);

       close(fd);
    }
    return 0;
}

