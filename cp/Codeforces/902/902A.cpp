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

vi tel;
int mat[100][100];

int main(){
    int n, m, x; cin>>n>>m;
    bool can = false;
    FOR(i,0,n*2){
        cin>>x;tel.pb(x);
    }
    int max = 0;   
    for(int i = 0 ; i< tel.size(); i += 2){
        if (tel[i] <= max && tel[i+1] > max){
            max = tel[i+1];
        }
    }
    (max >= m ? cout<<"YES"<<"\n": cout<<"NO"<<"\n");
}