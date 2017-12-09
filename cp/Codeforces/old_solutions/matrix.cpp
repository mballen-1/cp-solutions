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
    int x, y, z;
    for(int i =0 ; i<5;i++){
        for(int j=0; j<5; j++){
            cin>>z;
            if(z==1){
                x=i,y=j;
            }
        }
    }
    
    x = abs(2-x);
    y = abs(2-y);
    
    cout<<x+y<<"\n";
}