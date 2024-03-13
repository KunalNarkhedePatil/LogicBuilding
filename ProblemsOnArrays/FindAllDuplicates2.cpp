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
          int index=Arr[i]%iSize;
          Arr[index]=Arr[index]+iSize;
       }

       for(int i=0;i<iSize;i++)
       {
          if(Arr[i]/iSize>=2)
          {
            cout<<i<<" "<<endl;
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