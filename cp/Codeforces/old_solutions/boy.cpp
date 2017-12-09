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

int let[26];

int main(){
    
    ios_base::sync_with_stdio(0);
    string line;
    cin>>line;
    
    for(int i = 0 ; line[i]; i++){
        int x  = line[i]%26 ;
        let[x]++;
    }
    
    int ct= 0;
    for(int x = 0 ;x <28; x++){
        if (let[x]>0){
            ct++;
        }
    }
    
    if(ct&1){
        cout<<"IGNORE HIM!"<<"\n";
    }
    else{
        cout<<"CHAT WITH HER!"<<"\n";
    }
}