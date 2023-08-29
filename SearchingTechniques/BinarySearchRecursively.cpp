/*
CASE1:
Enter the size of array
5
Enter the elements in the array:
1 2 3 4 5
Enter the number to search
3
3 is present in the array
-------------------------------------
CASE2:
Enter the size of array
5
Enter the elements in the array:
1 2 3 4 5
Enter the number to search
7
7 is not present in the array
*/
#include "array.h"
class Demo : public MyArray
{
public:
    Demo(int iSize) : MyArray(iSize)
    {
    }
    bool binarySearchAlgorithm(int Arr[], int iStart, int iEnd, int Key)
    {
        if (iStart > iEnd)
        {
            return false;
        }
        int Mid = iStart + (iEnd - iStart) / 2;

        if (Arr[Mid] == Key)
        {
            return true;
        }
        if (Key > Arr[Mid])
        {
            return binarySearchAlgorithm(Arr, Mid + 1, iEnd, Key);
        }
        else if (Key < Arr[Mid])
        {
            return binarySearchAlgorithm(Arr, iStart, Mid - 1, Key);
        }
    }
};
int main()
{
    int iSize = 0, iRet = 0, iNo = 0;
    
    cout << "Enter the size of array\n";
    cin >> iSize;

    int iStart = 0;
    int iEnd = iSize - 1;


    Demo *dobj = new Demo(iSize);
    dobj->acceptArray();

    cout << "Enter the number to search\n";
    cin >> iNo;

    iRet = dobj->binarySearchAlgorithm(dobj->Arr, iStart, iEnd, iNo);

    if (iRet == true)
    {
        cout << iNo << " is present in the array\n";
    }
    else
    {
        cout << iNo << " is not present in the array\n";
    }

    return 0;
}