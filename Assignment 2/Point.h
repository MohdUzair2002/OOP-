#include<iostream>
using namespace  std;
class Point{

     public:
      int x,y;
      Point();
      Point(int ,int );
      Point(const Point & p);
      ~Point();
      int Quadrant(int x,int y);
      Point operator +(const Point &p);
      Point operator -(const Point &p);
      friend ostream & operator <<(ostream &out,const Point &p);
      void Set (int x,int y)
      {
        this->x=x;
        this->y=y;
      }
      int get()
          {return x,y;}
      
};