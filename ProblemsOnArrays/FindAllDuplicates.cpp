// print all the duplicates elements in the array
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int iSize;
    Demo(int iSize) : MyArray(iSize) // base member initialisation
    {
        this->iSize = iSize;
    }
    void printUniqueElements()
    {
        int *Freq = new int[iSize];
        for (int i = 0; i < iSize; i++)
        {
            Freq[i] = -1;
        }
        int iCount = 0;
        for (int i = 0; i < iSize; i++)
        {
            iCount = 1;
            for (int j = i + 1; j < iSize; j++)
            {
                if (Arr[i] == Arr[j])
                {
                    iCount++;
                    Freq[j] = 0;
                }
            }
            if (Freq[i] != 0)
            {
                Freq[i]=iCount;
            }
        }

        cout << "Unique elements in array :" << endl;

        for (int i = 0; i < iSize; i++)
        {
            if (Freq[i] == 1)
            {
                cout << Arr[i] << " occurs " << Freq[i] << endl;
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
    // we can also create a dynamic obj
    // Demo *dobj=new Demo(iSize);

    dobj.acceptArray();
    dobj.printUniqueElements();

    return 0;
}