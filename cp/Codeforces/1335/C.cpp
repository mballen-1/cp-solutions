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

int t, n, x;

int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        vi cnt(n);
        FOR(i, 0, n){
            cnt[i] = 0;
        }
        int a = 0, b = 0;
        FOR(i, 0, n){
            cin >> x;
            ++cnt[x];
        }
        FOR(i, 0, n){
            if(cnt[i] > 1) {
                ++a;
                b += (cnt[i]-1);
            } else {
                a += cnt[i];
            }
        }
        printf("a = %d b = %d\n", a, b);
        printf("%d\n", min(a,b));
    }
    return 0;
}