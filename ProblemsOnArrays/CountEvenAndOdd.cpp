// count even odd elements in the array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int countEvenElements()
    {
        int iEvenCnt=0;

        for(int i=0;i<iSize;i++)
        {
            if(Arr[i]%2==0)
            {
                iEvenCnt++;
            }
        }
        return iEvenCnt;
    }
    int countOddElements()
    {
        
        int iOddCnt=0;

        for(int i=0;i<iSize;i++)
        {
            if(Arr[i]%2!=0)
            {
                iOddCnt++;
            }
        }
        return iOddCnt;
    }
};
int main()
{
    int iSize = 0;
    cout << "Enter the number of element in the array\n";
    cin >> iSize;

    MyArray mobj(iSize);

    Demo dobj;

    dobj.acceptArray();
    
    cout<<"count of even elements are "<<dobj.countEvenElements()<<endl;
    cout<<"count of odd elements are "<<dobj.countOddElements()<<endl;

    return 0;
}