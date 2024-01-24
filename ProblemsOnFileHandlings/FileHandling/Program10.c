#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>  //file control
int main()
{
   char FileName[30];
   int fd=0;
   printf("Enter the name of file that you want to create into current directory\n");
   scanf("%s",FileName);

   fd=creat(FileName,0777);

   if(fd==-1)
   {
      printf("Unable to create %s file\n",FileName);
   }
   else
   {
      printf("%s gets created successfully with file descripter %d\n",FileName,fd);
      close(fd);
   }

   return 0;
}

