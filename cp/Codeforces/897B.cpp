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
#define FORD(i, b,a) for(int i= b; i< a ; i--)
#define DEBUG(x) cout<<#x<<":"<<x<<"\n";
#define MAXN  100000000000000000
#include <string>

i64 k, p;
i64 sum;

i64 find(int k){

    string partial_ans="";
    int i = k;
  
    stringstream ss;
    ss<<i;

    partial_ans = ss.str();

    for(int y = partial_ans.length() -1; y > -1; y--){
        char to_ap = partial_ans.at(y);
        partial_ans += to_ap;
    }
   
    return(stoll(partial_ans));
}

int main(){
    cin>>k>>p;
   
    FOR(i, 1, k+1){
        sum += find(i);
    }    
    cout<<sum%p<<"\n";
    return 0;
}