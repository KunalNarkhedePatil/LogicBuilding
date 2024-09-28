#include<iostream>

using namespace std;
void DisplayString(string input)
{
    for(int i=0;i<input.size();i++)
    {
        if(input[i]=='a')
        {
            input[i]='A';
        }
        cout<<input[i];
    }
    cout<<endl;
}
int main()
{
    string input;

    cout<<"Enter the input"<<endl;
    getline(cin,input);

    for(int i=0;i<input.size();i++)
    {
        cout<<input[i];
    }
    DisplayString(input);
    cout<<input<<endl;
    cout<<endl;
    return 0;
}