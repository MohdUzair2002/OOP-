#include"bits\stdc++.h"
#include "MatrixLin.cpp"
#include "Matrix2DArray.cpp"
class MatrixRowWise:public MatrixLin
{int height2;
 int width2;
 public:
 MatrixRowWise(){}
  MatrixRowWise(int height,int width)
  {
      this->height=height;
      this->width=width;
      data=new double [height * width];
  }
  double getElement(int i,int j)
  {
      return data[i * width +j];
  }
 void   setElement(int i,int j ,double val)
  {
    data[i * width +j]=val;
  }

 Matrix * add (Matrix *other )
{ MatrixRowWise * result2=new  MatrixRowWise (height,width);
  for (int i=0;i<height;i++)
  {
     for (int j=0;j<width;j++)
     {  
        result2->data[i* width +j]=data[i* width +j]+other->getElement(i,j);
     }
  }
  return result2;
}
Matrix * multiply(Matrix * other)
{
      MatrixRowWise * Result1=new MatrixRowWise(height,width);
      for (int i=0;i<height;i++)
      {
         for(int j=0;j< width;j++)
         {
            Result1->data[i* width +j]=0;
         
         for (int k=0;k<width;k++) 
         {
            Result1->data[i * width2 + j]+=data[i * width + k] * other->getElement(k,j);
         }

         }

      }
    return Result1;
}
Matrix2DArray * delinerize()
{   Matrix2DArray * Result1=new Matrix2DArray(height,width);
    int index=0;
    for (int i=0;i<height;i++)
    {   
        for (int j=0;i<width;j++)
        {
           Result1->setElement(i,j,data[index]);
           index++;
        }
    } 
    return Result1;
}     
friend ostream & operator  <<  (ostream & out ,const MatrixRowWise & MRow)  
{
   for (int i=0;i<MRow.height2;i++)
   {  for (int j=0;j<MRow.width2;j++)
      { out<<MRow.data[i]<<"  ";
      }
      cout<<endl;
   }
   return out;
}   
};