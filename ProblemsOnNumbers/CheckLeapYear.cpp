#include <iostream>
using namespace std;
class Demo
{
public:
    bool checkLearYear(int iYear)
    {
        //if the year is negative then make it positive.
        if(iYear<0)
        {
            iYear=-iYear;
        }

        if (iYear % 400 == 0)
        {
            return true;
        }
        else if (iYear % 100 == 0)
        {
            return false;
        }
        else if (iYear % 4 == 0)
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
    int iYear = 0;
    cout << "Enter the year\n";
    cin >> iYear;

    Demo dobj;

    bool bRet = dobj.checkLearYear(iYear);

    if (bRet == true)
    {
        cout << "This is leap year" << endl;
    }
    else
    {
        cout << "This is leap not year" << endl;
    }

    return 0;
}