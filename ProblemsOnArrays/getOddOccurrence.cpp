/*
Write a C++ program to find a number that occurs an odd number of times in a given array of positive integers.
In the array, all numbers occur an even number of times.
--------------------------------------------------------
Input:
Enter the number of element in the array:
8
Enter the elements in the array:
5 7 8 8 5 8 7 7
Number which occurs odd number of times: 7
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
    int getOddOccurrence()
    {
        int iCount=0;

        for(int i=0;i<iSize;i++)
        {
            iCount=1;
            for(int j=i+1;j<iSize;j++)
            {
                if(Arr[i]==Arr[j])
                {
                    iCount++;
                }
            }
            if(iCount%2==1)
            {
                return Arr[i];
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
    cout << "Number which occurs odd number of times: " << dobj.getOddOccurrence();
    

    return 0;
}