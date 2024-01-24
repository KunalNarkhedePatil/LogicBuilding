//Link:-https://www.codechef.com/problems/ASSIGNMNT
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=0;
	int X=0,Y=0,Z=0;
	cin>>t;
	
	while(t--)
	{
	    cin>>X>>Y>>Z;
	    
	    if(X*Y>Z*60*24)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	}

}
