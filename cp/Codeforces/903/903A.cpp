#include <iostream>
#define DEBUG(x) cout<<"x: "<<x<<"\n";
using namespace std;

int n, x;

int main(){
    cin>>n;
    for(int i = 0; i< n; i++){
        cin>>x;
        bool found = false;

        for(int a = 0; a< 40; a++){
            for(int b = 0; b< 15; b++){
                if(3*a + 7*b == x){
                    found = true;
                    break;
                }
            }
        }

        if(found)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
        
    }

    return 0;
}