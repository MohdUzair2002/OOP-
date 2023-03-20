#include<iostream>
#include "Point.h"
using namespace  std;
Point :: Point()
{
    x=0;
    y=0;
}
Point::Point(int x,int y)
{  
    this->x=x;
    this->y=y;
}
Point::Point (const Point & p)
{
    x=p.x;
    y=p.y;
}
Point::~Point()
{}
Point Point:: operator+(const Point &p)
{   Point temp;
    temp.x=x+p.x;
    temp.y=y+p.y;
    return temp;
}
Point Point:: operator-(const Point &p)
{   Point temp;
    temp.x=x-p.x;
    temp.y=y-p.y;
    return temp;
}
int Point::Quadrant(int x,int y)
{
  if (x , y > 0)
  {return 1;}
  else if (x <0 & y>0)
  {return 2;}
  else if (x<0 & y<0)
  {return 3;}
  else{return 4;}
}
ostream & operator <<(ostream &out,const Point &p)
{
 out<<"X="<<p.x;
 out<<"Y="<<p.y;
 return out;
}