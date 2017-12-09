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
#define MAXN  1000
//#include<string>




int main(){
    ios_base::sync_with_stdio(0);
    
  
    int cx,cy, tx,ty, bx,by;
    cin>>cx>>cy>>tx>>ty>>bx>>by;
    
    int absx=0;
    int absy=0;
    
        
    if(cx == 0){
        if(tx%2 == 0){
                    
            absx = 1;
        }
        else{
            absx=-1;
        }
    }
    else{
            
        if(abs(tx-cx)%bx == 0){
            if((abs(tx-cx)/bx)%2 == 0){
                absx = 1;
            }
            else{
                absx=-1;
            }
        }
            
    }
            
    if(cy == 0){
        if(ty%2==0){
                    
            absy = 1;
        }
        else{
            absy=-1;
        }
                
    }
    else{
        if(abs(ty-cy)%by == 0 ){
            if((abs(ty-cy)/by)%2 == 0){
                absx = 1;
            }
            else{
                absy=-1;
            }
        }
    }
    
    if(absx == absy && absx!=0){
        cout<<"YES"<<"\n";
    
    }else
        cout<<"NO"<<"\n";

}