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

int table[0xFF];
ll n, k, m, sum;
char c; ll val;
string l;

int main() {
    scanf("%d", &n);
    FOR(i, 0, n){
        FOR(i, 0, 0xFF){
            table[i] = 0;
        }
        scanf("%d", &k);
        FOR(i, 0, k){
            scanf("%s %d", &c, &val);
            table[(int) c ] = val;
        }
        scanf("%d", &m);
        cin.ignore();
        sum = 0;
        FOR(i, 0, m){
            getline(cin, l);
            FOR(i, 0, l.size()){
                sum += table[(int)l[i]];
            }
        }
        printf("%.2lf$\n", sum / 100.0);
    }
    return 0;
}