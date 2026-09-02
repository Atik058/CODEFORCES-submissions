#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n,x;
    cin>>n;
    vector<int> prog,math,PE;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x==1)
        {
            prog.push_back(i);
        }
        if(x==2)
        {
            math.push_back(i);
        }
        if(x==3)
        {
            PE.push_back(i);
        }
    }
    int ans = min( prog.size(), min(math.size(), PE.size() ) );
    cout<<ans<<endl;
    for(int i=0;i<ans;i++)
    {
        cout<<prog[i]<<" "<<math[i]<<" "<<PE[i]<<endl;
    }
    
    
   
 
    return 0;
}
