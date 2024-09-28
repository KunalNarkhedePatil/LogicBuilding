#include<iostream>
#include<map>

using namespace std;

void printDuplicatesChar(string input)
{
    map<char,int> charFreq;

    for(char ch:input)
    {
        charFreq[ch]++;
    }

    for(auto itr=charFreq.begin();itr!=charFreq.end();itr++)
    {
        if(itr->second>1)
        {
            cout<<itr->first<<endl;
        }
    }
}
int main()
{
    string input;

    cout<<"Enter the string"<<endl;
    getline(cin,input);

    printDuplicatesChar(input);
    return 0;
}