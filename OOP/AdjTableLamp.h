#include"bits\stdc++.h"
#include"TableLamp.cpp"
using namespace std;

class AdjTableLamp : public TableLamp{
    private:
        float brightness;
    
    public:
        AdjTableLamp();
        void dim();
        void print(ostream &);
};