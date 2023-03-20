#include"bits\stdc++.h"
#include "Matrix.cpp"
#include "Matrix2DArray.cpp"

class MatrixLin:public Matrix
{ protected:
    int height;
    int width;
    double * data;
    
  public:
   MatrixLin(){}
   MatrixLin (int height1)
   {
       data=new double(height1);
   }
  virtual Matrix2DArray * delinerize();
//   int getheight()
//   {
//       return height;
//   }
//   int getwidth()
//   {
//       return width;
//   }
  int min(int a,int b)
     {
        if (data[a]<data[b]) return a;
        return b;
     }
};