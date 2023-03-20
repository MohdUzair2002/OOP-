#include"bits\stdc++.h"
using namespace std;

class TableLamp{
    protected:
        enum state{ON = 1, OFF = 0} on_off;

    public:
        TableLamp();
        void pressSwitch();
        friend ostream &operator <<(ostream &out, const TableLamp &t){
              return((t.on_off == ON) ? out << "is ON " : out << "is OFF ");
        }
};
