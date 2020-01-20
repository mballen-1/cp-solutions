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
typedef long long ll;
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
#define DEBUG(x) cout << #x << ":" << x << "\n";
#define MAXN 100000000000000000

ll n, k, m, x, cnt;
char c; string l;
ll table[1000];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        FOR(i, 0, 1000) {
            table[i] = 0;
        }
        scanf("%d", &k);
        for (int i = 0; i < k; ++i){
            scanf("%s %d\n", &c, &x);
            // DEBUG(c);
            // DEBUG(x);
            table[(int)c] = x;
        }
        scanf("%d\n", &m);
        cnt = 0;
        for (int i = 0; i < m; ++i){
            getline(cin, l);
            for (int i = 0; i < l.length(); ++i) {
                cnt += table[(int)l[i]];
            }
        }
        // DEBUG(cnt);
        printf("%.2lf$\n", cnt / 100.0);
    }
    return 0;
}