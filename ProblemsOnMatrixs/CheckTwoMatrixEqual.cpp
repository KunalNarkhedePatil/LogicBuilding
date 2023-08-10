#include "matrix.h"
class Demo : public Matrix
{
public:
    Demo(int iRows, int iCols) : Matrix(iRows, iCols)
    {
    }
    bool checkTwoMatrixEqual()
    {
        int iFlag=0;

        for(int row=0;row<iRows;row++) 
        {
            for(int col=0;col<iCols;col++)
            {
                if(Matrix1[row][col]!=Matrix2[row][col])
                {
                    iFlag=1;
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
    // display the matrix
    //dobj->displayMatrix();

     bool bRet=dobj->checkTwoMatrixEqual();

    if(bRet==true)
    {
        cout<<"Both matrix are equal\n";
        dobj->displayMatrix();
    }
    else
    {
        cout<<"Both matrix are not equal\n";
    }
}
