 
#include <iostream>
using namespace std;
int main() {
 
 string s1;
 string s2;
 cin>>s1;
 cin>>s2;
 int c1,c2,m=0;
 int n = s1.length();
 for(int i=0;i<n;i++)
 {
     c1=s1[i];
     c2=s2[i];
     if(c1>90)
     {
         c1=c1-32;
     }
     if(c2>90)
     {
         c2=c2-32;
     }
     
     if(c1==c2)
     {
         if(i==n-1){
             cout<<0;
             break;
         }
         continue;
     }
     else if(c1>c2)
     {
         cout<<1;
         break;
     }
     else if(c1<c2)
     {
         cout<<-1;
         break;
     }
     
     
 }
 
 
 
    return 0;
}
