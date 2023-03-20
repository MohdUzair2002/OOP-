#include"bits\stdc++.h"
#include "Matrix.cpp"
class Matrix2DArray :public Matrix
{   int height1;
    int width1;
    double **data;
    public:
     Matrix2DArray(){}
     Matrix2DArray(int height,int width)
     {  height1=height;
        width1=width;
        data=new double *[height];
        for (int i=0;i<width;i++)
        {
           data[i]=new double [width];
        }
     }
     int min(int a,int b)
     {
        if (data[a]<data[b]) return a;
        return b;
     }
     double getElement(int i,int j)
     {
        return data[i][j];
     }
     void setElement(int i,int j,double value)
     {
        data[i][j]=value;
     }
Matrix * add (Matrix *other )
{ Matrix2DArray * result=new  Matrix2DArray(height1,width1);
  for (int i=0;i<height1;i++)
  {
     for (int j=0;j<width1;j++)
     {  
        result->data[i][j]=data[i][j]+other->getElement(i,j);
     }
  }
  return result;
}

Matrix * multiply(Matrix * other)
{
      Matrix2DArray * Result1=new Matrix2DArray(height1,width1);
      for (int i=0;i<height1;i++)
      {
         for(int j=0;j< width1;j++)
         {
            Result1->data[i][j]=0;
         
         for (int k=0;k<width1;k++) 
         {
            Result1->data[i][j]+=data[i][k] * other->getElement(k,i);
         }

         }

      }
    return Result1;
}
friend ostream & operator  <<  (ostream & out ,const Matrix2DArray & M2D)  
{
   for (int i=0;i<M2D.height1;i++)
   {  for (int j=0;j<M2D.width1;j++)
      { out<<M2D.data[i][j]<<"     ";
      }
      cout<<endl;
   }
   return out;
}

   
};