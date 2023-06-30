// print reverse all the elements in the array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int iSize;
    Demo(int iSize) : MyArray(iSize) // base member initialisation
    {
        this->iSize = iSize;
    }
    int reverseNo(int iNo)
    {
        int iRev = 0;

        while (iNo != 0)
        {
            iRev = iRev * 10 + iNo % 10;
            iNo = iNo / 10;
        }
        return iRev;
    }
    void reverseElements()
    {
        for (int i = 0; i < iSize; i++)
        {
            int iNo = reverseNo(Arr[i]);
            Arr[i] = iNo;
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
    cout << "Before Reverse Array:\n";
    dobj.displayArray();
    dobj.reverseElements();
    cout << "After Reverse Array:\n";
    dobj.displayArray();

    return 0;
}