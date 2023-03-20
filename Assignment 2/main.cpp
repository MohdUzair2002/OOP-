#include  <iostream>
#include <string>
#include "line.cpp"
using namespace std;
int main(void)
{
 Point p5=Point(2,3);
 Point p6=Point(7,3);
 line dif=line(&p5);
 line dif_1=line(&p6);
//  line null=line();
//  line copy=line(dif);
//  line Equi_Dif=dif-dif_1;
//  cout<<Equi_Dif.length()<<endl; 
line obj=line();
 cout<<dif.length()<<endl;
 cout<<dif_1<<endl;
 cout<<dif<<endl;
//  cout<<dif;
//  line l7=dif -dif_1;

//  cout <<copy<<endl;
//  cout<< Equi_Dif<<endl;
//  cout<<Equi_Dif.slope()<<endl; 
}






