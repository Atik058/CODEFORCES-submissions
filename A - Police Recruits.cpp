// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int n;
   int c=0,p=0;
   int x;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       if(x!=-1)
       {
           p=p+x;
       }
       else
       {
           if(p+x<0)
           {
               c++;
           }
           else
           {
               p--;
           }
       }
       
   }
   cout<<c;
   
    return 0;
}
