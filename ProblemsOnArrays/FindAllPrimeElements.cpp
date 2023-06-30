// print all the prime elements in the array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int iSize;
    Demo(int iSize) : MyArray(iSize) // base member initialisation
    {
        this->iSize = iSize;
    }
    bool checkPrime(int iNo)
    {
        if (iNo == 1)
        {
            return false;
        }
        if (iNo == 2)
        {
            return true;
        }
        int iFlag = 0;
        int M = iNo / 2;
        for (int i = 2; i <= M; i = i + 2)
        {
            if (iNo % i == 0)
            {
                iFlag = 1;
                break;
            }
            if (i == 2)
            {
                i++;
            }
        }
        if (iFlag == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void printAllPrimeElements()
    {
        for (int i = 0; i < iSize; i++)
        {
            if (checkPrime(Arr[i]))
            {
                cout << Arr[i] << " ";
            }
        }
    }
};
int main()
{
    int iSize = 0;
    cout << "Enter the number of element in the array:\n";
    cin >> iSize;

    Demo dobj(iSize);
    // we can also create a dynamic obj
    // Demo *dobj=new Demo(iSize);

    dobj.acceptArray();

    cout << "Prime elements are:\n";
    dobj.printAllPrimeElements();
    return 0;
}