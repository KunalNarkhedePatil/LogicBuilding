#include "matrix1.h"
class Demo : public Matrix
{
public:
    Demo(int iRows, int iCols) : Matrix(iRows, iCols)
    {
    }
    int sumOfOppositeDiagonalElements()
    {
        // i=row;
        // j=col
        int iSum = 0;
        for (int i = 0; i < iRows; i++)
        {
            for (int j = 0; j < iCols; j++)
            {
                if (i + j == iRows-1)
                {
                    iSum = iSum + Matrix1[i][j];
                }
            }
        }
        return iSum;
    }
};
int main()
{
    int iRows = 0;
    int iCols = 0;
    cout << "Enter the number of rows:\n";
    cin >> iRows;
    cout << "Enter the number of columns:\n";
    cin >> iCols;
    Demo *dobj = new Demo(iRows, iCols);

    // accept the matrix
    dobj->acceptMatrix();
    // display the matrix
    dobj->displayMatrix();

    cout << "Sum of opposite diagonal elements are " << dobj->sumOfOppositeDiagonalElements() << endl;

    return 0;
}