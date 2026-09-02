
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,p,v,t,s=0,c=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>p>>v>>t;
        s=p+v+t;
        if(s>1)
        {
            c++;
        }
        s=0;
    }
    cout<<c;
    return 0;
}
