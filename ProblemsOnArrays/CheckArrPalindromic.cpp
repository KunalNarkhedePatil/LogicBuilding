// print all the duplicates elements in the array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int iSize;
    Demo(int iSize) : MyArray(iSize) // base member initialisation
    {
        this->iSize = iSize;
    }
    bool checkArrayPalindromic()
    {
        int iStart=0;
        int iEnd=iSize-1;
        int iFlag=0;
        while(iStart<iEnd)
        {
            if(Arr[iStart]!=Arr[iEnd])
            {
                iFlag=1;
                break;
            }
            iStart++;
            iEnd--;
        }
        if(iFlag==0)
        {
            return true;
        }
        else
        {
            return false;
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
    cout<<"Original Array:\n";
    dobj.displayArray();
    cout<<"--------------------------------\n";

    bool bRet=dobj.checkArrayPalindromic();

    if(bRet==true)
    {
        cout<<"Array is palindromic\n";
    }
    else
    {
        cout<<"Array is not palindromic\n";
    }

    return 0;
}