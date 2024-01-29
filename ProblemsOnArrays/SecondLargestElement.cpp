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
        int iSecondMax = 0;

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

    Demo dobj(iSize);
    //we can also create a dynamic obj
    //Demo *dobj=new Demo(iSize);

    dobj.acceptArray();
    int iRet = dobj.secondLargestElement();

    cout << "Second Largest element is " << iRet << endl;

    return 0;
}