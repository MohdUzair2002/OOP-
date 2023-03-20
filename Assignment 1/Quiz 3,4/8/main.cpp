#include "nPoint.h"
#include<iostream>
using namespace std;
int main ()
{
    nPoint p;
    p.Set(0,100);
    p.Set(1,1000);
    p.Set(2,10);
    cout<<p.Get(0)<<endl;
    cout<<p.Get(1)<<endl;
    cout<<p.Get(2)<<endl;
    cout<<p.Length();
}
