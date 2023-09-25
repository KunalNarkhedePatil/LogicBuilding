#include <iostream>
using namespace std;
class Demo
{
public:
    int *Arr;
    int iSize;

    Demo(int iSize = 5)
    {
        this->iSize = iSize;
        this->Arr = new int[iSize];
    }
    void Accept()
    {
        cout << "Enter the number of elemets:\n";
        for (int i = 0; i < iSize; i++)
        {
            cin >> Arr[i];
        }
    }
    int findSmallestInArray(int i)
    {
        static int iMin=Arr[0];
        if (i == iSize)
        {
            return iMin;
        }
        if(Arr[i]<iMin)
        {
            iMin=Arr[i];
        }
        findSmallestInArray(i + 1);
    }
};
int main()
{
    int iSize = 0;

    cout << "Enter the size of array\n";
    cin >> iSize;

    Demo *dobj = new Demo(iSize);

    dobj->Accept();
    
    int iRet=dobj->findSmallestInArray(0);
    cout << "Smallest element is:"<<iRet<<endl;
    return 0;
}