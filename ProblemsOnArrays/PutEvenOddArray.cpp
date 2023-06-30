// put the even odd elements in the separete array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int iSize;
    int iEvenArrSize;
    int iOddArrSize;
    int *EvenArr;
    int *OddArr;
    Demo(int iSize) : MyArray(iSize) // base member initialisation
    {
        this->iSize = iSize;
        iEvenArrSize = 0;
        iOddArrSize = 0;
        EvenArr = new int[iSize];
        OddArr = new int[iSize];
    }
    void evenOddArray()
    {
        for (int i = 0; i < iSize; i++)
        {
            if (Arr[i] % 2 == 0)
            {
                EvenArr[iEvenArrSize] = Arr[i];
                iEvenArrSize = iEvenArrSize + 1;
            }
            else
            {
                OddArr[iOddArrSize] = Arr[i];
                iOddArrSize = iOddArrSize + 1;
            }
        }
    }
    void DisplayArray(int OpArr[], int iSize)
    {
        for (int i = 0; i < iSize; i++)
        {
            cout << OpArr[i] << " ";
        }
        cout << endl;
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
    cout << "Original Array:\n";
    dobj.DisplayArray(dobj.Arr, iSize);
    dobj.evenOddArray();
    cout << "Even Array elements:\n";
    dobj.DisplayArray(dobj.EvenArr, dobj.iEvenArrSize);
    cout << "Odd Array elements:\n";
    dobj.DisplayArray(dobj.OddArr, dobj.iOddArrSize);

    return 0;
}