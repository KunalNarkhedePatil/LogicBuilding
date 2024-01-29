#include<iostream>
using namespace std;
void Display(int *Arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;
}
void printAllNegative(int *Arr,int size)
{
   for(int i=0;i<size;i++)
   {
      if(Arr[i]<0)
      {
          cout<<Arr[i]<<" ";
      }
   }
   cout<<endl;
}
int sumOfAllElement(int *Arr,int size)
{
    int Sum=0;
    for(int i=0;i<size;i++)
    {
        Sum=Sum+Arr[i];
    }
    return Sum;
}
int MaxInArray(int *Arr,int size)
{
    int Max=Arr[0];

    for(int i=0;i<size;i++)
    {
        if(Arr[i]>Max)
        {
            Max=Arr[i];
        }
    }
    return Max;
}
void SecondMaxinArray(int *Arr,int size)
{
    int max=MaxInArray(Arr,size);
    cout<<max<<endl;
    int secMax=0;
    for(int i=0;i<size;i++)
    {
        if(Arr[i]>secMax && Arr[i]<max)
        {
            secMax=Arr[i];
        }
    }
    cout<<"Second Maximum number is "<<secMax<<endl;
}
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
    Display(Arr,size);
    //printAllNegative(Arr,size);
    //cout<<"Sum of all element in the array"<<sumOfAllElement(Arr,size)<<endl;
    //MaxInArray(Arr,size);
    SecondMaxinArray(Arr,size);

    return 0;
}