#include <iostream>
using namespace std;
#include <string>

int printMatrix(int nr, int nc, int m[][100]);
int Input_Matrix(int & n_rows,int matrix[][100]);
int main () 
{

  cout << "Enter the no of rows";
  int matrix[100][100],i,j,n_rows;
  cin >>n_rows;
  Input_Matrix( n_rows, matrix); 
  return n_rows;
   
}


  

int Input_Matrix(int & n_rows,int matrix[][100])
{
  for (int i=0;i<n_rows;++i)
  {
     for (int j=0;j<n_rows;++j)
     {
        cout <<"Enter the element"<<i<<j;
        cin >> matrix[i][j];
        
     }
 
   }
   printMatrix(n_rows,n_rows, matrix);
   return 0;
}
int printMatrix(int nr, int nc, int m[][100])
{
      for (int i=0;i<nr;++i)
   {
     for (int j=0;j<nc;++j)
     {
        cout << m[i][j]<<"   ";
         
      }
      cout <<"\n";   
   }
   return 0;

}