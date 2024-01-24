//Link:-https://www.codechef.com/problems/BROKENPHONE
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=0;
	int X=0,Y=0;
	cin>>t;
	while(t--){
	    cin>>X>>Y;
	    
	    if(X<Y)
	    {
	        cout<<"REPAIR"<<endl;
	    }
	    else if(Y<X)
	    {
	       cout<<"NEW PHONE"<<endl; 
	    }
	    else
	    {
	        cout<<"ANY"<<endl; 
	    }
	}

}
