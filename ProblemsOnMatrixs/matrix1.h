#include<iostream>
#define MAX_SIZE 3
using namespace std;

class Matrix
{
   public:
   int iRows;
   int iCols;
   int Matrix1[MAX_SIZE][MAX_SIZE];

   Matrix(int iRows,int iCols)
   {
      this->iRows=iRows;
      this->iCols=iCols;
   }
   //accept the matrix from user
   void acceptMatrix()
   {
      int i=0;
      int j=0;
      //i=row
      //j=column
      cout<<"Enter the elements in the matrix:\n";
      for(int i=0;i<iRows;i++)
      {
        for(int j=0;j<iCols;j++)
        {
            cin>>Matrix1[i][j];
        }
      }
      cout<<endl;
   }
   //display the matrix;
   void displayMatrix()
   {
      int i=0;
      int j=0;
      //i=row
      //j=column
      cout<<"matrix is:\n";
      for(int i=0;i<iRows;i++)
      {
        for(int j=0;j<iCols;j++)
        {
            cout<<Matrix1[i][j]<<" ";
        }
        cout<<endl;
      }
      cout<<endl;
      
   }
};