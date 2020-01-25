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

int dur, dep;
double pay, amm;

int main()
{
    scanf("%d %lf %lf %d", &dur, &pay, &amm, &dep);
    while (dur > 0)
    {
        map<int, double> rec;
        int depM;
        double depVal;
        FOR(i, 0, dep)
        {
            scanf("%d %lf", &depM, &depVal);
            rec[depM] = depVal;
        }
        int month = 0;
        double curDep = 0;
        double debt = amm + pay;
        double val = debt;
        double rPay = amm / dur;

        while (debt >= val)
        {
            if (rec.find(month) != rec.end())
            {
                curDep = rec[month];
            }
            if(month == 0){
                debt -= pay;
            }else {
                debt -= rPay;
            }            
            val -= (val * curDep);
            month++;
        }
        string mS = "months";
        if (month == 2)
        {
            mS = "month";
        }
        printf("%d %s\n", --month , mS.c_str());
        scanf("%d %lf %lf %d", &dur, &pay, &amm, &dep);
    }
    return 0;
}