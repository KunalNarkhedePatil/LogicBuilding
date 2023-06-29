// print second largest elements in the array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int maximumElement()
    {
        int iMax = Arr[0];

        for (int i = 0; i < iSize; i++)
        {
            if (Arr[i] > iMax)
            {
                iMax = Arr[i];
            }
        }
        return iMax;
    }
    int secondLargestElement()
    {
        int iMax = maximumElement();
        int iSecondMax = Arr[0];

        for (int i = 0; i < iSize; i++)
        {
            if (Arr[i] > iSecondMax && Arr[i] < iMax)
            {
                iSecondMax = Arr[i];
            }
        }
        return iSecondMax;
    }
};
int main()
{
    int iSize = 0;
    cout << "Enter the number of element in the array\n";
    cin >> iSize;

    MyArray mobj(iSize);

    Demo dobj;

    dobj.acceptArray();
    int iRet = dobj.secondLargestElement();

    cout << "Second Largest element is " << iRet << endl;

    return 0;
}