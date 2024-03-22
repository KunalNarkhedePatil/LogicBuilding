/*
Enter the number of rows
5
Enter the number of columns
5
        5
      * 4 *
    * * 3 * *
  * * * 2 * * * 
* * * * 1 * * * * 
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
        int m = iRows;
        for (int i = 1; i <= iRows; i++)
        {
            for (int j = 1; j <= iCols; j++)
            {
                if (j == iRows)
                {
                    cout << m << " ";
                    m--;
                    continue;
                }
                if (i + j >= 6)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            for (int k = 2; k <= i; k++)
            {
                cout << "* ";
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