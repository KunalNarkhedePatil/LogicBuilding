/*
CASE1:
Input:
Enter the number of elements in the array
6
Enter the element in the array
2 3 1 4 5 6
Ouput:
Before Sort array look likes:2 3 1 4 5 6
After Sort array look likes:1 2 3 4 5 6
---------------------------------------------
CASE2:
in this below example we convert the -ve element into +ve 
and then sort.
Input:
Enter the number of elements in the array
7
Enter the element in the array
-4 5 6 -2 5 1 7
Output:
Before Sort array look likes:4 5 6 2 5 1 7
After Sort array look likes:1 2 4 5 5 6 7
*/
#include<iostream>
using namespace std;

class Demo
{
    private:
    int size_of_array;
    int *iArr;
    public:

    Demo(int size_of_array)
    {
        this->size_of_array=size_of_array;
        this->iArr=new int[size_of_array];
    }
    void accept_The_Array()
    {
        cout<<"Enter the element in the array"<<endl;
        for(int i=0;i<size_of_array;i++)
        {
            cin>>this->iArr[i];
            if(this->iArr[i]<0)
            {
                this->iArr[i]=-this->iArr[i];
            }
        }
    }
    void display_The_Array()
    {
        for(int i=0;i<size_of_array;i++)
        {
            cout<<iArr[i]<<" ";
        }
        cout<<endl;
    }
    void swap(int *ptr1,int *ptr2)
    {
        int iTemp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=iTemp;
    }
    void bubble_Sort_algorithm()
    {
        bool swapped=false;
        for(int i=0;i<size_of_array-1;i++)
        {
            for(int j=0;j<size_of_array-i-1;j++)
            {
                if(iArr[j]>iArr[j+1])
                {
                    swap(&iArr[j],&iArr[j+1]);
                    swapped=true;
                }
            }
            //if no two element were swapped 
            //by inner loop,then break
            if(swapped==false)
            {
                break;
            }
        }
    }
};
int main()
{
    int size_of_array=0;
    cout<<"Enter the number of elements in the array"<<endl;
    cin>>size_of_array;

    Demo *obj=new Demo(size_of_array);

    obj->accept_The_Array();
    cout<<"Before Sort array look likes:";
    obj->display_The_Array();
    obj->bubble_Sort_algorithm();
    cout<<"After Sort array look likes:";
    obj->display_The_Array();
    return 0;
}
/*
Time and space complexity for bubble sort algorithm

Worst Case Time Complexity[Big-O]:  O(n2)
Best Case Time Complexity[Big-omega]:  O(n)
Average Case Time Complexity[Big-theta]:  O(n2)
Space Complexity : O(1)
*/
