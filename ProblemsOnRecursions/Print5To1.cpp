#include <iostream>
using namespace std;

class Demo
{
public:
    void print5To1(int iNo)
    {
        if (iNo == 0)
        {
            return;
        }
        cout << iNo << " ";
        print5To1(iNo - 1);
    }
};
int main()
{
    int iNo = 5;

    Demo dobj;

    dobj.print5To1(iNo);
    return 0;
}