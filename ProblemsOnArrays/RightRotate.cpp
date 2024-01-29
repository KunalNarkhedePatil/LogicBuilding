// Original array:
// 1 2 3 4 5
// Array after left rotation:
// 3 4 5 1 2

#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int size;
    Demo(int size) : MyArray(size) // base member initialisation
    {
        this->size = size;
    }
    void rotateByOne()
    {
        int iLast=Arr[iSize-1];
        
        for(int i=iSize-1;i>0;i--)
        {
            Arr[i]=Arr[i-1];
        }
        Arr[0]=iLast;
    }
    void rightRotate(int iNo)
    {
        for (int i = 1; i <= iNo; i++)
        {
            rotateByOne();
        }
    }
};
int main()
{
    int iSize = 0;
    int iNo = 0;

    cout << "Enter the number of element in the array\n";
    cin >> iSize;

    Demo dobj(iSize);
    // we can also create a dynamic obj
    // Demo *dobj=new Demo(iSize);

    dobj.acceptArray();
    cout << "Enter the number of times that you want to rotate:\n";
    cin >> iNo;
    cout << "Original Array:\n";
    dobj.displayArray();
    dobj.rightRotate(iNo);
    cout << "After Rotating Array is:\n";
    dobj.displayArray();
    return 0;
}