#include<iostream>
#include<vector>

using namespace std;

#include<vector>
int main()
{
   vector<int> v;
   for(int i=1;i<=5;i++)
   {
      v.push_back(i);
   }
   vector<int>::iterator it;
   for(it=v.begin();it!=v.end();it++)
   {
      cout<<*it<<" ";
   }
   cout<<endl;
   for(int i=0;i<v.size();i++)
   {
      cout<<v.at(i)<<" ";
   }
   cout<<endl;

   vector<int> v1;

   v1.push_back(10);
   v1.push_back(10);
   v1.push_back(10);
   v1.push_back(10);

   for(int i=0;i<v1.size();i++)
   {
     cout<<v1.at(i)<<" ";
   }
   cout<<endl;
   v1.push_back(20);
   cout<<v1.capacity()<<endl;
   cout<<v1.size()<<endl;
   cout<<v1.front()<<endl;
   cout<<v1.back()<<endl;

   int sum=0;
   while(!v1.empty())
   {
      sum=sum+v1.back();
      v1.pop_back();
   }
   cout<<sum<<endl;
   cout<<v1.max_size()<<endl;
    return 0;
}