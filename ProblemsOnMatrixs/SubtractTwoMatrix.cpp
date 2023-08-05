#include "matrix.h"
class Demo : public Matrix
{
public:
    Demo(int iRows, int iCols) : Matrix(iRows, iCols)
    {
    }
    void subTwoMatrix()
    {
        int Matrix3[3][3];
        for(int i=0;i<iRows;i++)
        {
            for(int j=0;j<iCols;j++)
            {
                Matrix3[i][j]=Matrix1[i][j]-Matrix2[i][j];
            }
        }
        cout<<"After Addition matrix is:\n";
        for(int i=0;i<iRows;i++)
        {
            for(int j=0;j<iCols;j++)
            {
                cout<<Matrix3[i][j]<<" ";
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

    dobj->subTwoMatrix();
}
