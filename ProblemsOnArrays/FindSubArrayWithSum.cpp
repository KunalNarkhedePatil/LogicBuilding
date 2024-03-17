#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
int iSize;
    Demo(int iSize):MyArray(iSize)// base member initialisation
    {
        this->iSize=iSize;
    }
   void findSubArrayWithSum(int Sum)
   {
      for(int i=0;i<iSize;i++)
      {
        int iCurrSum=Arr[i];
        if(iCurrSum==Sum)
        {
            cout<<"Sum found at indexes "<<i<<endl;
        }
        else
        {
            for(int j=i+1;j<iSize;j++)
            {
                iCurrSum=iCurrSum+Arr[j];

                if(iCurrSum==Sum)
                {
                    cout<<"Sum found bwtween indexes "<<i<<" and "<<j<<endl;
                    return;
                }
            }
        }
      }
   }
};
int main()
{
    int iSize = 0,iSum=0;
    cout << "Enter the number of element in the array\n";
    cin >> iSize;

    MyArray mobj(iSize);

    Demo dobj(iSize);
    //we can also create a dynamic obj
    //Demo *dobj=new Demo(iSize);

    dobj.acceptArray();

    cout<<"Enter the sum"<<endl;
    cin>>iSum;
    dobj.findSubArrayWithSum(iSum);

    return 0;
}