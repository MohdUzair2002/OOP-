#include <iostream>
#include <cmath>
#include <functional>
using namespace std;

class Point {
    float point[2];

    public:
        Point(){

        }
        Point(float x, float y){
            point[0] = x;
            point[1] = y;
        }

        void setX(float x){
            point[0] = x;
        }

        void setY(float y){
            point[1] = y;
        }

        float getX(){
            return point[0];
        }

        float getY(){
            return point[1];
        }

};

enum TypeOfCurve {
    UPWARD,
    DOWNWARD,
    OPEN,
    CLOSED,
    SIMPLE,
    NON_SIMPLE
};

class Curve {
    protected:
        Point* points;
        TypeOfCurve type;

    public:
        Curve(TypeOfCurve type): type(type){
            points = new Point[10];
        }
        virtual void computePoints() = 0;
        friend ostream& operator <<(ostream& out, const Curve& c);

};

class ParametricCurve : public Curve {
    float minT;
    float maxT;
    function <float (float)> eq_x;  // equivalent to float(* eq_x)(float);
    function <float (float)> eq_y;  // equivalent to float(* eq_y)(float);

    public:
        ParametricCurve(float minT, float maxT, TypeOfCurve type) : minT(minT), maxT(maxT), Curve(type){}

        void set_eqX(function <float (float)> eq_x){
            this -> eq_x = eq_x; 
        }

        void set_eqY(function <float (float)> eq_y){
            this -> eq_y = eq_y; 
        }

        void computePoints(){
            float interval = (maxT - minT)/10;
            for (int i = 0; i < 10; i++){
                float x = eq_x(minT + i * interval);
                float y = eq_y(minT + i * interval);
                points[i] = Point(x, y); 
            }
        }

        friend ostream& operator <<(ostream& out, const ParametricCurve& c){
            for (int i = 0; i < 10; i++){
                out << "x = " << c.points[i].getX() << "\t, y = " << c.points[i].getY() << endl; 
            }
            return out;
        }

};

int main(){
    cout << "Circle :" << endl;
    ParametricCurve circle(0, 10, CLOSED);
    circle.set_eqX([=](float t){return cos(t);}); 
    circle.set_eqY([=](float t){return sin(t);});
    circle.computePoints();
    cout << circle ;

    cout << "Line :" << endl;
    ParametricCurve line(0, 2, SIMPLE);
    line.set_eqX([=](float t){return 1 + t;});
    line.set_eqY([=](float t){return 2 + 3*t;});
    line .computePoints();
    cout << line;
    return 0;
}
