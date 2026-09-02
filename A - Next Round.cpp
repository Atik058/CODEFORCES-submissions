#include<iostream>
using namespace std;
int main()
{
    int n,k,i,c=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    k=k-1;
    for(i=0;i<n;i++)
    {
        if(a[i]>0&&a[i]>=a[k])
            c++;
    }
    cout<<c;
    return 0;
}
