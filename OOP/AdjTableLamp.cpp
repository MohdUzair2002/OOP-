#include"bits\stdc++.h"
#include"AdjTableLamp.h"
using namespace std;

AdjTableLamp :: AdjTableLamp() : TableLamp()
{
    brightness = 1.0;
}

void AdjTableLamp :: dim(){
    brightness = brightness - 0.1;
}

void AdjTableLamp :: print(ostream &out){
    out << brightness << " " << on_off << endl; 
}
