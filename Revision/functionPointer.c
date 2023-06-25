#include<stdio.h>
int addition(int iNo1,int iNo2)
{
    return iNo1+iNo2;
}
int main()
{
    int iNo1=10;
    int iNo2=20;

    int (*fp)(int ,int);
    fp=addition;
    int iRet=fp(iNo1,iNo2);

    printf("Addition is %d\n",iRet);
    
    return 0;
}