#include<iostream>
#include<string>
using namespace std;
class Student{
public:
string*courses;
int count;
Student();
Student(const Student & s);
~Student();
string getcourse(int num);
void addcourse(string course);
void operator =(const Student & s);
friend ostream & operator<<(ostream & out,const Student & s);

};
Student::Student()
{
    count=0;
    courses=new string[6];
}
Student::Student(const Student & s)
{
    count=s.count;
    courses=s.courses;
    }
string Student:: getcourse(int num)
{ if (num<=6)
 {
     string c=courses[num];
     return c;
 }
 else{return "Invalid course no"; }

}
void Student:: addcourse(string course)
{ 
    if (count<=6)
 {
    courses[count]=course;
    count+=1;
 }
 else{cout<<"sorry the course limit is full"<<endl;
     }

}
void  Student ::operator =(const Student & s)
{
 count=s.count;
 courses=s.courses;
}
ostream & operator<<(ostream & out,const Student & s)
{
    out<<"the number of course enrolles is/are="<<s.count+1<<endl;
    for (int i=0;i <s.count;i++)
    {
        out<<"courses are"<<s.courses[i]<<endl;
    }
  return out;
// Student::~Student()
// { delete Akbar;}
}
Student :: ~Student()
{
    delete courses;
}
int main(){
    Student Salman;
    Student Akbar(Salman);
    Salman.addcourse("BSCS 403 ICS");
    cout<<Akbar.getcourse(0)<<endl;
    Salman=Akbar;
    cout <<"Akbar="<<Akbar<<endl;
    cout<<"Salman="<<Salman<<endl;
    return 0;  
}
