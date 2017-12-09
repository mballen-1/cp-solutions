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



i64 met(i64 a, i64 b){

   string binary_a = bitset<64>(a).to_string(); 
   string binary_b = bitset<64>(b).to_string(); 
    
    
    i64 partial = 0;
    int i = 0;
    
    while (b>a){
        if(b&1>0){
            partial++;
        }
        b>>1;
    }
    
    return partial;
}


int main(){
    ios_base::sync_with_stdio(0);
    i64 a, b;
    
    while(cin>>a>>b){
        cout<<met(a,b)<<"\n";
    }
    return 0;
}