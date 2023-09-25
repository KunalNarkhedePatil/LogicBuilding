#include <iostream>
using namespace std;
class Demo
{
public:
    int *Arr;
    int iSize;

    Demo(int iSize = 5)
    {
        this->iSize = iSize;
        this->Arr = new int[iSize];
    }
    void Accept()
    {
        cout << "Enter the number of elemets:\n";
        for (int i = 0; i < iSize; i++)
        {
            cin >> Arr[i];
        }
    }
    void printArrUsingRecursion(int i)
    {
        if (i == iSize)
        {
            return;
        }
        cout << Arr[i] << " ";
        printArrUsingRecursion(i + 1);
    }
};
int main()
{
    int iSize = 0;

    cout << "Enter the size of array\n";
    cin >> iSize;

    Demo *dobj = new Demo(iSize);

    dobj->Accept();
    cout << "Array element are:";
    dobj->printArrUsingRecursion(0);
    return 0;
}