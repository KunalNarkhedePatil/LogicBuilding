/*
CASE1:
Input:
Enter the size of array
5
Enter the elements in the array:
1 2 3 4 5
Enter the number to search
3
Output:
3 is present at 2 index
---------------------------------------
CASE2:
Input:
Enter the size of array
5
Enter the elements in the array:
1 2 3 4 5
Enter the number to search
6
Output:
6 is not present in the array
*/
#include "array.h"
class Demo : public MyArray
{
public:
    Demo(int iSize) : MyArray(iSize)
    {
    }
    int binarySearchAlgorithm(int Key)
    {
        int iStart = 0;
        int iEnd = iSize - 1;

        int iFlag = -1;
        /*
        int Mid = (iStart + iEnd) / 2;

        New Formula
        int Mid=iStart+(iEnd-iStart)/2;
        iStart+iEnd/2-iStrat/2;
        iStart/2+iEnd/2;
        (iStart+iEnd)/2;
        */

        int Mid = iStart + (iEnd - iStart) / 2;

        while (iStart <= iEnd)
        {
            if (Arr[Mid] == Key)
            {
                iFlag = Mid;
                break;
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
        if (iFlag == -1)
        {
            return iFlag;
        }
        else
        {
            return iFlag;
        }

        // Time complexity 0(log n)
    }
};
int main()
{
    int iSize = 0, iRet = 0, iNo = 0;

    cout << "Enter the size of array\n";
    cin >> iSize;

    Demo *dobj = new Demo(iSize);
    dobj->acceptArray();

    cout << "Enter the number to search\n";
    cin >> iNo;

    iRet = dobj->binarySearchAlgorithm(iNo);

    if (iRet == -1)
    {
        cout << iNo << " is not present in the array\n";
    }
    else
    {
        cout << iNo << " is present at " << iRet << " index\n";
    }

    return 0;
}