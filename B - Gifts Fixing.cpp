#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
main()
{
    int t,j;
    cin>>t;
    unsigned long long int a[t];
    for(j=0;j<t;j++)
    {
        int n,k,i;
        long long int cx,ox,m=0;
    cin>>n;
    int c[n],o[n];
 
    for(i=0;i<n;i++)
        cin>>c[i];
    for(i=0;i<n;i++)
        cin>>o[i];
 
    int c_min= *min_element(c, c + n);
    int o_min= *min_element(o, o + n);
 
 
 
    for(i=0;i<n;i++)
    {
        cx=c[i]-c_min;
        ox=o[i]-o_min;
 
 
        k=max(cx,ox);
        m=m+k;
 
 
    }
    a[j]=m;
 
    }
    for(j=0;j<t;j++)
    {
        cout<<a[j]<<endl;
    }
 
}
