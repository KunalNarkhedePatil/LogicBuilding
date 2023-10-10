/*
Input:
Enter the string
12345
Output:
Number is :12345
*/
#include <iostream>
#include<string>
#define MAX 100
using namespace std;

class Demo
{
public:
    char *Str;
    Demo(char *Str)
    {
        this->Str = Str;
    }
    int convertStringToInt()
    {
       return stoi(Str);
    }
};
int main()
{
    char Str[MAX];

    cout << "Enter the string\n";
    cin.getline(Str, 30);

    Demo *dobj = new Demo(Str);
    int iRet=dobj->convertStringToInt();
    cout<<"Number is :"<<iRet<<endl;

    return 0;
}