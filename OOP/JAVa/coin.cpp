#include"bits\stdc++.h"
using namespace std;
 class coin{
   private:
    int flip;
  public:
   void flipcoin(int no_of_flips)
   { for (int i=0;i<no_of_flips;i++)
     {int flip=rand()%2+1;
     if (flip==1)
     {cout<<"The flip was head"<<endl;}
     else
     {cout<<"the flip was tail"<<endl;}
     }
   }
 };
 int main()
 {
   coin *flip_result=new coin();
   flip_result->flipcoin(5);

 }