#include<iostream>
#include<algorithm>
#include<math.h>
#define DEBUG(x) cout<<#x<<":"<<x<<"\n";

using namespace std;

int main(){
    int n, tw=0, one = 0, x;
    cin>>n;
    while(n--){
        cin>>x;
        (x==2?tw++:one++);
    }
    if(tw>0 && one >0){
        int mx = max(one,tw);
        int mn = min(one,tw);
        int left = mx - mn;
        if(tw < one)
            cout<<min(one, tw) + left/3<<"\n";
        else
            cout<<min(one,tw)<<"\n";
        return 0;
    }
    else{
        if( one >= 3){
            cout<<one/3<<"\n";
            return 0;
        }
        else{
            cout<<0<<"\n";
            return 0;
        }
   }
}

