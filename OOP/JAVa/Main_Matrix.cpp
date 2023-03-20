#include"bits\stdc++.h"
// #include "MatrixLin.cpp"
#include "Matrix2DArray.cpp"
// #include "MatrixRowWise.cpp"
// #include "MatrixColWise.cpp"
using namespace std;
int main()
{
  Matrix2DArray *m1=new Matrix2DArray(3,3);
        m1->setElement(0, 0, 1);
        m1->setElement(0, 1, 2);
        m1->setElement(0, 2, 3);
        m1->setElement(1, 0, 4);
        m1->setElement(1, 1, 5);
        m1->setElement(1, 2, 6);
        m1->setElement(2, 0, 7);
        m1->setElement(2, 1, 8);
        m1->setElement(2, 2, 9);
       cout<<"Creating an object m1 from Matrix2dArray :"<<endl;
       cout<<*m1;
       cout<<endl;
      cout<<*((Matrix2DArray*)(m1->add(m1)));
     
    //     MatrixRowWise *m2 = new MatrixRowWise(3, 2);
    //     m2->setElement(0, 0, 1);
    //     m2->setElement(0, 1, 2);
    //     m2->setElement(1, 0, 3);
    //     m2->setElement(1, 1, 4);
    //     m2->setElement(2, 0, 5);
    //     m2->setElement(2, 1, 6);
    //    cout<<"Creating an object m2 from MatrixRowWise :";

    //     cout<<m2;
    //     cout<<"-----------------------------------";
    //     cout<<"Delinearizing m2 into Matrix2dArray :";
    //     cout<<m2->delinerize();
}