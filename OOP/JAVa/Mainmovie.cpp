#include"bits\stdc++.h"
#include"Movie_Collection 1.cpp"
using namespace std;
int main()
{
   Movie_Collection1 myManager;

    Movie1 m1("Dr. Strange", " Marvel ", 2022);
    myManager.add_item(m1);
    Movie1 m2("Spiderman 1", " Marvel ", 2020);
    myManager.add_item(m2);
    Movie1 m3("Spiderman 2", " Marvel ", 2021);
    myManager.add_item(m3);
    Movie1 m4("Spiderman (No way Home)", " Marvel ", 2022);
    myManager.add_item(m4);
    int * result =myManager.search_year(2022);
    for (int i=1;i<=result[0];i++)
    {
        cout <<result[i]<<endl;
    } 
    int *index=myManager.search_name("Spiderman 2");
     cout<<*index<<endl;
     cout << myManager.getMovie(1);
     myManager.delete_item("Dr. Strange");
}