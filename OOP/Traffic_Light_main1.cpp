#include<bits/stdc++.h>
#include"Traffic_light.cpp"
using namespace std;

Traffic_Light external_light;  // making and instantiate external(global) object of Traffic_Light class

int main(){

    external_light.changecolour();

    for(int i = 0; i < 2; i++){

        cout << "times the loop has executed: " << i << endl;

        // making and instantiate automatic(local) object of Traffic_Light class
        Traffic_Light automatic_light;
        automatic_light.changecolour();

        // making and instantiate static object of Traffic_Light class
        static Traffic_Light static_light;  
        static_light.changecolour();

        // print statement for local object colour.
        cout << "The Local(automatic) light is: ";
        automatic_light.showcolour();
        cout << endl;

         // print statement for static object colour.
        cout << "The static light is: ";
        static_light.showcolour();
        cout << endl;
    }
     // print statement for global object colour.
    cout << "The external light is: ";
    external_light.showcolour();
    cout << endl;
}