#include "matrix1.h"
class Demo : public Matrix
{
public:
    Demo(int iRows, int iCols) : Matrix(iRows, iCols)
    {
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
    return 0;
}