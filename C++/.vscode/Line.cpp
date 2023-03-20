#include <iostream>
#include"Line.h"
#include <cmath>
using namespace std;

Line :: Line(){

}
Line :: Line( int x1, int y1, int x2, int y2){
    P1.x = x1;
    P1.y = y1;
    P2.x = x2;
    P2.y = y2;
}
Line :: Line(const Line &obj){
    P1 = obj.P1;
    P2 = obj.P2;
}
Line :: ~Line(){
    cout << "Program is finish " << endl;
}
int Line :: Length(){
    int Distance, Y, X;
    Y = P2.y - P1.y;
    X = P2.x - P1.x;
    Y = Y * Y;
    X = X * X;
    Distance = sqrt(Y + X);
    return Distance;
}
int Line :: Slope(){
    int a,b,gradient;
    a = P2.y - P1.y;
    b = P2.x - P1.x;
    gradient = a / b;
    return gradient;
}
void Line :: setP1(const point &A){
    P1 = A;
}
void Line :: setP2(const point &B){
    P2 = B;
}
point Line :: getP1(){
    return P1;
}
point Line :: getP2(){
    return P2;
}
void Line :: show(){
    cout << "The values of P1 is: " << endl << P1 << endl;
    cout << "The values of P2 is: " << endl << P2 << endl;
    cout << "The Length of line is: "<< Length() << endl;
    cout << "The Slope of line is: " << Slope() << endl;
}