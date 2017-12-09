using namespace std;
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define eps 1e-9
typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
typedef map<int,int> mii;
typedef map<st,int> msi;
typedef set<int> si;
typedef set<st> ss;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
#define FOR(i, a,b) for(int i= a; i< b ; i++)
#define DEBUG(x) cout<<#x<<":"<<x<<"\n";
#define MAXN  100000000000000000


int main(){

    int a,n, x, denied = 0 ;
    float b;
    cin>>n>>a>>b;
    
    int partial = 0;
    
    while(n--){
        
        cin>>x;
      
        if(x&1){
                
            if (a>0){
                a--;
            }
            else{    
                if( b>=1 && partial == 0){
                    partial = 1;
                }
                else{
                    if (b>=1 && partial == 1){
                        partial  = 0;
                        b--;
                    }
                    else{
                        if(b == 0)
                            denied++;
                    }
                }
                
            }
        }
    
        else {
        
        
            if(b == 1 && partial == 1){
                denied += 2;
            }
            else{
                if(b == 0){
                    denied += 2;
                }
                else
                    if(b>0 && partial == 0){
                        b--;
                    }
                    //else{denied += 2;}
            }
        }
    
    }
    
    cout<< denied<<"\n";
    return 0;
}