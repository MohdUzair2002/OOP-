#include"bits\stdc++.h"
#include "MatrixLin.cpp"
class MatrixColWise:public MatrixLin
{int height;
 int width;
 public:

  MatrixColWise(int height,int width)
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
{ MatrixColWise * result2=new  MatrixColWise (height,width);
  for (int i=0;i<height;i++)
  {
     for (int j=0;j<width;j++)
     {  
        result2->data[i +j* height]=data[i +j* height]+other->getElement(i,j);
     }
  }
  return result2;
}
Matrix * multiply(Matrix * other)
{
      MatrixColWise * Result1=new MatrixColWise(height,width);
      for (int i=0;i<height;i++)
      {
         for(int j=0;j< width;j++)
         {
            Result1->data[i +j* height]=0;
         
         for (int k=0;k<width;k++) 
         {
            Result1->data[i * height + j]+=data[i * height + k] * other->getElement(k,j);
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
friend ostream & operator  <<  (ostream & out ,const MatrixColWise & MCol)  
{
   for (int i=0;i<MCol.height;i++)
   {  for (int j=0;j<MCol.width;j++)
      { out<<MCol.data[i]<<" ";
      }
      cout<<endl;
   }
   return out;
}    
};