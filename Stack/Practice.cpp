#include<iostream>
using namespace std;

void solve(int Arr[],int iSize)
{
   int NegArr[iSize];
   int PosArr[iSize];
   int Positive[iSize];
   int NegCnt=0;
   int PosCnt=0;

   for(int i=0;i<iSize;i++)
   {
      if(Arr[i]<0)
      {
         NegArr[NegCnt]=Arr[i];
         NegCnt++;
      }
      else
      {
         PosArr[PosCnt]=Arr[i];
         PosCnt++;
      }
   }
   int j=0;
   int k=0;
   int i=0;
   for(i=0;i<iSize;i++)
   {
      if(i%2==0)
      {
         if(j!=PosCnt)
         {
         Arr[i]=PosArr[j];
         j++;
         }
         else
         {
            cout<<"hello1"<<endl;
            for(int l=i;l<iSize;l++)
            {
               Arr[l]=NegArr[k];
               k++;
            }
            break;
         }
      }
      else
      {
         if(k!=NegCnt)
         {
         Arr[i]=NegArr[k];
         k++;
         }
         else
         {
            for(int l=i;l<iSize;l++)
            {
               Arr[l]=PosArr[j];
               j++;
            }
            break;
         }
      }
   }

}
int main()
{
   int iSize=0;
   cout<<"Enter the size of array\n";
   cin>>iSize;

   int *Arr=new int[iSize];

   cout<<"Enter the element into array"<<endl;
   for(int i=0;i<iSize;i++)
   {
      cin>>Arr[i];
   }

  solve(Arr,iSize);

  for(int i=0;i<iSize;i++)
  {
      cout<<Arr[i]<<" ";
  }
   return 0;
}