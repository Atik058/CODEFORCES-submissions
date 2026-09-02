// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<int>a;
    int t,n,x;
    
    cin>>t;
    while(t--)
    {
        
        cin>>n;
        
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        int sum = accumulate(a.begin(), a.end(), 0);
        
        if(sum%3==0)
        {
            cout<<0<<endl;
        }
        else if(sum%3==2)
        {
            cout<<1<<endl;
        }
        else if(sum%3==1)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]%3==1)
                {
                    cout<<1<<endl;
                    goto end;
                }
            }
            cout<<2<<endl;
        }
    end:
    a.clear(); 
    } 
    return 0;
}
