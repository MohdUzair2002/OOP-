#include"bits\stdc++.h"
#include"Movie_Collection.cpp"
using namespace std;

int main(){

    Movie_Collection myManager;

    Movie m1("Dr. Strange", " Marvel ", 2022);
    myManager.add_item(m1);
    Movie m2("Spiderman 1", " Marvel ", 2020);
    myManager.add_item(m2);
    Movie m3("Spiderman 2", " Marvel ", 2021);
    myManager.add_item(m3);
    Movie m4("Spiderman (No way Home)", " Marvel ", 2022);
    myManager.add_item(m4);

    // Print number of index of movies in a specific year by search_by_year function.
    int *result = myManager.search_by_year(2022);
    for (int i = 1; i <= result[0]; i++)
    {
        cout << result[i] << endl;
    }

    // Print number of index of a specific movie by search_by_name.
    int *index = myManager.search_by_name("Spiderman 1");
    cout << *index << endl;

    // Print Movie name, studio and year by its index number 
    cout << myManager.getMovie(1);

    // Delete Movie by name from movie array
    myManager.delete_item("Dr. Strange");

    return 0;
}