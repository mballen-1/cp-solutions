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
double a, b, c, d;
 
bool fits(double x, double c, double d) {
    return x >= c && x <= d;
}


int main(){
    scanf("%d", &t);
    while(t--) {
        scanf("%lf %lf %lf %lf\n", &a, &b, &c, &d);
        double x = b;
        double y = c;
        double min = abs(x-y);
        double max = x + y;
        double z = fits(min + 1, c, d) && (min +1) < (x + y) ? 
            min + 1 : 
                fits(max - 1, c, d) && (max - 1) < (x + y) ?
                    max -1 : c;
        printf("%d %d %d\n", (int)x, (int) y, (int) z);
    }
    return 0;
}