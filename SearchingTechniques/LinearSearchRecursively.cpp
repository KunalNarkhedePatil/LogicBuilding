/*
CASE1:
Input:
Enter the size of array
5
Enter the elements in the array:
1 2 3 4 5
Original Array
1 2 3 4 5
Enter the Number to search
6
Output:
6 is not present in the array
------------------------------------------
CASE2:
Input:
Enter the size of array
5
Enter the elements in the array:
1 2 3 4 5
Original Array
1 2 3 4 5
Enter the Number to search
3
Output:
3 is present in the array
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
    bool linearSearchAlgorithm(int Arr[], int iSize, int Key)
    {
        if (iSize == 0)
        {
            return false;
        }
        if (Arr[0] == Key)
        {
            return true;
        }
        else
        {
            bool bRet = linearSearchAlgorithm(Arr + 1, iSize - 1, Key);
            return bRet;
        }
    }
};
int main()
{
    int iSize = 0, iNo = 0;
    bool bRet = false;

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

    bRet = dobj->linearSearchAlgorithm(dobj->Arr, dobj->iSize, iNo);

    if (bRet == true)
    {
        cout << iNo << " is present in the array\n";
    }
    else
    {
        cout << iNo << " is not present in the array\n";
    }

    return 0;
}