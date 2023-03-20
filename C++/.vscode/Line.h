#include <iostream>
#include "point.cpp"
using namespace std;

class Line{
    point P1;
    point P2;

    public:
    Line();
    Line(int, int, int, int );
    Line(const Line &obj);
    ~Line();
    int Length();
    int Slope();
    void setP1(const point&);
    void setP2(const point&);
    point getP1();
    point getP2();
    void show();
    friend istream& operator >>(istream &in, Line &obj);
    friend ostream& operator <<(ostream &out, Line &obj);
};

istream& operator >>(istream &in, Line &obj){
    cout << "Enter the values for 1st point: " << endl;
    in >> obj.P1;
    cout << "Enter the values for 2nd point :" << endl;
    in >> obj.P2;
    return in;
}

ostream& operator <<(ostream &out, Line &obj){
    out << "The values of P1 is: " << endl << obj.P1 << endl;
    out << "The values of P2 is: " << endl << obj.P2 << endl;
    out << "The Length of line is: "<< obj.Length() << endl;
    out << "The Slope of line is: " << obj.Slope() << endl;
    return out;
}
