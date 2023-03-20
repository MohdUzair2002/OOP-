#include <iostream>
#include "vector.h"
using namespace std;

int main(){
    vector v1=vector(1,2,3); //invoking parameterised constructor
    vector v2=vector(3,4,5);
    vector v3=vector();  // invoking null constructor
    vector v4=vector(v1); //invoking copy constructor
    cout<<"v1 = "<<v1<<endl;  //printing a vector object
    // demonstrating object behaviors
    cout<<"Magnitude of v2 = " <<v2.magnitude()<<endl;
    cout<<"is v3 Null ? "<<v3.isNull()<<endl;
    cout<<"v1 + v2 = "<<v1+v2<<endl;
    cout<<"v1 - v2 = "<<v1-v2<<endl;
    cout<<"dot product of v1 and v2 = "<<(v1^v2)<<endl;
    cout<<"cross product of v1 and v2 = "<<v1*v2<<endl;
    return 0;
};