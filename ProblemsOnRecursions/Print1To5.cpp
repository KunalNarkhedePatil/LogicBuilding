#include<iostream>
using namespace std;
class Demo
{
    public:

    void print1To5(int iNo)
    {
        if(iNo==6)
        {
            return;
        }
        cout<<iNo<<" ";
        print1To5(iNo+1);
    }
};
int main()
{
   Demo dobj;
   dobj.print1To5(1);
}