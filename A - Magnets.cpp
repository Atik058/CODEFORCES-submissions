#include <iostream>
using namespace std;
int main() {
    int n;
    int c=0;
    cin>>n;
    string m[n];
    for(int i=0;i<n;i++)
    {
        cin>>m[i];
        if(m[i]!=m[i-1])
        {
            c++;
        }
    }
    cout<<c;
 
    return 0;
}
