#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
  int i,j,t,n;
  double r;
  cin>>t;
  int c[t]={};
  for( i=0;i<t;i++)
  {
      cin>>n;
      int num;
      for( j=0;j<n;j++)
      {
          cin>>num;
          r=sqrt(num);
          if (std::abs(r - std::round(r)) > 0.00001)
            {
                c[i]++;
            }
 
 
      }
  }
   for( i=0;i<t;i++)
   {
       cout<<c[i]<<endl;
   }
 
 
 
 
  return 0;
}
 
 
