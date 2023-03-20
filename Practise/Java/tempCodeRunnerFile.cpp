#include <bits/stdc++.h>
#include<iostream>
using namespace std;


class dynamicarray{
public:
 int *memo=new int[5];
   
 int fib3(int n){
     memo[0]=0;
     memo[1]=1;
  
     fill_n(memo+2,n+1,-1);
     if (memo[n]==-1)
     {
     memo[n]=fib3(n-1)+fib3(n-2);
     }
     return memo[n];

     }
    
     
};


int main()

{   dynamicarray d1;
    cout<<d1.fib3(40)<<endl;
    return 0;
}