#include <iostream>
using namespace std;
class vector{

    private:
    int x,y,z;    //co-ordinates in a 3d system
    public:
    vector();     // Null constructor
    vector(int x,int y,int z);  //Parameterised constructor
    vector(const vector &V);    //Copy constructor
    float magnitude();   //magnitude of a vector
    bool isNull();     // check if the vector is a Null vector
    vector operator +(vector V);  // Add vectors to get resultant vector
    vector operator -(vector V);  // Subtract vectors to get resultant vector
    vector operator *(vector V);  // cross-product of vectors
    int operator ^(vector V);     // dot-product of vectors
    friend ostream & operator <<(ostream &out,const vector &V); // for printing objects
};