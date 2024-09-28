/*
TEST CASE:
Input:
Enter the number of element in the array:
5
Enter the elements in the array:
1 2 3 4 5
Before Reverse Array is:
1 2 3 4 5
Enter the value of K
3
Output:
After Reverse Array is:
3 2 1 5 4
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
    void swap(int *iNo1, int *iNo2)
    {
        int iTemp = *iNo1;
        *iNo1 = *iNo2;
        *iNo2 = iTemp;
    }
    void reverseArray(int Arr[],int start,int end)
    {
     

        while (start < end)
        {
            swap(&Arr[start], &Arr[end]);
            start++;
            end--;
        }
    }
    void ReverseTheArrayInK(int K)
    {
        int i=K;
        int j=0;

        while(i<iSize)
        {
            reverseArray(Arr,j,i-1);

            i=i+K;
            j=j+K;
        }
        reverseArray(Arr,j,iSize-1);
    }
};
int main()
{
    int iSize = 0;
    int K=0;
    cout << "Enter the number of element in the array:\n";
    cin >> iSize;

    Demo dobj(iSize);
    // we can also create a dynamic obj
    // Demo *dobj=new Demo(iSize);

    dobj.acceptArray();
    cout << "Before Reverse Array is:" << endl;
    dobj.displayArray();

    cout<<"Enter the value of K"<<endl;
    cin>>K;
    dobj.ReverseTheArrayInK(K);
    cout << "After Reverse Array is:" << endl;
    dobj.displayArray();
    return 0;
}