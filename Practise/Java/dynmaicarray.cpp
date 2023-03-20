#include <bits/stdc++.h>
#include<iostream>
using namespace std;


class dynamicarray{
public:
 int *memo=new int[5];
   
int fib3(int n){
     memo[0]=0;
     memo[1]=1;
  
     for (int i=0;i<n+1;i++)
     { 
        if (i>=2)
        {memo[i]=-1;}
     }
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
