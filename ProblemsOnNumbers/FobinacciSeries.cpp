#include <iostream>
using namespace std;
class Demo
{
public:
    void findFobonacciSeries(int iNo)
    {
        int a = 0;
        int b = 1;
        int c = 0;

        cout << a << " " << b<<" ";

        for (int i = 3; i <= iNo; i++)
        {
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }
};
int main()
{
    int iNo = 0;

    cout << "Enter the number\n";
    cin >> iNo;

    Demo dobj;
    cout<<"Fobonacci Series:";
    dobj.findFobonacciSeries(iNo);

    return 0;
}