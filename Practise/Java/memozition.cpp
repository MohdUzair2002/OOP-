#include<iostream>
#include<vector>
using namespace std;
class memozition
{public:
  static vector <int> memo ;
  static int fib3(int n)
  { if (memo.at(n+1)==0)
   {
     memo.at(n+1)=fib3(n-1)+fib3(n-2);
      
   }
   return memo.at(n+1);

  }
};
vector<int> memozition:: memo {0,1};
int main()
{ cout<<memozition::fib3(4);
  return 0;
}