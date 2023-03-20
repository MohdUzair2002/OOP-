#include"bits\stdc++.h"
using namespace std;

class Bank_Account{
   private:
    double x;
    double account_no;
   public:
     Bank_Account();
     Bank_Account(double x);
     Bank_Account(Bank_Account & b);
     void Set(double x);
     double Get();
     ~Bank_Account();
     double Deposit(double x);
// friend ostream &operator <<(ostream &out, const Bank_Account &b)
//   {  
//       return (b.x);
//   }
};   