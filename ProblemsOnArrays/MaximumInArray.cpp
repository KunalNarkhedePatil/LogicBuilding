// print maximum elements in the array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int maximumElements()
    {
        int iMax=Arr[0];

        for(int i=0;i<iSize;i++)
        {
            if(Arr[i]>iMax)
            {
                iMax=Arr[i];
            }
        }
        return iMax;
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
    int iRet = dobj.maximumElements();

    cout << "Sum of all the elements in the array are " << iRet << endl;

    return 0;
}