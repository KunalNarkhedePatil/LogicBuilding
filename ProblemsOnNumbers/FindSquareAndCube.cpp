#include <iostream>
using namespace std;
class Demo
{
public:
    int findSquare(int iNo)
    {
        if(iNo<0)
        {
            iNo=-iNo;
        }
        return iNo*iNo;
    }
    int findCube(int iNo)
    {
        if(iNo<0)
        {
            iNo=-iNo;
        }
        return iNo*iNo*iNo;
    }
};
int main()
{
    int iNo = 0;
    cout << "Enter the number\n";
    cin >> iNo;
    Demo dobj;

    cout << "Square of " << iNo << " is " << dobj.findSquare(iNo) << endl;
    cout << "Cube of " << iNo << " is " << dobj.findCube(iNo) << endl;

    return 0;
}