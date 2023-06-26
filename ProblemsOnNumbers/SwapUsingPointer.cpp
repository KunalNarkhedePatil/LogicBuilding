#include <iostream>
using namespace std;
class Demo
{
public:
    void swap(int *iNo1, int *iNo2)
    {
       int iTemp=*iNo1;
       *iNo1=*iNo2;
       *iNo2=iTemp;
    }
};
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    cout << "Enter the first number\n";
    cin >> iNo1;
    cout << "Enter the second number\n";
    cin >> iNo2;

    Demo dobj;
    cout << "Before Swap:" << iNo1 << " " << iNo2 << endl;
    dobj.swap(&iNo1, &iNo2);
    cout << "After Swap:" << iNo1 << " " << iNo2 << endl;

    return 0;
}