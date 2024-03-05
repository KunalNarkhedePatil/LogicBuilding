#include<iostream>
using namespace std;

int main()
{
    int *Arr=NULL;

    int iSize=0;

    cout<<"Enter the number of element in the array"<<endl;
    cin>>iSize;

    Arr=new int[iSize];

    cout<<"Enter the element in the array"<<endl;
    for(int i=0;i<iSize;i++)
    {
        cin>>Arr[i];
    }
    cout<<"Entered elements are:"<<endl;

    for(int i=0;i<iSize;i++)
    {
        cout<<Arr[i]<<" ";
    }
    

    return 0;
}