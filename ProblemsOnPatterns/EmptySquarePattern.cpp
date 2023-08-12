/*
Enter the number of rows
5
Enter the number of columns
5
-------------------------
* * * * *
*       *
*       *
*       *
* * * * *
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
        // i=row
        // j=col
        // k=col

        for (int i = 1; i <= this->iRows; i++)
        {
            for (int j = 1; j <= this->iCols; j++)
            {
                if (i == 1 || j == 1 || i == iRows || j == iCols)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
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