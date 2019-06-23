using namespace std;
#include <bits/stdc++.h>
#include <map>
#include <stdio.h>
#include <string.h>
#include <iomanip>
#include <unistd.h>
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
#define DEBUG(x) cout << #x << ":" << x << "\n";
#define MAXN 100000

long long powers[MAXN];

int main()
{
    long long n, k, m, i, sum=0, tp;
    cin >> n >> k >> m;

    FOR(i, 1, n +1 ) {
        cin >> powers[i];
        sum += powers[i];
    }

    sort(powers+1, powers+n+1 );
    long double x = (long double)(sum+min(m, n*k))/(long double)(n);

    for(int i = 1; i <= min(n-1, m); i++)
    {
        sum -= powers[i];
        tp = sum + min(m-i, (n-i)*k);
        x = max(x, (long double)(tp)/(long double)(n-i));
    }

    cout << fixed << std::setprecision(20) << x;
    return 0;
}