#include <iostream>
#include <array>
using namespace std;

class Demo
{
public:
    void display()
    {
        array<int, 5> iArr = {10, 20, 30, 40, 50};

        int iSize = iArr.size();

        for (int i = 0; i < iSize; i++)
        {
            cout << iArr[i] << " ";
        }
        cout << endl;
        cout << "Element at 2nd index->" << iArr.at(2) << endl;
        if (iArr.empty())
        {
            cout << "Array is empty\n";
        }
        else
        {
            cout << "Array is not empty\n";
        }

        cout << "First element ->" << iArr.front() << endl;
        cout << "Last element ->" << iArr.back() << endl;
    }
};
int main()
{
    Demo *dobj = new Demo();

    dobj->display();
    return 0;
}