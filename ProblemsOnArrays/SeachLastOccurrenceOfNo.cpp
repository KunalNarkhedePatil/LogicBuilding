// search last occurrence of element in the array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int iSize;
    Demo(int iSize) : MyArray(iSize) // base member initialisation
    {
        this->iSize = iSize;
    }
    int searchLastOccurrence(int iNo)
    {
        int iFlag = -1;
        for (int i = 0; i < iSize; i++)
        {
            if (Arr[i] == iNo)
            {
                iFlag = i;
            }
        }
        if (iFlag == -1)
        {
            return iFlag;
        }
        else
        {
            return iFlag;
        }
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

    int iRet = dobj.searchLastOccurrence(iNo);

    if (iRet == -1)
    {
        cout << iNo << " is not present in the array\n";
    }
    else
    {
        cout << "First occurrence of " << iNo << " is present at " << iRet << " index" << endl;
    }

    return 0;
}