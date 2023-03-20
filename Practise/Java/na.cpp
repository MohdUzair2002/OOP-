#include <bits/stdc++.h>
#include<iostream>
using namespace std;


class dynamicarray{
public:
 
 int *memo ;
 dynamicarray(){
     memo=new int[4];
	 memo[0]=0;
	 memo[1]=1;
     memo[2]=-1;
 }
	 int fib3(int n){
		int pos;
	    for (int i=0;memo[i]!=-1;i++){
		       pos=i+1;
		}
		 if ( pos < n){
	          std::fill_n(memo+pos,n+1-pos,-1);
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
