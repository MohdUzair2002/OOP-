#include"bits\stdc++.h"
using namespace std;

// const int Red = 1;
// const int Green = 2;
enum colour{Red = 1, Green = 2};

class Traffic_Light{
    private:
        colour Color_1;
    
    public:
        Traffic_Light();
        void changecolour();
        void showcolour();
};