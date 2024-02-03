#include <iostream>
using namespace std;

int findMissingNumber(int Arr[], int size)
{
    int Sum1 = 0;
    int Sum2 = 0;

    for (int i = 1; i <= size; i++)
    {
        Sum1 = Sum1 + i;
    }
    cout<<"Sum1="<<Sum1<<endl;
    for (int i = 0; i < size; i++)
    {
        Sum2 = Sum2 + Arr[i];
    }
    cout<<"Sum2="<<Sum2<<endl;
    return Sum1 - Sum2;
}
int main()
{
    int size = 0;
    cout << "Enter the number of element in  the array" << endl;
    cin >> size;

    int *Arr = new int[size];

    cout << "Enter the element in the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> Arr[i];
    }

    int iRet = findMissingNumber(Arr, size);

    if (iRet == 0)
    {
        cout << "There is no missing number" << endl;
    }
    else
    {
        cout << "Missing number is " << iRet << endl;
    }

    return 0;
}