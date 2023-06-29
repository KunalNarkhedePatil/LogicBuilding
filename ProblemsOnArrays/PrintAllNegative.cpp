// print all the negative elements in the array
#include "MyArray.h"

class Demo : public MyArray  //here we inherite the MyArray class from MyArray.h header file
{
public:
    void printAllNegativeElements()
    {
        cout << "Negative elements are\n";

        for (int i = 0; i < iSize; i++)
        {
            if (Arr[i] < 0)
            {
                cout << Arr[i] << " ";
            }
        }
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
    dobj.printAllNegativeElements();

    return 0;
}