#include <iostream>
using namespace std;
class point{
    public:
    int x;
    int y;
    point();
    point(int , int);
    point(const point&);
    ~point();
    int Quadrant();
    point operator +(const point& obj);
    friend istream& operator >>(istream &in,point &obj);
    friend ostream& operator <<(ostream &out, point &obj);
    // void input(){
    // int a , b;
    // cout << "Enter the value of x: ";
    // cin >> a;
    // cout << "Enter the value of y: ";
    // cin >> b;
    // x = a;
    // y = b;
    // };
    void print();
    void setx(int);
    void sety(int);
    int getx();
    int gety();

}; 
 
 istream& operator >>(istream &in, point &obj){
     cout << "Enter the value of x: ";
     in >> obj.x;
     cout << "Enter the value of y: ";
     in >> obj.y;
     return in;
};
 ostream& operator <<(ostream &out, point &obj){
        out << "The value of x is: " << obj.x << endl;
        out << "The value of y is: " << obj.y << endl;
        out << "Quadrant number is: " << obj.Quadrant() << endl;
        return out;
    }