#include"bits\stdc++.h"
using namespace std;
class Matrix
 { public:
    virtual  double   getElement(int i,int j)=0;
    virtual  void     setElement(int i,int j ,double val)=0;
    virtual  Matrix * add (Matrix *other)=0;
    virtual  Matrix  * multiply (Matrix *other)=0;

 };