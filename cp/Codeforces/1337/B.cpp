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
 
int t;
int x, n, m;
 
int main(){
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d %d\n", &x, &n, &m);
        bool can = true;
        while( x > 0 && (n > 0 || m > 0) && can){
            // printf("x = %d n = %d m = %d\n", x, n, m);
            int na = floor(x / 2) + 10;
            int ns = x - 10;
            if(na < x && n > 0){
                    x = na;
                    --n;
            } else {
                if(ns < x && m > 0){
                     x = ns;
                     --m;
                } else {
                    can = false;
                }
            }
        }
        if (x <= 0 && can){
            printf("YES \n");
        } else {
            printf("NO\n");
        }
        printf("FIN x = %d\n", x);
    }
    return 0;
}