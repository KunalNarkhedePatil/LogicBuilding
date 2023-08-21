#include <iostream>
using namespace std;
class Demo
{
public:
    char ch;

    Demo(char ch)
    {
        this->ch = ch;
    }
    bool checkSpecialSymbol()
    {
        if (ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    char cValue = '\0';

    cout << "Enter the character\n";
    cin >> cValue;

    Demo *dobj = new Demo(cValue);

    bool bRet = dobj->checkSpecialSymbol();

    if (bRet == true)
    {
        cout << "Character is Special Symbol\n";
    }
    else
    {
        cout << "Character is not an Special Symbol\n";
    }

    return 0;
}