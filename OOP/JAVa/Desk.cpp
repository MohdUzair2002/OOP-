#include"bits\stdc++.h"
#include "iostream"
using namespace std;
class Desk
{
 public: 
 Desk()
 {
     cout<<"desk  constructor"<<endl;
     
 }
 ~Desk()
 {
     cout<<"desk destructor"<<endl;
 }
};
class office
{
 public: 
 office()
 {
     cout<<"office  constructor"<<endl;
     
 }
 ~office()
 {
     cout<<"office destructor"<<endl;
 }
};
class Pcs
{
 public: 
 Pcs()
 {
     cout<<"Pcs  constructor"<<endl;
     
 }
 ~Pcs()
 {
     cout<<"Pcs destructor"<<endl;
 }
 void turn_on()
{
    cout<<"Pcs on"<<endl;
}
 void turn_off()
{
    cout<<"Pcs off"<<endl;
}
};
class Emp
{
 
 Desk myDesk;
 office * myoffice;
 public:  
 Emp(office *o)
 {   this ->myoffice=o;
     cout<<"Emp  constructor"<<endl;
     
 }
 ~Emp()
 {
     cout<<"Emp destructor"<<endl;
 }
};
class Boss:public Emp
{

 Pcs myPc;
 public: 
 Boss(office *o):Emp(o)
{     cout<<"boss  constructor"<<endl;
      myPc.turn_on();
 }
 ~Boss()
 {
     cout<<"boss destructor"<<endl;
     myPc.turn_off();

 }
};
int main()
{  office * poff=new office();
   Boss * pboss=new Boss(poff);
   delete pboss;
   Emp *pemp = new Boss(poff);
   delete pemp;

   return 0; 
}