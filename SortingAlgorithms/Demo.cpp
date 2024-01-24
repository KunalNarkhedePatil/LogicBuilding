#include<iostream>
using namespace std;
void BubbleSort(int Arr[],int iSize)
{
   for(int i=0;i<iSize-1;i++)
   {
       for(int j=0;j<iSize-i-1;j++)
       {
           if(Arr[j]>Arr[j+1])
           {
               int iTemp=Arr[j];
               Arr[j]=Arr[j+1];
               Arr[j+1]=iTemp;
           }
       }
   }
   
}
void selectionSort(int Arr[],int iSize)
{
       int iSmallest=0;

       for(int i=0;i<iSize-1;i++)
       {
          iSmallest=i;

          for(int j=i+1;j<iSize;j++)
          {
              if(Arr[iSmallest]>Arr[j])
              {
                iSmallest=j;
              }
          }
          int iTemp=Arr[iSmallest];
          Arr[iSmallest]=Arr[i];
          Arr[i]=iTemp;
       }
}
int main()
{
    int iSize=0;

    cout<<"Enter the number of element in the aaray"<<endl;
    cin>>iSize;

    int *Arr=new int[iSize];

    cout<<"Enter the element in the array"<<endl;
    for(int i=0;i<iSize;i++)
    {
        cin>>Arr[i];
    }

    cout<<"Before sorting array is"<<endl;

    for(int i=0;i<iSize;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;

    //BubbleSort(Arr,iSize);
    selectionSort(Arr,iSize);

    cout<<"After sorting array is"<<endl;

    for(int i=0;i<iSize;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}