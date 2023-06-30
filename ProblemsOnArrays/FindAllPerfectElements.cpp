// print all the perfect elements in the array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int iSize;
    Demo(int iSize) : MyArray(iSize) // base member initialisation
    {
        this->iSize = iSize;
    }
     int findSumOfFactors(int iNo)
    {
        int iSum = 0;
        for (int i = 1; i <= iNo / 2; i++)
        {
            if (iNo % i == 0)
            {
                iSum = iSum + i;
            }
        }
        return iSum;
    }
    bool checkPerfect(int iNo)
    {
        int iRet = findSumOfFactors(iNo);

        if (iRet == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void printAllPerfectElements()
    {
        for(int i=0;i<iSize;i++)
        {
            if(checkPerfect(Arr[i]))
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

    cout<<"Perfect elements are:\n";
    dobj.printAllPerfectElements();
    return 0;
}