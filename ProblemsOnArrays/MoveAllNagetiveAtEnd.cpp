/*
Move all negative elements of an array of 
integers to the end of the array without changing
the order of positive element and negative element
----------------------------------------------
Input:
Enter the number of element in the array:
7
Enter the elements in the array:
-1 2 3 -4 5 -6 7
Output:
After Arrange
2 3 5 7 -1 -4 -6
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
    void moveAllNagetiveAtEnd()
    {
        int positive[iSize];
        int negative[iSize];
        int j=0;
        int k=0;
        for(int i=0;i<iSize;i++)
        {
            if(Arr[i]<0)
            {
                negative[j]=Arr[i];
                j++;
            }
            else
            {
                positive[k]=Arr[i];
                k++;
            }
        }
        for(int i=0;i<k;i++)
        {
            Arr[i]=positive[i];
        }
        j=0;
        for(int i=k;i<iSize;i++)
        {
            Arr[i]=negative[j];
            j++;
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
    cout<<"After Arrange:\n";
    dobj.moveAllNagetiveAtEnd();

    for(int i=0;i<iSize;i++)
    {
        cout<<dobj.Arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}