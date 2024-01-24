//Link:-https://www.codechef.com/problems/PRACTICEPERF
#include <bits/stdc++.h>
using namespace std;

int main() {
   int X=0;
   int cnt=0;
   for(int i=1;i<=4;i++)
   {
       cin>>X;
       if(X>=10)
       {
           cnt++;
       }
   }
   cout<<cnt<<endl;
}
