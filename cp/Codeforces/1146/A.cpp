using namespace std;
#include <bits/stdc++.h>
#include <cmath>
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
#define MAXN  500

int n;
string lol;


int findNumber(int aes, int l){
    while(aes < l / 2){
        l--;
    }
    return l;
}

int main() {

    cin>> lol;
    int aes = 0;
    
    FOR(i, 0, lol.size()){
       if(lol[i] == 'a'){
            ++aes;
       } 
    }
    double mid = lol.length()%2 == 0 ? lol.length()/2 : lol.length()/2 +1;
    
    int diff = mid - aes;

    if(lol.length()%2 == 0){
        if(aes > mid){
        cout<<lol.size()<<"\n";
        return 0;
        }
        else {
            cout<<(2*aes) -1 <<"\n";
            return 0;
        }
    }
    else {
        if(aes >= mid){
            cout<<lol.size()<<"\n";
            return 0;
        }
        else {
            cout<<(2*aes) -1 <<"\n";
            return 0;
        }
    }
    
    
}