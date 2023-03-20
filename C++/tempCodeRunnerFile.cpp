#include <iostream>
#include "vector.h"
using namespace std;
 int main(){
   
   vector v1=vector(1,2,3);
   vector v2=vector(3,4,5);
   vector v3=vector();
   vector v4=vector (v1);
   cout <<"v1"<<v1;
   cout<<"v2"<<v2;
   return 0;
 }