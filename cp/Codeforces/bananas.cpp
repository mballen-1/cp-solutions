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


int m, b;
int optx, opty;
int mat[51][51];


bool cnst(int x, int y, int m, int b){
    
    if ((x/m)+y <= b)
        return true;
    return false;
}



int main(){

    cin>>m>>b;
    
    int ix = b*m;
    int iy = b;
    
    optx = ix;
    opty = iy;
    
    while(!cnst(optx, opty, m , b)){
        opty = ceil(opty/ 2);
        if(opty == 0){
            opty = iy;
            optx/=2;
            if(optx == 0){
                optx = ix;
            }
        }
    }
    
   
   i64 sum = 0;
    
    if(optx == 0 || opty == 0){
        cout<<sum<<"\n";
        return 0;
    }
    
    
     if(optx == 1 || opty == 1){
        cout<<4<<"\n";
        return 0;
    }
   
     if(  optx == opty  && ix&1 == 1){
        optx++;
    }
  
    
    
   DEBUG(optx);
   DEBUG(opty);
   
  
    
    for(int i = 0; i<= optx; i++){
        for(int j=0 ; j<= opty; j++){
            sum+= i;
            sum+= j;
            
        }
        
    }
    cout<< sum << "\n";
    
}