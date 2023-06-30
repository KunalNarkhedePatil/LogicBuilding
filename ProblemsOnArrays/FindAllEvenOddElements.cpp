// print all the even and odd elements in the array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int iSize;
    Demo(int iSize) : MyArray(iSize) // base member initialisation
    {
        this->iSize = iSize;
    }
    void printAllEvenElements()
    {
        for(int i=0;i<iSize;i++)
        {
            if(Arr[i]%2==0)
            {
                cout<<Arr[i]<<" ";
            }
        }
        cout<<endl;
    }
    void printAllOddElements()
    {
        for(int i=0;i<iSize;i++)
        {
            if(Arr[i]%2!=0)
            {
                cout<<Arr[i]<<" ";
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

    cout<<"All Even Elements\n";
    dobj.printAllEvenElements();
    cout<<"All Odd Elements\n";
    dobj.printAllOddElements();

    return 0;
}