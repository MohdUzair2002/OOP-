#include<iostream>
#include<vector>

using namespace std;


class vector1{
public:
static vector <int> memo;
 static int fib3(int n){
      if(memo.size() < n +1){
                memo.resize(n +1, -1);
            }
      
     if (memo[n]==-1){
     memo[n]=fib3(n-1)+fib3(n-2);

  
  }
  return memo[n];
  }
};

vector <int> vector1::memo{0,1}; 
int main()

{
  cout<<vector1::fib3(100)<<endl;
  cout<<vector1::fib3(100)<<endl;
  cout<<vector1::fib3(100)<<endl;
  cout<<vector1::fib3(100)<<endl;
  return 0;
    
}
// #include<iostream>
// #include<vector>
// using namespace std;


// class vector1{
// public:
//  static int fib3(int n){
//      static vector <int> memo (n+1,-1);
//      memo={0,1};
//      if (memo[n]==-1){
//      memo[n]=fib3(n-1)+fib3(n-2);

  
//   }
//   return memo[n];
//   }
// };

// int main()

// { cout<<vector1::fib3(100)<<endl;
//   cout<<vector1::fib3(100)<<endl;
//   cout<<vector1::fib3(100)<<endl;
//   cout<<vector1::fib3(100)<<endl;
//   return 0;
    
// }