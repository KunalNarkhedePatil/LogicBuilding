#include "matrix1.h"
class Demo : public Matrix
{
public:
    Demo(int iRows, int iCols) : Matrix(iRows, iCols)
    {
    }
    int determinantOfMatrix()
    {
        /*
        |a b c|
        |d e f|
        |g h i|
        */
        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0;
        int iDeterminant = 0;

        a = Matrix1[0][0];
        b = Matrix1[0][1];
        c = Matrix1[0][2];
        d = Matrix1[1][0];
        e = Matrix1[1][1];
        f = Matrix1[1][2];
        g = Matrix1[2][0];
        h = Matrix1[2][1];
        i = Matrix1[2][2];

        iDeterminant = a * (e * i - f * h) - (b * (d * i - f * g)) - (c * (d * h - e * g));
        
        return iDeterminant;
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
    int iRet = dobj->determinantOfMatrix();

    cout << "Determinant of matrix " << iRet << endl;
    return 0;
}