#include<iostream>
#include<vector>
using namespace std;
class staticarray{
public:
static int fib3(int n){
     int memo[n+1]={0,1};
   
    fill_n(memo +2, n+1, -1);
     if (memo[n]==-1) {
     memo[n]=fib3(n-1)+fib3(n-2);
 
   
     }
     return memo[n]; 
 }    
};


int main()

{   cout<<staticarray::fib3(5);
    return 0;
}
