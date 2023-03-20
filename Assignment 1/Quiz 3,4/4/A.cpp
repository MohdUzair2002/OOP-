#include<iostream>

using namespace std;
class A{
 public:
  int ivar=7;
  void m1()
 {
    cout << "A's m1, ";
 }
 void m2()
 {
     cout << "A's m2, ";
 }
 void m3()
 {
     cout << "A's m3, ";
 }
};
class B:public A{
 public:
   void m1()
 {
     cout << "B's m1, ";
 }
};
class C:public B{
 public:
   void m3()
   {
      cout << "C's m3, "<<" "<< (ivar+6);
   }
};
int main(){
A a;
B b;
C c;
C a2;
//----------------------------------------
b.m1();
c.m2();
a.m3();
//----------------------------------------
c.m1();
c.m2();
c.m3();
//----------------------------------------
a.m1();
b.m2();
c.m3();
//----------------------------------------
a2.m1();
a2.m2();
a2.m3();
return 0;
//----------------------------------------
}
