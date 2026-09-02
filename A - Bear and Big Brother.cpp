 
#include <iostream>
using namespace std;
int main() {
    int l,b,i;
    cin>>l;
    cin>>b;
    for(i=1;;i++)
    {
        l=l*3;
        b=b*2;
        if(l>b){
            break;
        }
    }
    cout<<i;
    
    return 0;
}
