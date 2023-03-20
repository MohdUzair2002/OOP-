#include<iostream>
using namespace std;
class Rational{
 private:
  int numerator;
  int denominator;
 public:
  Rational();
  Rational(int numer,int denom);
  int getnumerator() const ;
  int getdenominator() const;
  friend Rational operator +(const Rational & left,int right);
  friend ostream & operator <<(ostream & out,const Rational &object);
};
Rational::Rational(){
}
Rational :: Rational(int numer,int denom)
{
    numerator=numer;
    denominator=denom;
}
Rational operator +(const Rational & left,int right)
{
    Rational temp;
    temp.numerator=left.numerator+(right*left.denominator);
    temp.denominator=left.denominator;
    return(temp);
}
int Rational::getnumerator() const
{
    return numerator;
}
int Rational::getdenominator() const 
{
    return denominator;
}
ostream & operator <<(ostream & out,const Rational &object)
{
    out<<"Numerator="<<object.numerator<<"Denominator ="<<object.denominator;
}

int main(){
    Rational r1(1,4);
    int x;
    x=4;
    cout<<r1+x;
}
