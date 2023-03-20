#include <iostream>
using namespace std;

class Fib1{
    public:
    static int fib1(int a){
        return fib1(a - 1) + fib1(a - 2);
    }
};

int main(){
    Fib1 obj;
    cout << obj.fib1(5);

    return 0;
}