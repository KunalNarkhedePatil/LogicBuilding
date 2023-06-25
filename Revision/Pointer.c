#include<stdio.h>

int main()
{
    /*
    int no=11;
    int *p=&no;
    
    printf("%d\n",no);
    printf("%d\n",&no);
    printf("%d\n",p);
    printf("%d\n",&p);
    printf("%d\n",sizeof(no));
    printf("%d\n",sizeof(p));
    printf("%d\n",*p);
*/
    const int a=10;

    int *ptr=&a;
    *ptr=*ptr+1;

    printf("%d\n",a);
    
/*
    int Arr[5]={10,20,30,40,50};

    int *p=&(Arr[0]);
    int *q=&(Arr[4]);

    printf("%d\n",p);
    printf("%d\n",q);

    printf("%d\n",&p);
    printf("%d\n",&q);

    printf("%d\n",*p);
    printf("%d\n",*q);

    printf("%d\n",Arr);
    printf("%d\n",&Arr);
    printf("%d\n",&Arr+1);
    printf("%d\n",&(Arr[0]));
    printf("%d\n",&(Arr[4]));
*/



    return 0;
}