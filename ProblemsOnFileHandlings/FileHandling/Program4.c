#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>  //file control
int main()
{
    int fd=0;

    fd=creat("Marvellous.txt",0777);
    //full path -absolute path
    //relative path

    if(fd==-1)
    {
        printf("Unable to creat file\n");
    }
    else
    {
        printf("File is successfully opened with fd : %d\n",fd);
    }
    return 0;
}

