#include "matrix1.h"
class Demo : public Matrix
{
public:
    Demo(int iRows, int iCols) : Matrix(iRows, iCols)
    {
    }
    void sumOfEachRowCol()
    {
        cout<<"Sum Of Each Row:\n";
        for(int row=0;row<iRows;row++)
        {
            int Sum=0;
            for(int col=0;col<iCols;col++)
            {
                Sum=Sum+Matrix1[row][col];
            }
            cout<<"Sum of "<<row+1<<" row is "<<Sum<<endl;
        }
        cout<<"Sum Of Each column:\n";
        for(int row=0;row<iRows;row++)
        {
            int Sum=0;
            for(int col=0;col<iCols;col++)
            {
                Sum=Sum+Matrix1[col][row];
            }
            cout<<"Sum of "<<row+1<<" col is "<<Sum<<endl;
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
    dobj->displayMatrix();

    dobj->sumOfEachRowCol();

    

    return 0;
}