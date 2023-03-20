#include <iostream>
using namespace std;
#include <string>

int printMatrix(int nr, int nc, int m[][100]);
int Input_Matrix(int & n_rows,int matrix[][100]);
int* m_subtract(int r1[],int r2[],int nr);
int m_multiply(int r[],int s,int nr);
int GJ_Elimnation(int m[][100],int nr);
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
   GJ_Elimnation(matrix,n_rows);
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
int m_multiply(int r[],int s,int nr)
{   int multiplyanswer[nr];
    int i;
    for ( i=0;i<nr;i++)
{  
   multiplyanswer[i]=s*r[i];
   
}
  return multiplyanswer[i];
  
}
int  *m_subtract(int r1[],int r2[],int nr)
{ 
   int i;
    for ( i=0;i<nr;i++)
{static int s2[100];
 s2[i]=r1[i]-r2[i];
 return s2;  
}
 
}
int GJ_Elimnation(int m[][100],int nr)
{
for (int i=0;i<nr;i++)
{

  for (int j=0;j < nr ;j++)
  { 
    if (i!=j)
    {  int a;
       int b;
       a= m_multiply( m[i],m[i][j]/m[i][i],nr);
       b=m_subtract(m[j],a,nr);
    }
  }
}

}
  


