#include "MyArray.h"
int main()
{
    int iSize=0;
    cout<<"Enter the number of element in the array\n"   ;
    cin>>iSize;

    MyArray mobj(iSize);

    mobj.acceptArray();
    mobj.displayArray();

    return 0;
}