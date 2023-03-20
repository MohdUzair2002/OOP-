#include <map>
#include <iostream>
using namespace std;
class Fib3{
    static map<int,int> memo;
    public:

     int static fib3(int n)
   
        {  map <int,int> ::iterator contain=memo.begin() ;
         
         if (memo.count(n)==0)
        { memo.insert(pair<int,int>(n,fib3(n-1)+fib3(n-2)));
         
         }
       return memo[n];

      }
};
map<int,int> Fib3::memo{{0,0},{1,1}};
int main()
{ cout<<Fib3::fib3(5);
 
}