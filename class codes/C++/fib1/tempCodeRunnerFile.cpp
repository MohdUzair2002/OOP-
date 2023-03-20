#include <iostream>
using namespace std;
class fib1{
 public:
  static int fib21 (int n)
  {
    return fib21(n-1)+fib21(n-2);
  }
};
int main(){
    fib1 f;
    cout<<f.fib21(5);
    
}