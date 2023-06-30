// reverse the elements in the array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int iSize;
    Demo(int iSize) : MyArray(iSize) // base member initialisation
    {
        this->iSize = iSize;
    }
    void swap(int *iNo1, int *iNo2)
    {
        int iTemp = *iNo1;
        *iNo1 = *iNo2;
        *iNo2 = iTemp;
    }
    void reverseArray()
    {
        int start = 0;
        int end = iSize - 1;

        while (start < end)
        {
            swap(&Arr[start], &Arr[end]);
            start++;
            end--;
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
    cout << "Before Reverse Array is:" << endl;
    dobj.displayArray();
    dobj.reverseArray();
    cout << "After Reverse Array is:" << endl;
    dobj.displayArray();
    return 0;
}