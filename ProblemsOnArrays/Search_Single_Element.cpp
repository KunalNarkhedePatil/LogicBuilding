/*
Write a C++ program to find the element that
appears once in an array of integers and every other element appears twice.
*/
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int iSize;
    Demo(int iSize) : MyArray(iSize) // base member initialisation
    {
        this->iSize = iSize;
    }
    int Search_Single_Element()
    {
        int Result=Arr[0];
        for(int i=0;i<iSize;i++)
        {
            Result=(Result ^ Arr[i]);
        }
        return Result;
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

    cout <<"Single element: " << dobj.Search_Single_Element();
    

    return 0;
}