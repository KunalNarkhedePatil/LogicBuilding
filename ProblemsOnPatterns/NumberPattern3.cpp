/*
Enter the number of rows
5
Enter the number of columns
5
-------------------------
1 
2 4 
3 6 9 
4 8 12 16 
5 10 15 20 25
--------------------------
*/
#include <iostream>
using namespace std;
class Demo
{
public:
    int iRows;
    int iCols;

    Demo(int iRows, int iCols)
    {
        this->iRows = iRows;
        this->iCols = iCols;
    }
    
    void DisplayPattern()
    {
        //i=row
        //j=col

        for(int i=1;i<=this->iRows;i++)
        {
            int iNo=i;
            for(int j=1;j<=i;j++)
            {
                cout<<iNo<<" ";
                iNo=iNo+i;
            }
            cout<<endl;
        }
    }
};
int main()
{
    int iRows = 0, iCols = 0;
    cout << "Enter the number of rows\n";
    cin >> iRows;

    cout << "Enter the number of columns\n";
    cin >> iCols;

    Demo *dobj = new Demo(iRows, iCols);

    dobj->DisplayPattern();
    return 0;
}