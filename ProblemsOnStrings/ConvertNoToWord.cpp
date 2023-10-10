/*
Input:
Enter the string
12345
Output:
One Two Three Four Five
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
    void convertNoIntoWord()
    {
       while(*Str!='\0')
       {
          int no=*Str-48;
          switch(no)
          {
            case 1:
            cout<<"One"<<" ";
            break;
            
            case 2:
            cout<<"Two"<<" ";
            break;
            
            case 3:
            cout<<"Three"<<" ";
            break;
            
            case 4:
            cout<<"Four"<<" ";
            break;
            
            case 5:
            cout<<"Five"<<" ";
            break;
            
            case 6:
            cout<<"Six"<<" ";
            break;
            
            case 7:
            cout<<"Seven"<<" ";
            break;
            
            case 8:
            cout<<"Eight"<<" ";
            break;
            case 9:
            cout<<"Nine"<<" ";
            break;
            
            case 0:
            cout<<"Zero"<<" ";
            break;
          }
          Str++;
       }
    }
};
int main()
{
    char Str[MAX];

    cout << "Enter the string\n";
    cin.getline(Str, 30);

    Demo *dobj = new Demo(Str);
    dobj->convertNoIntoWord();


    return 0;
}