#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int t,n,a,b;
    int i,p1,p2,p3;
    cin>>t;
    for (i=0;i<t;i++)
    {
        cin>>n;
        cin>>a;
        cin>>b;
        
        if(b<2*a){
            cout<<(n/2)*b+(n%2)*a<<endl;
        }
        else
        {
            cout<<a*n<<endl;
        }
    }
    
    return 0;
}
 
