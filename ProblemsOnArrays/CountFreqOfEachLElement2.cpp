// count freq of each element in array
#include "MyArray.h"
#include<vector>
class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int iSize;
    Demo(int iSize) : MyArray(iSize) //base member initialisation
    {
        this->iSize = iSize;
    }
    void countFreqOfEachElements()
    {
        int visited[iSize];
        for(int i=0;i<iSize;i++)
        {
            visited[i]=0;
        }
        for(int i=0;i<iSize;i++)
        {
            if(visited[i]==1)
            {
                continue;
            }
            else
            {
                int Count=1;
                for(int j=i+1;j<iSize;j++)
                {
                    if(Arr[i]==Arr[j])
                    {
                        visited[j]=true;
                        Count++;
                    }
                }
                cout<<Arr[i]<<":"<<Count<<endl;
            }
        }
    }
};
int main()
{
    int iSize = 0;
    cout << "Enter the number of element in the array\n";
    cin >> iSize;

    Demo dobj(iSize);
    //we can also create a dynamic obj
    //Demo *dobj=new Demo(iSize);


    dobj.acceptArray();
    dobj.countFreqOfEachElements();

    return 0;
}