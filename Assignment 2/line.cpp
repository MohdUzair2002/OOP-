#include "line.h"
#include  <iostream>
#include <string>
#include <cmath>
using namespace std;
line ::line()
{}
line :: line (Point *p1)
{this->p1=p1,this->p1=p1;}
line ::line (const line & l)
{p1=l.p1,p1=l.p1;}
// line line::operator +(line l)
// {p1=p1.x+l.p1,p2=l.p1;
// return line (p1,p2);
// } 
 line line::operator -(const line & l)
 {line temp;
    temp.p3->x=l.p1->x-p2->x,temp.p3->y=l.p1->y-p2->y;
 return temp;
 } ;
// float p()
// {   int a;
//     p2->Quadrant (int p1->x,int p1->y);
// }
float line ::length()
{return  sqrt(pow(p1->y,2)-pow(p1->x,2));}
// float line :: slope()
// { int X;
//  int Y;
//     int suby=p1->y-p2->y;
//     int subx=p1->x-p2->x;
//     return suby/subx;}
// void line :: Setp1(const Point & PO)
// {
//   PO=
// }
ostream & operator <<(ostream & out,line & l)
{out <<"X="<<l.p1->x<<"    Y="<<l.p1->y<<endl;
return out;}

