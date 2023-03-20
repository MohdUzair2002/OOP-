#include  <iostream>
using namespace std;
#include "Point.cpp"
#include <string>
class line
{   
	// private:
    // int x,y;
    Point * p1;
    Point *p2;
    Point * p3;
    public:
    float p();
    line();
    line(Point * p1);
    line (const line & l);
    // line operator +(line l);
    line operator -(const line &l);
    void Setp1(const Point &);
    void Setp2(const Point &);
    float Getp1();
    float Getp2();
    float length();
    float slope();    
    friend ostream & operator << (ostream & out,line & l);
};	





