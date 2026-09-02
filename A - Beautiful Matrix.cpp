#include<bits/stdc++.h>
 
using namespace std;
main()
{
    int m;
    int s=0;
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>m;
            if(m==1)
            {
                s=s+abs(j-3);
                s=s+abs(i-3);
 
            }
 
 
        }
    }
    cout<<s;
 
}
