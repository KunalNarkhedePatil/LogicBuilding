#include<iostream>
#include<stack>
#include<string>
using namespace std;


int main()
{
    stack<char> sobj;

    char Str[20]="kunal";

   int i=0;

    while(Str[i]!='\0')
    {
        cout<<Str[i]<<" ";
        sobj.push(Str[i]);
        i++;
    }
    cout<<endl;
    string str="";

    while(!sobj.empty())
    {
        cout<<sobj.top()<<" ";
        str.push_back(sobj.top());
        sobj.pop();
    }
    cout<<str<<endl;




    return 0;
}