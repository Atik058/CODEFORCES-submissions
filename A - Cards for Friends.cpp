// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    
    int w,h,n;
    int s=1;
    cin>>w>>h>>n;
    
    while(w%2==0)
    {
        w/=2;
        s*=2;
    }
    while(h%2==0)
    {
        h/=2;
        s*=2;
    }
    if(s>=n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    }
    
}
