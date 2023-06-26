#include <iostream>
using namespace std;
class Demo
{
public:
    void factorOfNumber(int iNo)
    {
        cout << "Factor of number is :";
        for (int i = 1; i <= iNo/2; i++)
        {
            if (iNo % i == 0)
            {
                cout << i << " ";
            }
        }
    }
};
int main()
{
    int iNo = 0;
    Demo dobj;

    cout << "Enter the number\n";
    cin >> iNo;

    dobj.factorOfNumber(iNo);

    return 0;
}