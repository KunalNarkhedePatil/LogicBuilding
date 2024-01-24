//Link:-https://www.codechef.com/problems/BUDGET_
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=0;
	
	cin>>t;
	int X=0,Y=0;
	while(t--)
	{
	    cin>>X>>Y;
	    
	    if(Y*30<=X)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}

}
