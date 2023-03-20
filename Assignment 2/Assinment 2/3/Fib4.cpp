#include <iostream>

using namespace std;
class Fib4{
    public:
    
     static int fib4 (int n)
     {
         int last=0,next=1;
     
     for (int i=0;i<n;i++)
     {
         int oldLast=last;
         last=next;
         next=oldLast+next;
     }
     return last;
     }
};
int main()
{   
    cout<<Fib4::fib4(20)<<endl;
    cout<<Fib4::fib4(40)<<endl;
}