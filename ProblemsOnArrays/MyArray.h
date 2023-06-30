#include<iostream>
using namespace std;

class MyArray
{
    public:
    int iSize;
    int *Arr;
    MyArray(int iSize)
    {
        this->iSize=iSize;
        Arr=new int[iSize];
        //cout<<"Size of Arr"<<(Arr+iSize-Arr)*sizeof(int)<<endl;
    }
    void acceptArray()
    {
        cout<<"Enter the elements in the array\n";
        for(int i=0;i<this->iSize;i++)
        {
            cin>>Arr[i];
        }
    }
    void displayArray()
    {
        
        cout<<"Entered elements are\n";
        for(int i=0;i<this->iSize;i++)
        {
            cout<<Arr[i]<<" ";
        }
        cout<<endl;
    }
};