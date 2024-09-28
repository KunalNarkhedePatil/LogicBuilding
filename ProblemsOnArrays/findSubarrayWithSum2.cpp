#include "MyArray.h"
#include <vector>
class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int iSize;
    Demo(int iSize) : MyArray(iSize) // base member initialisation
    {
        this->iSize = iSize;
    }
    bool findSubArrayWithProduct(vector<int> &result, int Sum, int k)
    {
        for (int i = 0; i < iSize - k + 1; i++)
        {
            int CurrSum = 0;

            for (int j = 0; j < k; j++)
            {
                CurrSum = CurrSum + Arr[i + j];

                if (CurrSum = Sum)
                {
                    for (int m = i; m < i + k; m++)
                    {
                        result.push_back(Arr[m]);
                    }
                    return true;
                }
            }
        }
        return false;
    }
};
int main()
{
    int iSize = 0, iSum = 0, size = 0;
    cout << "Enter the number of element in the array\n";
    cin >> iSize;

    MyArray mobj(iSize);

    Demo dobj(iSize);
    // we can also create a dynamic obj
    // Demo *dobj=new Demo(iSize);

    dobj.acceptArray();
    vector<int> result;

    cout << "Enter the Sum" << endl;
    cin >> iSum;

    cout << "Enter the size" << endl;
    cin >> size;

    bool bRet = dobj.findSubArrayWithProduct(result, iSum, size);
    if (bRet == true)
    {
        cout << "Subarray of size " << size << " with sum " << iSum << " found: " << endl;
        for (int no : result)
        {
            cout << no << " ";
        }
    }
    {
        cout << "No subarray of size " << size << " with sum " << iSum << " found." << endl;
    }

    return 0;
}