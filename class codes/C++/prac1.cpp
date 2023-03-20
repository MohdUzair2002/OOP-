#include <iostream>
using namespace std;
int main()
{
  int a[5]={1,2,3};
  int c=0;
  int d;
  for (int i=0;i<3;i=i+2)
  {  
     
     if (i!=size(a)-1)
     {
        d=a[i]+a[i+1];
        c=c+d;
        cout << c;
     }
    else
    {
      d=a[i];
      c=c+d;
    }
    
    
    
  }
  cout <<'\n'<<c;
  return 0;

}

