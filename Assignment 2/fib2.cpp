#include <iostream>
using namespace std;
// int fact(int a)
//     {if (a==1){
//         return a;
//     }
//      int factorial=a*fact(a-1);
//      return factorial;
//     }
// int main () 
// {   int k=fact(4);
//     cout <<k;
//     return 0;
// }
class fib2{
    public:
    static int fib21(int n)
    {
        if (n<2){return n;}
        return fib21(n-1)+fib21(n-2);
    }
};
int main(){
    cout<<"the answerof fib21(5)"<<fib2::fib21(5)<<endl;
    cout<<"the answerof fib21(10)"<<fib2::fib21(10);
}