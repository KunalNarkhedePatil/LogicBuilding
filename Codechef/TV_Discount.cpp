Broken Phone

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=0;
	int A=0,B=0,C=0,D=0;
	cin>>t;
	while(t--)
	{
	    cin>>A>>B>>C>>D;
	    
	    int first=A-C;
	    int second=B-D;
	    
	    if(first<second)
	    {
	        cout<<"First"<<endl;
	    }
	    else if(second<first)
	    {
	        cout<<"Second"<<endl;
	    }
	    else
	    {
	        cout<<"Any"<<endl;
	    }
	}

}
