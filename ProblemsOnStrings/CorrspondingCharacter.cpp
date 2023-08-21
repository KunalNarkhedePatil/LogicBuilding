#include <iostream>
using namespace std;
class Demo
{
public:
    char ch;
    Demo(char ch)
    {
        this->ch=ch;
    }
    char DisplayCorrspondingCharacter()
    {
        if(ch>='A' && ch<='Z')
        {
            ch=ch+32;
        }
        else if(ch>='a' && ch<='z')
        {
            ch=ch-32;
        }
        return ch;
    }
};
int main()
{
    char cValue = '\0';

    cout << "Enter the character\n";
    cin >> cValue;

    Demo *dobj = new Demo(cValue);

    char cRet = dobj->DisplayCorrspondingCharacter();

    cout << "Corrsponding Character is " << cRet << endl;
    return 0;
}