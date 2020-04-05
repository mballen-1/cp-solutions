using namespace std;
#include <bits/stdc++.h>
#include <map>
#include <stdio.h>
#include <string.h>
#define all(x) x.begin(), x.end()
#define sz(x) ((int)x.size())
#define sqr(x) ((x) * (x))
#define pb push_back
#define eps 1e-9
typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
typedef map<int, int> mii;
typedef map<st, int> msi;
typedef set<int> si;
typedef set<st> ss;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FORD(i, b, a) for (int i = b; i > a; i--)
#define DEBUG(x) cout << std::setprecision(15) << #x << " = " << x << "\n";
#define MAXN 100000000000000000

int t, n, x, y;
int cnt [256];

int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &x);
        FOR(i, 0, 256){
            cnt[i] = 0;
        }
        while(n--){
            scanf("%d", &y);
            cnt[y-1] = 1;
        }
        while(x--){
            int i = 0;
            while(cnt[i]){
                ++i;
            }
            cnt[i] = 1;
        }
        // FOR(i, 0, 300){
        //     printf("%d",cnt[i]);
        // }
        // printf("\n");
        bool ans = false;
        FOR(i, 0, 256){
            if (!cnt[i] && !ans){
                printf("%d\n", i);
                ans = true;
                // break;
            }
        }
    }
    return 0;
}