#include<iostream>
using namespace std;
class Rational{
    private:
     int numerator;
     int denominator;
     int a;
    public:
      Rational();
      Rational(int numer,int denom);
      friend bool  operator <(const int a,const Rational & left);
      };
      Rational :: Rational(){
	  }
	 Rational :: Rational(int numer,int denom)
    {
    numerator=numer;
    denominator=denom;
    }
    bool  operator <(const int a,const Rational & left)
      { 
          int temp;
          temp=left.numerator/left.denominator;
          if (a<temp)
          {
              return true;
          }

        
         else{return false;
		 }
      }

int main(){
    Rational myRational(9,3);
    int a;
    a=3;
    if (a < myRational)
     {cout <<"a is less than myRational"<<endl;
     }
     else{cout <<"a is not less than myRational"<<endl;}
    
}
