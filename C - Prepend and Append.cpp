#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int t,n,start,end;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        
        start=0,end=n-1;
        while(n>0)
        {
            if(s[start]==s[end])
            break;
            else
            {
                n=n-2;
                start++;
                end--;
            }
            
        }
        cout<<n<<endl;
        
    }
 
    return 0;
}
