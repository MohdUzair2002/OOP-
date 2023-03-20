#include"bits\stdc++.h"
#include "Movie1.cpp"
using namespace std;
class Movie_Collection1
{
private:
Movie1 *m;
int maxcapacity;
int count;

void increase_size()
    {
     Movie1 *mm=new Movie1[maxcapacity *2];
     copy(m,m+maxcapacity,mm);
     maxcapacity *=2;
     delete[] m;
     m=mm;

    }
public:
Movie_Collection1()
{
    maxcapacity=10;
    m=new Movie1 [maxcapacity];
    count=0;
}
void dec_size()
{
    Movie1 *mm=new Movie1[count];
    copy(m,m+count,mm);
    delete[]m;
    m=mm;
}
 Movie1  getMovie(int index)
        {
            return m[index];
        }
void add_item (Movie1 &mo)
   {
       if (count==maxcapacity)
       {
           increase_size();
       }
       m[count]=mo;
       count ++;
   }
int * search_year(int x)
{
    int *year=new int [maxcapacity];
    int a=1;
    for (int i=0;i < maxcapacity;i++)
    {
        if(m[i].getyear()==x)
        {
            year[a]=i;
            a++;

        }
       
    }
     year[0]=a-1;
    return year;
}
int * search_name(string  x)
{
    int *name=new int [maxcapacity];
    int b=1;
    for (int i=0;i < maxcapacity;i++)
    {
        if(m[i].getname() == x)
        {
            name[b]=i;
            b++;

        }
        
    }
    name[0]=b-1;
        return name;
}
int * search_studio(string  x)
{
    int *studio=new int [maxcapacity];
    int a=1;
    for (int i=0;i < maxcapacity;i++)
    {
        if(m[i].getstudio()==x)
        {
            studio[a]=i;
            a++;

        }
       
    }
     studio[0]=a-1;
        return studio;
}
        void delete_item(string movie_name)
        {  
           int* p = search_name(movie_name);
           count--;
           for(int i =p[1]; i <= count; i++)
           {
               m[i] = m[i + 1];
           }
           m[count] = {};
        }
void edit (int index,Movie1 mo)
{
  m[index]=mo;
}
};