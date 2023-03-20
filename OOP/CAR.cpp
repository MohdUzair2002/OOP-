#include"bits\stdc++.h"
#include"CAR.h"
using namespace std;
CAR::CAR(char *colour_in)
{
    strncpy(colour,colour_in,9);
    colour[9]='\0';
}
char * CAR::getColour()
{
    return colour;
}
