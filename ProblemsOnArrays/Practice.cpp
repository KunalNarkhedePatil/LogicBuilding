#include<iostream>
using namespace std;

int main()
{
    int size=0;
    cout<<"Enter the number of element in the array"<<endl;
    cin>>size;

    cout<<"Enter the element in the array"<<endl;

    int *Arr=new int[size];

    for(int i=0;i<size;i++)
    {
        cin>>Arr[i];
    }

    cout<<"entered element "<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}