#include "matrix1.h"
class Demo : public Matrix
{
public:
    Demo(int iRows, int iCols) : Matrix(iRows, iCols)
    {
    }
    bool checkLowerTriangular()
    {
        int iFlag=0;
        for(int i=0;i<iRows;i++)
        {
            for(int j=0;j<iCols;j++)
            {
                if(i<j && Matrix1[i][j]!=0)
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
    

    if(dobj->checkLowerTriangular())
    {
        cout<<"This is lower triangular matrix"<<endl;;
        dobj->displayMatrix();
    }
    else
    {
        cout<<"This is not an lower triangular matrix\n";
    }
    
    return 0;
}