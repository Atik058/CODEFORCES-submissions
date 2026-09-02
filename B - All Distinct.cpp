// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
set<int>s;
 
int main() {
    int t,n,x,dist;
    cin>>t;
    while(t--)
    {
        
        cin>>n;
        
        for(int i=0;i<n;i++)
        {
            cin>>x;
            s.insert(x);
        }
        dist=s.size();
        s.clear();
        
        if((dist+n)%2==0)
        {
            cout<<dist<<endl;
        }
        else
        {
            cout<<dist-1<<endl;
        }
        
    }
    
    return 0;
}
