#include<iostream>
using namespace std;
class Demo
{
    public:

    void sumOfNaturalNo(int iNo,int i)
    {
        static int iSum=0;
         if(i==iNo)
         {
             iSum=iSum+i;
             cout<<iSum<<endl;
             return;
         }
         iSum=iSum+i;
         sumOfNaturalNo(iNo,i+1);
    }
};
int main()
{
    Demo dobj;

    dobj.sumOfNaturalNo(5,1);

    return 0;
}