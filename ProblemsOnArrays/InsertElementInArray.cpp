// insert the element in the array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int size;
    
    Demo(int size) : MyArray(size) // base member initialisation
    {
        this->size = size;
    }
    void insertElement(int iNo, int iPos)
    {
        if (iPos < 0 || iPos > iSize + 1)
        {
            cout << "Invalid Position\n";
            return;
        }
        Arr = (int *)realloc(Arr, sizeof(int) * (size + 1)); // here we use the relloc function for reallocated the memory

        for (int i = size; i >= 0; i--)
        {
            if (i == iPos)
            {
                Arr[iPos] = iNo;
                break;
            }
            Arr[i] = Arr[i - 1];
        }
        this->Arr = Arr;
        this->iSize = iSize + 1;
        cout << "After Inserting the element array is " << endl;
    }
};
int main()
{
    int iSize = 0;
    int iNo = 0;
    int iPos = 0;
    cout << "Enter the number of element in the array\n";
    cin >> iSize;

    Demo dobj(iSize);
    // we can also create a dynamic obj
    // Demo *dobj=new Demo(iSize);

    dobj.acceptArray();

    cout << "Enter the element to insert\n";
    cin >> iNo;

    cout << "Enter the position to insert\n";
    cin >> iPos;
    dobj.displayArray();
    dobj.insertElement(iNo, iPos - 1);
    dobj.displayArray();

    return 0;
}