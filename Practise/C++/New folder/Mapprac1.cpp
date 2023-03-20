#include <map>
#include <iostream>
using namespace std;
int main(){
  
    // map<int,int> student;
    // student[100]=500;
    // student[200]=1000000;
   map <int,int> student { { 100,200},{200,400}};
   map <int,int> ::iterator contain=student.begin() ;
//    while(contain!=student.end())
//    {
//        cout<<contain->second<<endl;
//        contain++;
//    }
  
  // auto r=student.find(100);
  auto r=student.find(5);
  cout<<student.count(100);
  if (student.find(20)!=student.end())
  {
    cout<<"HI";
  }
  cout<<r->first;

}