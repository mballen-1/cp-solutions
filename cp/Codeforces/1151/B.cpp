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
#define MAXN  500

int x, y, n;
int mat [MAXN][MAXN];
string ans;


void findNum(int x) {
    bool found = false;
    if(x == 0){
        ans += mat[0][0];
        return;
    }
    else {
        while(!found){
            if()
        }
    }
}


int main() {
    cin >> x >> y;
    FOR(i, 0, x){
        FOR(i, 0, y){
            cin>> n ;
            mat[x][y] = n;
        }
    }

    FOR(i, 0, x) {
        findNum(x);
    }
    return 0;
}