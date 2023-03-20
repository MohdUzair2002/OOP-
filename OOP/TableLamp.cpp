#include"bits\stdc++.h"
#include"TableLamp.h"
using namespace std;

TableLamp :: TableLamp(){
    on_off = ON;
}

void TableLamp :: pressSwitch(){
    on_off = on_off == ON ? OFF : ON;
}

// ostream &operator<<(ostream &out, const TableLamp &t){
//     return((t.on_off == ON) ? out << "is ON " : out << "is OFF ");
// }
