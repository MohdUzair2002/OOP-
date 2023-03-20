#include"bits\stdc++.h"
#include"Movie.cpp"
using namespace std;

class Movie_Collection{
    private:
        Movie *m;
        int maxcapacity;
        int count;
        
        void increase_size()
        {
            Movie *mm = new Movie[maxcapacity * 2];
            copy(m, m + maxcapacity, mm);
            maxcapacity *= 2;
            delete[] m;
            m = mm;
        }

    public:
        Movie_Collection()
        {
            maxcapacity = 10;
            m = new Movie[maxcapacity];
            count = 0;
        }

        void setMaxcapacity(int maincapacity)
        {
            this->maxcapacity = maincapacity;
        }

        void setCount(int count)
        {
            this->count = count;
        }

        int getMaxcapacity()
        {
            return maxcapacity;
        }
        
        int getCount()
        {
            return count;
        }
    Movie getMovie(int index)
        {
            return m[index];
        }
    void decrease_size()
        {
            Movie *mm = new Movie[count];
            copy(m, m + count, mm);
            delete[] m;
            m = mm;
        }

        void add_item(Movie  &mo)
        {
            if(count == maxcapacity)
            {
                increase_size();
            }
            m[count] = mo;
            count++;
        }

        void delete_item(string movie_name)
        {
           int* p = search_by_name(movie_name);
           count--;
           for(int i = *p; i <= count; i++)
           {
               m[i] = m[i + 1];
           }
           m[count] = {};
        }

        int* search_by_year(int x)
        {
            int *year = new int[maxcapacity];
            int a = 1;
            for(int i =0; i <= count; i++)
            {
                if(m[i].getYear() == x)
                {
                    year[a] = i;
                    a++;
                }
            } 
            year[0] = a -  1;
            return year;
        }

        int* search_by_name(string name_movie)
        {
            int *name = new int[maxcapacity];
            int b = 1;
            for(int i = 0; i <= count; i++)
            {
                if(m[i].getMovie_name() == name_movie)
                {
                    name[b] = i;
                    b++;
                }
            }
            name[0] = b - 1;
            return name;
        }

        void Edit(int index, Movie mo)
        {
            m[index] = mo;
        }
};