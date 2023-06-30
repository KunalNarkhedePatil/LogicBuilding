// merge two array into third array
#include <iostream>
using namespace std;

class Demo
{
public:
    int iSize1;
    int iSize2;
    int iSize3;
    int *Arr;
    int *Brr;
    int *Crr;
    Demo(int iSize1, int iSize2)
    {
        // initialise the characterstics
        this->iSize1 = iSize1;
        this->iSize2 = iSize2;
        this->iSize3 = this->iSize1 + this->iSize2;

        // Allocate the resources
        Arr = new int[iSize1];
        Brr = new int[iSize2];
        Crr = new int[iSize3];
    }
    void acceptArray(int InArr[], int iSize)
    {
        for (int i = 0; i < iSize; i++)
        {
            cin >> InArr[i];
        }
    }
    void displayArray(int OpArr[], int iSize)
    {

        for (int i = 0; i < iSize; i++)
        {
            cout << OpArr[i] << " ";
        }
        cout << endl;
    }
    void mergeArray()
    {
        for (int i = 0; i < iSize1; i++)
        {
            Crr[i] = Arr[i];
        }
        for (int i = iSize1, j = 0; i < iSize3; i++, j++)
        {
            Crr[i] = Brr[j];
        }
    }
};
int main()
{
    int iSize1 = 0;
    int iSize2 = 0;

    cout << "Enter the size of first and second array are:\n";
    cin >> iSize1 >> iSize2;

    Demo dobj(iSize1, iSize2);
    // we can also create a dynamic obj
    // Demo *dobj=new Demo(iSize);
    cout << "Enter the elements in the first array:\n";
    dobj.acceptArray(dobj.Arr, iSize1);
    cout << "Enter the elements in the second array:\n";
    dobj.acceptArray(dobj.Brr, iSize2);

    dobj.mergeArray();
    cout << "After Merging:\n";
    dobj.displayArray(dobj.Crr, dobj.iSize3);

    return 0;
}