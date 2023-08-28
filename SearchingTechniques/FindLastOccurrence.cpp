/*
CASE1:
Enter the size of array
6
Enter the elements in the array:
1 2 3 4 3 5
Original Array
1 2 3 4 3 5 
Enter the Number to search
3
Last Occurrence of 3 is present at 4 index
----------------------------------------------
CASE2:
Enter the size of array
6
Enter the elements in the array:
1 2 3 4 3 4
Original Array
1 2 3 4 3 4
Enter the Number to search
7
7 is not present in the array
*/
#include "array.h"
class Demo : public MyArray
{
public:
    int iSize;

    Demo(int iSize) : MyArray(iSize)
    {
        this->iSize=iSize;
    }
    int findLastOccurrence(int Key)
    {
        int iStart = 0;
        int iEnd = iSize - 1;
        int iAns = -1;
        int Mid = iStart + (iEnd - iStart) / 2;

        while (iStart <= iEnd)
        {
            if (Arr[Mid] == Key)
            {
                iAns = Mid;
                iStart = Mid + 1;
            }

            if (Key > Arr[Mid])
            {
                iStart = Mid + 1;
            }
            else if (Key < Arr[Mid])
            {
                iEnd = Mid - 1;
            }
            Mid = iStart + (iEnd - iStart) / 2;
        }
        return iAns;
    }
};
int main()
{
    int iSize = 0, iNo = 0, iRet = 0;

    cout << "Enter the size of array\n";
    cin >> iSize;

    if (iSize < 0)
    {
        iSize = -iSize;
    }

    Demo *dobj = new Demo(iSize);
    dobj->acceptArray();

    cout << "Original Array\n";
    dobj->displayArray();

    cout << "Enter the Number to search\n";
    cin >> iNo;

    iRet = dobj->findLastOccurrence(iNo);

    if (iRet == -1)
    {
        cout << iNo << " is not present in the array\n";
    }
    else
    {
        cout << "Last Occurrence of " << iNo << " is present at " << iRet << " index\n";
    }

    return 0;
}