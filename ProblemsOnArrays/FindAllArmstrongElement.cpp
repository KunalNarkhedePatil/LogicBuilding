// print all the armstrong elements in the array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int iSize;
    Demo(int iSize) : MyArray(iSize) // base member initialisation
    {
        this->iSize = iSize;
    }
    int countDigit(int iNo)
    {
        int iCnt=0;
        while(iNo!=0)
        {
            iCnt++;
            iNo=iNo/10;
        }
        return iCnt;
    }
    bool checkArmstrong(int iNo)
    {
        int iCnt=countDigit(iNo);

        int iTemp=iNo;
        int iSum=0;
        while(iTemp!=0)
        {
            int iDigit=iTemp%10;
            int iMult=1;
            for(int i=1;i<=iCnt;i++)
            {
               iMult=iMult*iDigit;
            }
            iTemp=iTemp/10;
            iSum=iSum+iMult;
        }
        if(iSum==iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void printAllArmstrongElements()
    {
        for(int i=0;i<iSize;i++)
        {
            if(checkArmstrong(Arr[i]))
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

    cout<<"Armstrong elements are:\n";
    dobj.printAllArmstrongElements();
    return 0;
}