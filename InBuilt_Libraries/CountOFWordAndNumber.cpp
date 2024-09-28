#include<iostream>
#include<sstream>

#include<string>

using namespace std;
void Display(string input)
{
    stringstream ss(input);

    string word;
  
    int WiCnt=0;
    int iCnt=0;

    while(ss>>word)
    {
        istringstream iss(word);
        
        int value;

        if(iss>>value)
        {
            iCnt++;
        }
        else
        {
            WiCnt++;
        }
    }

    cout<<"Number of word are:"<<WiCnt<<endl;
    cout<<"Number of Interger are:"<<iCnt<<endl;
}
int main()
{
    string input;

    cout<<"Enter the string:"<<endl;
    getline(cin,input);

    Display(input);
    return 0;
}