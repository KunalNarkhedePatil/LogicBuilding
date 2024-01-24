#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>  //file control
int main()
{
    int fd=0;

    fd=open("Program1.c",O_RDONLY);
    //full path -absolute path
    //relative path

    if(fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with fd : %d\n",fd);
        close(fd);
        printf("File gets successfully closed");
    }
    return 0;
}

