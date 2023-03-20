#include"bits\stdc++.h"
#include "iostream"

#include "curve.cpp"
using namespace std;
class parametriccurve:public curve
{
  private:
   float minT;
   float maxT;
   
  public:
   float x,y;
   parametriccurve()
   { x=0;
   y=0;

   }
   void computepoints(int a,int b,int len)
   {   point=new float [len];
       for (int i=0;i<len;i++)
       {  
           cout<<"enter the point "<<i+1;
           cin>>point[i];
       }
         for (int i=0;i<len;i++)
         {
               x=a+b*point[i];
              y=a*point[i]+b*point[i];
              cout<<x<<y;
         }
   }



};
ostream & operator <<(ostream & out,parametriccurve & c)
    {
        return out<<"x ="<<c.x<<endl<<"y ="<<c.y;
         
    }
int main()
{
  parametriccurve * p1=new parametriccurve();
  p1->computepoints(1,2,3);
}