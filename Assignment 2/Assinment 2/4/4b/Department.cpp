#include  <iostream>
#include <string>
using namespace std;
class Department
{ public: 

   string name_of_department ;
   string name_dept( string name_of_department){
    this->  name_of_department=  name_of_department;
    return name_of_department;
   }
    string major_Field;
    
};
  class Student{
  public:
  Department d1;
void  no_of_courses(int n)
{
  cout<<" Enter the no of courses";
  cin>>n;
  string no_of_courses[n];
 for (int i=0;i<n;i++)
 { cout<<"Enter Course no"<< i+1;
  cin>>no_of_courses[i];
 
 }

}  
  int no_of_student;
  int fees;
  } ;
  class Teacher{
    public:
    Department * d2;
    
    string  Major_Department_name(Department * d2)
    {
         this->d2=d2;
         string Department_name=d2->name_of_department;
         return Department_name;
    }

   
    int salary;
  };
  class Classroom{
    public:
    Department d5;
    int no_of_Rooms()
    {
      int Total=no_of_classroom+no_of_labs;
      return Total;
    }
    ~ Classroom(){};
    int no_of_classroom;
    int no_of_labs;
  };
  class boys_and_girls:public Student{
  public:
   int boys_and_girls_()
   {  int no_of_boys;
      int total2=no_of_student-no_of_boys;
      return total2;
   }
     
   
  };
  int main()
  {
      Department d1;
      Student s1;
      cout<<d1.name_dept("UBIT")<<endl;//Association
      s1.no_of_courses(6);//Association
      Teacher t1;
      t1.Major_Department_name(&d1);//Agrregation
      boys_and_girls nd1;
      nd1.boys_and_girls_();//Inheritance
      Classroom c1;
      c1.no_of_Rooms();//Composition
     return 0;
  }
