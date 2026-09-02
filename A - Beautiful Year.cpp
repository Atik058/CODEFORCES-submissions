 
#include <iostream>
#include <string>
using namespace std;
int main() {
    int g;
    cin>>g;
    string sg;
    while(1)
    {
        g++;
        sg= to_string(g);
        if(sg[0]!=sg[1])
        {
            if(sg[0]!=sg[2])
            {
                if(sg[0]!=sg[3])
                {
                    if(sg[1]!=sg[2])
                    {
                        if(sg[2]!=sg[3])
                        {
                            if(sg[1]!=sg[3])
                            {
                                cout<<g;
                                break;
                            }
                        }
                    }
                }
            }
        }
         
        
    }
    return 0;
}
