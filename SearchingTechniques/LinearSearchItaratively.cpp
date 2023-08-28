/*
CASE1:
Enter the size of array
5
Enter the elements in the array:
1 2 3 4 5
Original Array
1 2 3 4 5 
Enter the Number to search
4
4 is present at 3 index
------------------------------------------
CASE2:
Enter the size of array
5
Enter the elements in the array:
1 2 3 4 5 
Original Array
1 2 3 4 5 
Enter the Number to search
7
7 is not present in the array
*/
#include"array.h"

class Demo:public MyArray
{
    public:
    int iSize;

    Demo(int iSize):MyArray(iSize)
    {
        this->iSize=iSize;
    }
    int linearSearchAlgorithm(int Key)
    {
        int iFlag=-1;

        for(int i=0;i<iSize;i++)
        {
            if(Arr[i]==Key)
            {
                iFlag=i;
                break;
            }
        }
        if(iFlag==-1)
        {
            return iFlag;
        }
        else
        {
            return iFlag; 
        }
    }
};
int main()
{
    int iSize=0,iNo=0,iRet=0;

    cout<<"Enter the size of array\n";
    cin>>iSize;

    if(iSize<0)
    {
        iSize=-iSize;
    }

    Demo *dobj=new Demo(iSize);
    dobj->acceptArray();

    cout<<"Original Array\n";
    dobj->displayArray();

    cout<<"Enter the Number to search\n";
    cin>>iNo;

    iRet=dobj->linearSearchAlgorithm(iNo);

    if(iRet==-1)
    {
        cout<<iNo<<" is not present in the array\n";
    }
    else
    {
        cout<<iNo<<" is present at "<<iRet<<" index\n";
    }

    return 0;
}