#include<iostream>
using namespace std;

void DeleteElement(int Arr[],int **size,int pos)
{
    int n=**size;
    for(int i=pos;i<n;i++)
    {
       Arr[i]=Arr[i+1];
    }
    **size=**size-1;
}
int DeleteAllDuplicate(int Arr[],int *size)
{
    int iCnt=0;
    int n=*size;
    for(int i=0;i<*size;i++)
    {
        for(int j=i+1;j<*size;j++)
        {
            if(Arr[i]==Arr[j])
            {
                DeleteElement(Arr,&size,j);
            }
        }
    }
    return iCnt;
}
void ReverseArray(int *Arr,int size)
{
    int s=0;
    int e=size-1;

    while(s<=e)
    {
        int temp=Arr[s];
        Arr[s]=Arr[e];
        Arr[e]=temp;
        s++;
        e--;
    }
}
void Display(int Arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<Arr[i]<<" ";
    }
}
int main()
{
    int size=0;

    cout<<"Enter the size of array"<<endl;
    cin>>size;

    int *Arr=new int[size];
    cout<<"Enter the element in the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>Arr[i];
    }
    //cout<<"Number of Duplicate in Linked list are "<<countDuplicate(Arr,size)<<endl;
    //ReverseArray(Arr,size);
    Display(Arr,size);
    cout<<"Size is "<<size<<endl;
    DeleteAllDuplicate(Arr,&size);
    cout<<endl;
    cout<<"Size is "<<size<<endl;
    Display(Arr,size);


   
    return 0;

}