#include <iostream>
using namespace std;
class Demo
{
public:
    void swap(int iNo1, int iNo2)
    {
        //iNo1=10;
        //iNo2=20;
        iNo1=iNo1+iNo2;  //iNo1=10+20=30;
        iNo2=iNo1-iNo2;  //iNo2=30-20=10;
        iNo1=iNo1-iNo2;  //iNo1=30-10=20;
        cout << "After Swap:" << iNo1 << " " << iNo2 << endl;
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
    dobj.swap(iNo1, iNo2);

    return 0;
}