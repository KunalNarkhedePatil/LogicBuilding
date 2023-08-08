#include "matrix1.h"
class Demo : public Matrix
{
public:
    Demo(int iRows, int iCols) : Matrix(iRows, iCols)
    {
    }
    void transposeOfMatrix()
    {
       for(int row=0;row<iRows;row++)
       {
          for(int col=0;col<iRows;col++)
          {
              cout<<Matrix1[col][row]<<" ";
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
    dobj->transposeOfMatrix();
    return 0;
}