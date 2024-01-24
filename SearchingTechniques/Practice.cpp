#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int size=0;
    cout<<"Enter the size of array\n";
    cin>>size;

    int *Arr=new int[size];

    cout<<"Enter element "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>Arr[i];
    }

    while(size!=1)
    {
      sort(Arr,Arr+size);
      int x=Arr[size-2];
      int y=Arr[size-1];
      if(x!=y)
      {
        Arr[size-2]=y-x;
        size=size-1;
      }
      else
      {
        size=size-2;
      }
    }
    if(size==1)
    {
        cout<<Arr[0];
    }
    else
    {
        cout<<"0";
    }

    return 0;
}