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
    int findAllDuplicatesElements()
    {
        for(int i=0;i<iSize;i++)
        {
            for(int j=i+1;j<iSize;j++)
            {
                if(Arr[i]==Arr[j])
                {
                    cout<<Arr[i]<<" ";
                }
            }
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
    cout<<"Duplicates elements are:\n";
    dobj.findAllDuplicatesElements();

    return 0;
}