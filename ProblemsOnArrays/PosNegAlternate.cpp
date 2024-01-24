/* Rearrange the Positive Negative Element Alternate
--------------------------------------------------
Input:
Enter the number of element in the array
7
Enter the elements in the array:
-2 0 5 3 -3 -5 5
Output:
Before Alternate rearrange
-2 0 5 3 -3 -5 5
After Alternate rearrange
0 -2 5 -3 3 -5 5
*/
#include "MyArray.h"

class Demo : public MyArray // here we inherite the MyArray class from MyArray.h header file
{
public:
    int iSize;
    Demo(int iSize) : MyArray(iSize) // base member initialisation
    {
        this->iSize = iSize;
    }

    void postiveNegativeAlternate()
    {
        int NegArr[iSize];
        int PosArr[iSize];
        int Positive[iSize];
        int NegCnt = 0;
        int PosCnt = 0;

        for (int i = 0; i < iSize; i++)
        {
            if (Arr[i] < 0)
            {
                NegArr[NegCnt] = Arr[i];
                NegCnt++;
            }
            else
            {
                PosArr[PosCnt] = Arr[i];
                PosCnt++;
            }
        }
        int j = 0;
        int k = 0;
        int i = 0;
        for (i = 0; i < iSize; i++)
        {
            if (i % 2 == 0)
            {
                if (j != PosCnt)
                {
                    Arr[i] = PosArr[j];
                    j++;
                }
                else
                {
                    for (int l = i; l < iSize; l++)
                    {
                        Arr[l] = NegArr[k];
                        k++;
                    }
                    break;
                }
            }
            else
            {
                if (k != NegCnt)
                {
                    Arr[i] = NegArr[k];
                    k++;
                }
                else
                {
                    for (int l = i; l < iSize; l++)
                    {
                        Arr[l] = PosArr[j];
                        j++;
                    }
                    break;
                }
            }
        }
    }
};
int main()
{
    int iSize = 0;
    cout << "Enter the number of element in the array\n";
    cin >> iSize;

    MyArray mobj(iSize);

    Demo dobj(iSize);
    // we can also create a dynamic obj
    // Demo *dobj=new Demo(iSize);

    dobj.acceptArray();

    cout<<"Before Alternate rearrange"<<endl;

    dobj.displayArray();

    dobj.postiveNegativeAlternate();
    
    cout<<"After Alternate rearrange"<<endl;
    dobj.displayArray();

    return 0;
}