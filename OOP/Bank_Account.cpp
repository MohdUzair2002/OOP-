#include"bits\stdc++.h"
#include"Bank_Account.h"

Bank_Account::Bank_Account(){
    }
Bank_Account::Bank_Account(double x){
   x=0;
}
Bank_Account::Bank_Account(Bank_Account & b){
    x=b.x;
}
void Bank_Account:: Set(double x){
  account_no=x;
}
double Bank_Account:: Get(){
    return account_no;
}
double Bank_Account :: Deposit(double x){
    
    return (x);
}