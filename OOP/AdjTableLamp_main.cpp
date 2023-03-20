#include"bits\stdc++.h"
#include"AdjTableLamp.cpp"
using namespace std;

int main(){
    AdjTableLamp yourLamp;
    cout <<yourLamp << endl;
    yourLamp.print(cout);
    yourLamp.pressSwitch();
    yourLamp.dim();
    yourLamp.print(cout);

    return 0;
}