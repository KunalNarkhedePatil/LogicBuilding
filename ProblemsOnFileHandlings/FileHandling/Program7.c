#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>  //file control
int main()
{
    int fd=0;
    int iRet=0;

    char Arr[]="Angular Web Development";


    fd=open("Marvellous.txt",O_RDWR|O_APPEND);
    //full path -absolute path
    //relative path

    if(fd==-1)
    {
        printf("Unable to creat file\n");
    }
    else
    {
       iRet=write(fd,Arr,24);
       printf("%d bytes gets successfully written into the file\n",iRet);

       close(fd);
    }
    return 0;
}

