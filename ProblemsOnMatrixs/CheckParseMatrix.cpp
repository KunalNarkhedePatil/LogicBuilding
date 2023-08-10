#include "matrix1.h"
class Demo : public Matrix
{
public:
    Demo(int iRows, int iCols) : Matrix(iRows, iCols)
    {
    }
    bool checkSparseMatrix()
    {
        int iZero=0;
        int iOther=0;
       for(int row=0;row<iRows;row++)
       {
          for(int col=0;col<iCols;col++)
          {
              if(Matrix1[row][col]==0)
              {
                  iZero++;
              }
              else
              {
                iOther++;
              }
          }
       }
       if(iZero>=iOther)
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
    
    bool bRet=dobj->checkSparseMatrix();

    if(bRet==true)
    {
        cout<<"This is sparse matrix\n";
        dobj->displayMatrix();
    }
    else
    {
        cout<<"This is not an sparse matrix\n";
    }
    return 0;
}