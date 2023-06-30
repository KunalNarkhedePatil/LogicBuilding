// delete the element in the array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int size;
    Demo(int size) : MyArray(size) // base member initialisation
    {
        //cout<<"size:"<<size<<endl;
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
        for(int i=iPos-1;i<iSize;i++)
        {
            Arr[i]=Arr[i+1];
        }
        //here we deallocate the delete memory
        Arr = (int *)realloc(Arr, sizeof(int) * (iSize)); // here we use the relloc function for reallocated the memory
        //cout<<"Size of Arr1:"<<(Arr+iSize-Arr)*sizeof(int)<<endl;

        this->Arr = Arr;
        cout << "After Deleting the element array is " << endl;
    }
};
int main()
{
    int iSize = 0;
    int iPos = 0;
    cout << "Enter the number of element in the array\n";
    cin >> iSize;

    Demo dobj(iSize);
    // we can also create a dynamic obj
    // Demo *dobj=new Demo(iSize);
    dobj.acceptArray();
    
    cout << "Enter the position to insert\n";
    cin >> iPos;
    dobj.displayArray();
    dobj.deleteElement(iPos);
    dobj.displayArray();

    return 0;
}