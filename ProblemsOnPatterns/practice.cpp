#include<iostream>
using namespace std;
void DisplayPattern()
{
   for(int i=1;i<=5;i++)
   {
      for(int j=1;j<=5;j++)
      {
        if(j==5)
        {
           cout<<i<<" ";
           continue;
        }
        if(i+j>=6)
        {
           cout<<"* ";
        }
        else
        {
           cout<<"  ";
        }
      }
      for(int k=2;k<=i;k++)
      {
         cout<<"* ";
      }
      cout<<endl;
   }
}
int main()
{
    DisplayPattern();
    return 0;
}