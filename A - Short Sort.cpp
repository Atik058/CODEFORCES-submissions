#include <iostream>
using namespace std;
int main() {
    
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s=="abc" || s=="acb" || s=="bac" || s=="cba") 
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    
    
    return 0;
}
