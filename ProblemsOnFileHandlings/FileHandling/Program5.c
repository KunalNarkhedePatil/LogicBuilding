#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>  //file control
int main()
{
    int fd=0;
    int iRet=0;

    char Arr[]="Logic Building with Industrial Project Development";


    fd=open("Marvellous.txt",O_RDWR);
    //full path -absolute path
    //relative path

    if(fd==-1)
    {
        printf("Unable to creat file\n");
    }
    else
    {
       iRet=write(fd,Arr,14);
       printf("%d bytes gets successfully written into the file\n",iRet);

       close(fd);
    }
    return 0;
}

