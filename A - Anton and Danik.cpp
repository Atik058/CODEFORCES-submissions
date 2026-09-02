#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,i,s=0,d=0;
    cin>>n;
    string a;
    cin>>a;
    for(i=0;i<=n;i++)
    {
        if(a[i]=='A')
        {
            s++;
        }
        if(a[i]=='D')
        {
            d++;
        }
    }
    if(s>d)
        cout<<"Anton";
    else if(s<d)
        cout<<"Danik";
    else if(s==d)
        cout<<"Friendship";
}
