#include<iostream>
using namespace std;

int main()
{
    int i=10;
    double d=12.34;

    void *vp=NULL;

    int *ip=&i;
    double *dp=&d;

    cout<<*ip<<endl;
    cout<<*dp<<endl;
    
    vp=&i;
    int A=*(int *)vp;
    cout<<A<<endl;
    vp=&d;
    cout<<*(double *)vp<<endl;

    int B=NULL;

    B=10;
    cout<<B<<endl;


    return 0;
}