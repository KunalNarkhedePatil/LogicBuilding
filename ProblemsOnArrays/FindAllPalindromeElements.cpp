// print all the palindrome elements in the array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int iSize;
    Demo(int iSize) : MyArray(iSize) // base member initialisation
    {
        this->iSize = iSize;
    }
    int reverseNo(int iNo)
    {
        int iRev = 0;

        while (iNo != 0)
        {
            iRev = iRev * 10 + iNo % 10;
            iNo = iNo / 10;
        }
        return iRev;
    }
    bool checkPalindrome(int iNo)
    {
        int iRet = reverseNo(iNo);
        if (iRet == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void printAllPalindromeElements()
    {
        for(int i=0;i<iSize;i++)
        {
            if(checkPalindrome(Arr[i]))
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

    cout<<"Palindrome elements are:\n";
    dobj.printAllPalindromeElements();
    return 0;
}