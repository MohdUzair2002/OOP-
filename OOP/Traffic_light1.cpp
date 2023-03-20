#include<bits/stdc++.h>
#include"Traffic_light.h"
using namespace std;

Traffic_Light :: Traffic_Light(){
    colour = Red;
}

void Traffic_Light :: changecolour(){

    colour = (colour == Red) ? Green : Red;  // using conditional operator instead of if and else condition.

}

void Traffic_Light :: showcolour(){

    // using conditional operator instead of if and else condition.
    (colour == Red) ? cout << "Red " :  cout << "Green ";
}
