#include"bits\stdc++.h"
using namespace std;
class Movie1
{
  private:
  string name;
  string studio;
  int year;
  public:
  Movie1()
  {
    name="";
    studio="";
    year=0;
  }
  Movie1(string movie_name,string studio_name,int year1)
  {
     name=movie_name;
     studio=studio_name;
     year=year1;

  }
  void setname(string name)

  {
   this->name=name;

  }
  void setstudio(string studio)

  {
   this->studio=studio;

  }
  void setyear(int  year)

  {
   this->year=year;

  } 
  string getname()
  {
      return name;
  }
  string getstudio()
  {
      return studio;
  }
  int getyear()
  {
      return year;
  }
  friend ostream & operator << (ostream & out,const Movie1 & m);
};
ostream & operator <<(ostream& out,const Movie1 & m)
{
    out<<m.name;
    out<<m.studio;
    out<<m.year;
    return out;
}