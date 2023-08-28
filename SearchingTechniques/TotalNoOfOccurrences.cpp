/*
Input:
Enter the size of array
6
Enter the elements in the array:
1 2 2 2 2 5
Original Array
1 2 2 2 2 5 
Enter the Number to search
2
Output:
Total Number of occurrences of 4
CASE2:
Enter the size of array
6
Enter the elements in the array:
1 2 2 2 2 5
Original Array
1 2 2 2 2 5 
Enter the Number to search
8
Total Number of occurrences of 0
*/
#include "array.h"
class Demo : public MyArray
{
public:
    int iSize;

    Demo(int iSize) : MyArray(iSize)
    {
        this->iSize = iSize;
    }
    int findFirstOccurrence(int Key)
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
                iEnd = Mid - 1;
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
    int findTotolNoOfOccurrences(int Key)
    {
        int iFirstIndex = findFirstOccurrence(Key);
        if (iFirstIndex == -1)
        {
            return 0;
        }
        int iLastIndex = findLastOccurrence(Key);
        int iTotal = (iLastIndex - iFirstIndex) + 1;

        return iTotal;
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

    iRet = dobj->findTotolNoOfOccurrences(iNo);

    cout << "Total Number of occurrences of " << iRet << endl;

    return 0;
}