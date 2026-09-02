#include<iostream>
using namespace std;
main()
{
    int m=0,p=0,n,i,a,b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        p=(p-a+b);
        if(p>m)
            m=p;
    }
    cout<<m;
}
