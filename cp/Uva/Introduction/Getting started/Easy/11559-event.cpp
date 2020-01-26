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
#define DEBUG(x) cout << std::setprecision(15) << #x << " = " << x << "\n";
#define MAXN 100000000000000000

int n, b, h, w, p, a;

int main()
{
    while (scanf("%d %d %d %d", &n, &b, &h, &w) != EOF)
    {
        int mn = 500001;
        FOR(i, 0, h)
        {
            scanf("%d", &p);
            FOR(i, 0, w)
            {
                scanf("%d", &a);
                if (a >= n && (p * n) <= b)
                {
                    mn = min(mn, p);
                }
            }
        }
        mn< 500001 ?  printf("%d\n", mn * n ): printf("stay home\n");       
    }
    return 0;
}