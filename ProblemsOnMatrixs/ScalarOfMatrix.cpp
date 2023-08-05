#include "matrix1.h"
class Demo : public Matrix
{
public:
    Demo(int iRows, int iCols) : Matrix(iRows, iCols)
    {
    }
    void scalarMatrix()
    {
        int iNum=0;
        cout<<"Enter any number to multiply with matrix\n";
        cin>>iNum;
        int AnsMatrix[iRows][iCols];
        for(int i=0;i<iRows;i++)
        {
            for(int j=0;j<iCols;j++)
            {
                AnsMatrix[i][j]=iNum*Matrix1[i][j];
            }
        }
        for(int i=0;i<iRows;i++)
        {
            for(int j=0;j<iCols;j++)
            {
                cout<<AnsMatrix[i][j]<<" ";
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
    cout<<"Before Scalar Matrix:\n";
    dobj->displayMatrix();
    cout<<"After Scalar Matrix:\n";
    dobj->scalarMatrix();
    return 0;
}