// search the element in the array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int iSize;
    Demo(int iSize) : MyArray(iSize) // base member initialisation
    {
        this->iSize = iSize;
    }
    int searchElement(int iNo)
    {
        for (int i = 0; i < iSize; i++)
        {
            if (Arr[i] == iNo)
            {
                return i;
                break;
            }
        }
        return -1;
    }
};
int main()
{
    int iSize = 0;
    int iNo = 0;
    cout << "Enter the number of element in the array:\n";
    cin >> iSize;

    Demo dobj(iSize);
    // we can also create a dynamic obj
    // Demo *dobj=new Demo(iSize);

    dobj.acceptArray();

    cout << "Enter the element to search\n";
    cin >> iNo;

    int iRet = dobj.searchElement(iNo);

    if (iRet == -1)
    {
        cout << iNo << " is not present in the array\n";
    }
    else
    {
        cout << iNo << " is present in the " << iRet << " index" << endl;
    }

    return 0;
}