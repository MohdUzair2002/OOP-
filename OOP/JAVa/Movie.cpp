#include"bits\stdc++.h"
using namespace std;

class Movie{
    private:
        string movie_name;
        string studio;
        int year;

    public:
        Movie()
        {
            movie_name = "";
            studio = "";
            year = 0;
        }
        Movie(string movie_name, string studio, int year)
        {
            this ->movie_name = movie_name;
            this ->studio = studio;
            this ->year = year;
        }
        Movie(const Movie &obj)
        {
            movie_name = obj.movie_name;
            studio = obj.studio;
            year = obj.year;
        }

        void setMovie(string movie_name)
        {
            this ->movie_name = movie_name;
        }

         void setStudio(string studio)
        {
            this ->studio = studio;
        }

         void setYear(int year)
        {
            this ->year = year;
        }

        string getMovie_name()
        {
            return movie_name;
        }

          string getStudio()
        {
            return studio;
        }

        int getYear()
        {
            return year;
        }

        friend ostream& operator <<(ostream &out, Movie mo);
};

ostream& operator<<(ostream &out, Movie mo)
{
    out << mo.getMovie_name();
    out << mo.getStudio();
    out << mo.getYear();
    return out;
}