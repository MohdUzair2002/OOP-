#include "vector.h"
#include <iostream>
#include <cmath>
using namespace std;



vector::vector(){
    x,y,x=0,0,0;
}

vector::vector(int x,int y,int z){
    this->x=x;
    this->y=y;
    this->z=z;
}

vector::vector(const vector &V){
    x=V.x;
    y=V.y;
    z=V.z;
}
float vector::magnitude(){
    return sqrt(pow(x,2)+pow(y,2)+pow(z,2));
}

vector vector::operator +(vector V){
    int X=x+V.x;
    int Y=y+V.y;
    int Z=z+V.z;
    return vector(X,Y,Z);
}

vector vector::operator -(vector V){
    int X=x-V.x;
    int Y=y-V.y;
    int Z=z-V.z;
    return vector(X,Y,Z);
}

int vector::operator ^(vector V){
    return (x*V.x)+(y*V.y)+(z*V.z);
}

vector vector::operator *(vector V){
    int X=(y*V.z)-(z*V.y);
    int Y=(z*V.x)-(x*V.z);
    int Z=(x*V.y)-(y*V.x);
    return vector(X,Y,Z);
}

bool vector::isNull(){
    if (x,y,z==0){
        return true;
    }
    else{
        return false;
    }
}

ostream & operator <<(ostream &out,const vector &V){
    out<<V.x<<"i + "<<V.y<<"j + "<<V.z<<"k"<<endl;
    return out;
}