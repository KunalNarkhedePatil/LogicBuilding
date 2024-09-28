#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
int iSize;
    Demo(int iSize):MyArray(iSize)// base member initialisation
    {
        this->iSize=iSize;
    }
   bool findSubArrayWithProduct(int TargetProduct)
   {
      for(int i=0;i<iSize;i++)
      {
        int Procuct=1;
        for(int j=i;j<iSize;j++)
        {
            Procuct=Procuct*Arr[j];
            if(Procuct==TargetProduct)
            {
                return true;
            }

            if(Procuct>TargetProduct)
            {
                break;
            }
        }
      }
      return false;
   }
};
int main()
{
    int iSize = 0,iProduct=0;
    cout << "Enter the number of element in the array\n";
    cin >> iSize;

    MyArray mobj(iSize);

    Demo dobj(iSize);
    //we can also create a dynamic obj
    //Demo *dobj=new Demo(iSize);

    dobj.acceptArray();

    cout<<"Enter the product"<<endl;
    cin>>iProduct;
    bool bRet=dobj.findSubArrayWithProduct(iProduct);
    if(bRet==true)
    {
        cout<<"Subarray with product " << iProduct << " exists." << endl;
    }
    {
        cout<<"Subarray with product " << iProduct << " not exists." << endl;
    }

    return 0;
}