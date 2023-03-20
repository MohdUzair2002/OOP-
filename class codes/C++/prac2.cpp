#include <iostream>
using namespace std;
int main()
{ int size_;
  int arr[size_];
  cin >> size_;
  
  for (int i=0;i<size_;i++)
  {
      cout<<"Enter the elemnt no:-"<<i;
      cin >>arr[i];
  }
  int b[]={arr[0]};
  for (int j=0;j<size_;j++)
  { arr[0]=b[0];
    if(arr[j]>arr[0])
  {
    b[0]=arr[j];
    
  }
  else
    {
       continue;
    }
    
  }
  cout << b[0];
  return 0;
}