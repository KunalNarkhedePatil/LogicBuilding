#include "matrix1.h"
class Demo : public Matrix
{
public:
    Demo(int iRows, int iCols) : Matrix(iRows, iCols)
    {
    }
    bool checkIdentityMatrix()
    {
        int iFlag = 0;
        for (int row = 0; row < iRows; row++)
        {
            for (int col = 0; col < iRows; col++)
            {
                if (row == col && Matrix1[row][col] != 1)
                {
                    iFlag = 1;
                    break;
                }
                if (row > col && Matrix1[row][col] != 0)
                {
                    iFlag = 1;
                    break;
                }
                else if (row < col && Matrix1[row][col] != 0)
                {
                    iFlag = 1;
                    break;
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
    
    bool bRet=dobj->checkIdentityMatrix();

    if(bRet==true)
    {
        cout<<"This is identity matrix\n";
        dobj->displayMatrix();
    }
    else
    {
        cout<<"This is not an identity matrix\n";
    }
    return 0;
}