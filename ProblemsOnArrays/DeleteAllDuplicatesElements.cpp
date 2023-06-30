// print all the duplicates elements in the array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int size;
    Demo(int size) : MyArray(size) // base member initialisation
    {
        this->size = size;
    } 
    void deleteElement(int iPos)
    {
        if (iPos < 0 || iPos > iSize)
        {
            cout << "Invalid Position\n";
            return;
        }
        this->iSize=iSize-1;
        for(int i=iPos;i<iSize;i++)
        {
            Arr[i]=Arr[i+1];
        }
        //here we deallocate the delete memory
        Arr = (int *)realloc(Arr, sizeof(int) * (iSize)); // here we use the relloc function for reallocated the memory
    }
    void findAllDuplicatesElements()
    {
        for(int i=0;i<iSize;i++)
        {
            for(int j=i+1;j<iSize;j++)
            {
                if(Arr[i]==Arr[j])
                {
                    cout<<Arr[i]<<" ";
                    int iPos=j;
                    deleteElement(iPos); 
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
    dobj.displayArray();
    cout<<"Duplicates elements are:\n";
    dobj.findAllDuplicatesElements();
    cout<<"After Deleting elements array is "<<endl;
    dobj.displayArray();

    return 0;
}