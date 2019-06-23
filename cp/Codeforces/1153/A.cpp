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
#define MAXN  100000

int t, n, x, y, valx, valy, ans = MAXN ;
int times[MAXN][2];

int main() { 
    
    cin >> n >> t;
    int minTime = 2 * MAXN;

    if( n ==1 ){
        cout<< 1<< "\n";
        return 0;
    }
    else {
        FOR(i, 0, n ) {

            cin >> x >> y;
            while( x < t){
                x += y;
            }
            if ( x == t){
                minTime = x;
                ans = i;
            }
            else {
                int previousTime = minTime;
                minTime = min(x, previousTime);
                if (minTime < previousTime){
                    ans = i;
                }
            }
        }
        cout<< ans + 1<< "\n";
        
    }
    return 0;
}