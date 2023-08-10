#include "matrix1.h"
class Demo : public Matrix
{
public:
    Demo(int iRows, int iCols) : Matrix(iRows, iCols)
    {
    }
    bool checkSymmetricMatrix()
    {
        int iFlag = 0;
        int Matrix2[iRows][iCols];
        for (int row = 0; row < iRows; row++)
        {
            for (int col = 0; col < iCols; col++)
            {
                Matrix2[row][col] = Matrix1[col][row];
                if (Matrix1[row][col] != Matrix2[row][col])
                {
                    iFlag = 1;
                    break;
                }
            }
        }
        if(iFlag==0)
        {
            return true;
        }
        else
        {
            return false;
        }
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

        bool bRet = dobj->checkSymmetricMatrix();

        if (bRet == true)
        {
            cout << "This is Symmetric matrix\n";
            dobj->displayMatrix();
        }
        else
        {
            cout << "This is not an Symmetric matrix\n";
        }
        return 0;
    }