#include <iostream>
#include<stdlib.h>
using namespace std;
void Display(int *Arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}
void printAllNegative(int *Arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] < 0)
        {
            cout << Arr[i] << " ";
        }
    }
    cout << endl;
}
int sumOfAllElement(int *Arr, int size)
{
    int Sum = 0;
    for (int i = 0; i < size; i++)
    {
        Sum = Sum + Arr[i];
    }
    return Sum;
}
int MaxInArray(int *Arr, int size)
{
    int Max = Arr[0];

    for (int i = 0; i < size; i++)
    {
        if (Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
}
void SecondMaxinArray(int *Arr, int size)
{
    int max = MaxInArray(Arr, size);
    cout << max << endl;
    int secMax = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] > secMax && Arr[i] < max)
        {
            secMax = Arr[i];
        }
    }
    cout << "Second Maximum number is " << secMax << endl;
}
void countEvenOdd(int *Arr, int size)
{
    int CntEven = 0;
    int CntOdd = 0;

    for (int i = 0; i < size; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            CntEven++;
        }
        else
        {
            CntOdd++;
        }
    }
    cout << "Number of Even Element " << CntEven << endl;
    cout << "Number of Odd Element " << CntOdd << endl;
}
void copyOneToSec(int *Arr, int *Brr, int size)
{
    for (int i = 0; i < size; i++)
    {
        Brr[i] = Arr[i];
    }
}
void insertNewElement(int *Arr, int *size, int No, int pos)
{
    int n = *size;
    Arr = (int *)realloc(Arr, sizeof(int) * (n + 1));
    cout<<sizeof(Arr)<<endl;
    for (int i = n; i >= 0; i--)
    {
        if (i == pos)
        {
            Arr[i] = No;
            break;
        }
        Arr[i] = Arr[i - 1];
    }
    *size = *size + 1;
}
int main()
{
    int size = 0;
    cout << "Enter the number of element in the array" << endl;
    cin >> size;

    cout << "Enter the element in the array" << endl;

    int *Arr = new int[size];
    int *Brr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> Arr[i];
    }
    Display(Arr, size);
    // printAllNegative(Arr,size);
    // cout<<"Sum of all element in the array"<<sumOfAllElement(Arr,size)<<endl;
    // MaxInArray(Arr,size);
    // SecondMaxinArray(Arr,size);
    // countEvenOdd(Arr,size);
    // copyOneToSec(Arr,Brr,size);
    // Display(Brr,size);
    insertNewElement(Arr, &size, 5, 3);
    cout<<size<<endl;
    Display(Arr, size);
    return 0;
}