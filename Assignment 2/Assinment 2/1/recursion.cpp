#include <iostream>
using namespace std;
int fact(int a)
    {if (a==1){
        return a;
    }
     int factorial=a*fact(a-1);
     return factorial;
    }
int main () 
{   int k=fact(4);
    cout <<k;
    return 0;
}