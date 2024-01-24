#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>  //file control
int main()
{
    int fd=0;
    int iRet=0;
    int iSize=0;
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
      
       while((iRet=read(fd,Arr,sizeof(Arr)))!=0)
       {
          printf("%d bytes gets read from the file\n",iRet);
          iSize=iSize+iRet;
       }

       printf("File constains %d bytes in it\n",iSize);

       close(fd);

    }
    return 0;
}

