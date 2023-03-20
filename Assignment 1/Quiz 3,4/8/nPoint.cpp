#include "nPoint.h"
#include<iostream>
using namespace std;
nPoint::nPoint()
{
    p=new int[length];
}
nPoint::~nPoint()
{
    delete p;
}
void nPoint::Set(int index,int value)
{
    p[index]=value;
}
int nPoint::Get(int index)
{
   int value= p[index];
   return value;
}
int nPoint::length=8;
int nPoint:: Length()
{
 return length;
}
