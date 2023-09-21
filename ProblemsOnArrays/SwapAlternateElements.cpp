// print second largest elements in the array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int iSize;
    Demo(int iSize) : MyArray(iSize) // base member initialisation
    {
        this->iSize = iSize;
    }
    void swap(int *iNo1, int *iNo2)
    {
        int iTemp = *iNo1;
        *iNo1 = *iNo2;
        *iNo2 = iTemp;
    }
    int swapAlternateElements()
    {
        for (register int i = 0; i < iSize; i++)
        {
            if (i != iSize - 1)
            {
                swap(&Arr[i], &Arr[i + 1]);
                i++;
            }
        }
    }
};
int main()
{
    int iSize = 0;
    cout << "Enter the number of element in the array\n";
    cin >> iSize;

    Demo dobj(iSize);
    // we can also create a dynamic obj
    // Demo *dobj=new Demo(iSize);

    dobj.acceptArray();
    cout << "Before Swaping:" << endl;
    dobj.displayArray();
    int iRet = dobj.swapAlternateElements();
    cout << "After Swaping:" << endl;
    dobj.displayArray();

    return 0;
}