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

int n, p, rfp = 1;
string x, c;

int main(){
    while(scanf("%d %d", &n, &p) && n || p){
        double minCost = MAXN, maxComp = -1000000;
        cin.ignore();
        FOR(i, 0, n){
            getline(cin, x);
        }
        FOR(i, 0, p){
            string cmName, rq;
            double pCost;
            int rqN;
            getline(cin, cmName);
            scanf("%lf %d", &pCost, &rqN);
            cin.ignore();
            FOR(i, 0, rqN){
                getline(cin, rq);
            }
            double cpComp = ( (double)rqN / (double)n);
            if(cpComp > maxComp){
                minCost = pCost;
                c = cmName;
                maxComp = cpComp;
            } else {
                if(cpComp == maxComp){
                    if(pCost < minCost){
                        minCost = pCost;
                        c = cmName;
                        maxComp = cpComp;
                    }
                }
            }
        }
        if(rfp > 1){
            printf("\n");
        }
        printf("RFP #%d\n%s\n", rfp, c.c_str());
        ++rfp;
    }
    return 0;
}