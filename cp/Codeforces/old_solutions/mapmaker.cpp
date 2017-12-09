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

string names[1000];
int base[1000];
int size[1000];
int limits[1001][21];
int refs[1001][21];
int cs[1001][21];


int getindex(string name){
    for(int i = 0 ; names[i]; i++){
        if (names[i] == name)
            return i;
    }
    return -1;
}



int main(){
    
    ios_base::sync_with_stdio(0);
    int N, R, base, size, dim, lim;
    string name;
    cin>>N>>R;
    
    for(int i= 0 ; i< N; i++){
        cin>>name[i]>>base[i]>>size[i]>>dim;
        for(int j= 0; j< dim*2; j++ ){
            cin>>limits[i][j];
        }
    }
    
    for(int k = 0 ; k< R; k++){
        cin>>name;
        int is[D+1];
        for(int l= 0; l< D; l++){
            cin>>is[D+1];
        }
        
        for(int m = (2*D)-2; limits[m]; m-=2){
            cs[m] = 
        }
        
    }

    
}