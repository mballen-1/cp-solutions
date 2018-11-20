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

i64 n;
unsigned long long int loquesea[8181];


int main( ){
    loquesea[0] = 0;
    loquesea[1] = 1;
    loquesea[2] = 2;

    for(int z = 3;  z <= 8181 ; ++z){
        loquesea[z] = loquesea[z - 1] + loquesea[z - 2] + loquesea[z-3]; 
        cout<<z<<":"<<loquesea[z]<<"\n";
    }
    cout<< loquesea[8181];

    return 0;
}