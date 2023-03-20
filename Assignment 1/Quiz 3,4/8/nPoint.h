#include<iostream>
using namespace std;

class nPoint
{   private:
      static int length;
	  int *p;
	public:
	 nPoint();
	 ~nPoint();
	 void Set(int index,int value);
	 int Get(int index);
	 static int Length();
	
};


