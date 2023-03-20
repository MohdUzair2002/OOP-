#include"bits\stdc++.h"
#include"Bank_Account.cpp"
#include<iostream>
using namespace std;
int main(){
    Bank_Account *account_no1=new Bank_Account;
    Bank_Account *account_no2=new Bank_Account;
    account_no1->Set(123);
    account_no2->Set(456);
    cout<<"The first account no is: "<<account_no1->Deposit(1000)<<endl;
    cout<<"the deposit in second account "<<account_no2->Deposit(200.00)<<endl;
    cout<<"the account no1"<<account_no1->Get()<<endl;
    cout<<"the account no2"<<account_no2->Get();
    

    cout<<endl;
    account_no2->Get();
   
}