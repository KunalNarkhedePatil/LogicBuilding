// copy the element from one array to another array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int iSize;
    Demo(int iSize) : MyArray(iSize) // base member initialisation
    {
        this->iSize = iSize;
    }
    void copyArray()
    {
        int *Brr = new int[iSize];

        for (int i = 0; i < iSize; i++)
        {
            Brr[i] = Arr[i];
        }
        cout << "Copied Array:" << endl;

        for (int i = 0; i < iSize; i++)
        {
            cout << Brr[i] << " ";
        }
    }
};
int main()
{
    int iSize = 0;
    cout << "Enter the number of element in the array\n";
    cin >> iSize;

    MyArray mobj(iSize);

    Demo dobj(iSize);
    // we can also create a dynamic obj
    // Demo *dobj=new Demo(iSize);

    dobj.acceptArray();
    cout << "Original array:" << endl;
    dobj.copyArray();
    return 0;
}