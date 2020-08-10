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
#define MAXN 200000
void _R(int &x)
{
    scanf("%d", &x);
}
void _R(ui64 &x) { scanf("%lld", &x); }
void _R(double &x) { scanf("%lf", &x); }
void _R(char &x) { scanf(" %c", &x); }
void _R(char *x) { scanf("%s", x); }
void _W(const int &x) { printf("%d", x); }
void _W(const int64_t &x) { printf("%lld", x); }
void _W(const double &x) { printf("%.16f", x); }
void _W(const char &x) { putchar(x); }
void _W(const char *x) { printf("%s", x); }

int t, n, x, y;

int getIndexToRemove(vi nums)
{
    int mx = 0;
    int index = -1;
    int indexValue = 100000000;
    // DEBUG(nums.size());
    FOR(i, 1, nums.size())
    {
        int nmx = -1;
        if (i == nums.size() - 1)
        {
            nmx = max(mx, nums.at(i - 1) + nums.at(0));
        }
        else
        {
            nmx = max(mx, nums.at(i - 1) + nums.at(i + 1));
        }
        if (nmx > mx && nums.at(i) < indexValue)
        {
            index = i;
            indexValue = nums.at(i);
            mx = nmx;
        }
    }
    return index;
}

vi getNewV(vi nums, int remove)
{
    vi aux;
    // DEBUG(nums.size());
    FOR(i, 0, nums.size())
    {
        if (remove == nums.size() - 1)
        {
            if (i == 0 || i == nums.size() -1)
            {
                continue;
            }
            else
            {
                if(i == remove-1) {
                    aux.pb(nums.at(i) + nums.at(0));
                } else {
                    aux.pb(nums.at(i));
                }
            }
        }
        else
        {
            if (i == remove - 1 || i == remove + 1)
            {
                continue;
            }
            else
            {
                if (i == remove)
                {
                   aux.pb(nums.at(remove - 1) + nums.at(remove + 1));
                }
                else
                {
                    aux.pb(nums.at(i));
                }
            }
        }
    }
    return aux;
}

int main()
{
    _R(n);
    vi nums;
    while (n--)
    {
        _R(x);
        nums.pb(x);
    }
    while (nums.size() > 1)
    {
        // DEBUG(nums.size());
        int indexToRemove = getIndexToRemove(nums);
        // DEBUG(indexToRemove);
        nums = getNewV(nums, indexToRemove);
    }
    printf("%d\n", nums.at(0));
    return 0;
}

// n = a + b
// b = n - a
// a = n - b

// n = a + ( n - a)