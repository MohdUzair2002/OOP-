#include<bits/stdc++.h>
using namespace std;

const int Red = 1;
const int Green = 2;

class Traffic_Light{
    private:
        int colour;
    
    public:
        Traffic_Light();
        void changecolour();
        void showcolour();
};