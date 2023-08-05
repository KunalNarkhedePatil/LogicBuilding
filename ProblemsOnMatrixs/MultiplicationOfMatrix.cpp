#include "matrix.h"
class Demo : public Matrix
{
public:
    Demo(int iRows, int iCols) : Matrix(iRows, iCols)
    {
    }
    void multiplyTwoMatrix()
    {
        int iSum=0;
        int Matrix3[iRows][iCols];
        for(int row=0;row<iRows;row++)
        {
            for(int col=0;col<iCols;col++)
            {
                iSum=0;
                for(int i=0;i<iRows;i++)
                {
                    iSum=iSum+Matrix1[row][i]*Matrix2[i][col];
                }
                Matrix3[row][col]=iSum;
            }
        }
        for(int row=0;row<iRows;row++)
        {
            for(int col=0;col<iCols;col++)
            {
                cout<<Matrix3[row][col]<<" ";
            }
            cout<<endl;
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

    dobj->multiplyTwoMatrix();
}
