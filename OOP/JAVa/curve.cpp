#include"bits\stdc++.h"
#include "iostream"
using namespace std;
class point{
   private:
     float x,y;
   public:
      void set_x(float x)
      {
          this->x=x;
      }
      void set_y(float y)
      {
          this->y=y;
      }
      float get_x()
      {
          return  x;
      }
      float get_y()
      {
          return y;
      }
      point()
      {

      }
      point(float x,float y):x(x),y(y)
      {
          
      }
       
};
class curve{
   protected:
    point * points;
   public:
       
    curve(){}
    virtual  void computepoints(int a,int b,float mint ,float maxt,int c,int d)=0;
    friend ostream & operator <<(ostream & out,curve & c);

};

class parametriccurve:public curve
{
  private:
   float minT;
   float maxT;
   int count=0;
  public:
   
   parametriccurve()
   { 
   
   minT=0;
   maxT=0;

   }
  friend ostream & operator <<(ostream & out,const parametriccurve & p)
  
      { for(int i=0;i<p.count;i++)
       { out<< "x= "<< p.points[i].get_x()<<endl<<"y= "<<p.points[i].get_y()<<endl; }
         return out;
      }
  

   void computepoints(int a,int b,float mint ,float maxt,int c,int d)
       
   {   c= maxt-mint; 
       points=new point[c];
    //    int d=mint;
    //    for (int i=0;i<c;i++)
    //    {  
    //        point[i]=c;
    //        d+=1;
    //    } 
        
         for (int i=0;i<c;i++)
         {     
            //   x=a+b*i;
            //   y=c+d*i;
              points[i]=point(a+b*i,c+d*i);
              count++;
         }
   }



};
// ostream & operator <<(ostream & out,const parametriccurve & c)
//     {
//         return out<<"x ="<<c.x<<endl<<"y ="<<c.y;
         
//     }
int main()
{
  parametriccurve *p1=new parametriccurve();
  p1->computepoints(1,2,3,8,3,4);
  cout<<*p1;

}