#include<stdio.h>

int main()
{
    FILE *fptr=NULL;

    fptr=fopen("Demo.txt","r");

    if(fptr==NULL)
    {
        printf("File is dose not exists\n");
    }
    //if you want to read the character then use fscanf & fgetc function
    // char ch='\0';
    // fscanf(fptr,"%c",&ch);
    // printf("Character is = %c",ch);

   // printf("Character is = %c",fgetc(fptr));

   int no=0;

   fscanf(fptr,"%d",&no);

   printf("Number is = %d",no);



   

    


    return 0;
}