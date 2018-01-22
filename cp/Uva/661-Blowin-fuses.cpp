using namespace std;
#include <bits/stdc++.h>
#include<stdio.h>
#include<string.h>
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
#define FORD(i, b,a) for(int i= b; i > a ; i--)
#define DEBUG(x) cout<<#x<<":"<<x<<"\n";
#define MAXN  10000000

int n, m, c;
vi vals;
int devices[20];
int ops[MAXN];
bool active[20];

int calc( int local){
    
    int x = 0;
    if (active[local] == 1 ) 
        active[local] = 0;
    else 
        active[local] = 1; 
    for(int i = 0; i< 20; ++i){
        if(active[i] == true){
            x += devices[i];
        }
    }
    return x;
}

int main(){
    int count = 0;
    while(!cin.eof()){
        
        count++;
        cin>>n >> m >> c;
        if(n == 0){
            return 0;
        }
        else{           

            for(int i = 0; i< n; ++i){
                cin>>devices[i];
            }
            for(int i = 0; i< 20; ++i){
                active[i] = false;
            }
            for(int i = 0; i< m; ++i){
                cin>>ops[i];
            }
            int mx = 0;

            cout<<"Sequence "<<count<<"\n";
            for(int i = 0; i< m; ++i){
                int ret_val = calc( ops[i]-1);
                mx = max(mx, ret_val );
            }
            if(mx <= c){
                cout<<"Fuse was not blown.\n";
                cout<<"Maximal power consumption was "<<mx<<" amperes.\n\n";
            }
            else   
                cout<< "Fuse was blown.\n\n";
        }
    }
    return 0;
}