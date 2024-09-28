#include<iostream>
#include<string> 
#include<sstream>

using namespace std;
void Display(string input)
{
    stringstream ss(input);
    string word;
    int max=0;
    if(ss>>word)
    {
        max=word.size();
    }
    string ans;
    while(ss>>word)
    {
        if(word.size()>max)
        {
            max=word.size();
            ans=word;
        }
    }
    cout<<"Longest word is "<<ans<<endl;
}
int main()
{
    string input;

    cout<<"Enter the string:"<<endl;

    getline(cin,input);

    Display(input);
    return 0;
}
