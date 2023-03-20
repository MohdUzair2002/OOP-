#include"bits\stdc++.h"
#include"Traffic_light.h"
using namespace std;

Traffic_Light :: Traffic_Light(){
    Color_1 = Red;
}

void Traffic_Light :: changecolour(){

    Color_1 = (Color_1 == Red) ? Green : Red;  // using conditional operator instead of if and else condition.

}

void Traffic_Light :: showcolour(){

    // using conditional operator instead of if and else condition.
    (Color_1 == Red) ? cout << "Red " :  cout << "Green ";
}
