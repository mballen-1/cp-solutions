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

int x;

map<string, map<string,string>> m;

int main(){

    m["+x"]["+y"] = "+y";
    m["+x"]["-y"] = "-y";
    m["+x"]["+z"] = "+z";
    m["+x"]["-z"] = "-z";

    m["-x"]["+y"] = "-y";
    m["-x"]["-y"] = "+y";
    m["-x"]["+z"] = "-z";
    m["-x"]["-z"] = "+z";

    m["+y"]["+y"] = "-x";
    m["+y"]["-y"] = "+x";
    m["+y"]["+z"] = "+y";
    m["+y"]["-z"] = "+y";

    m["-y"]["+y"] = "+x";
    m["-y"]["-y"] = "-x";
    m["-y"]["+z"] = "-y";
    m["-y"]["-z"] = "-y";

    m["+z"]["+y"] = "+z";
    m["+z"]["-y"] = "+z";
    m["+z"]["+z"] = "-x";
    m["+z"]["-z"] = "+x";

    m["-z"]["+y"] = "-z";
    m["-z"]["-y"] = "-z";
    m["-z"]["+z"] = "+x";
    m["-z"]["-z"] = "-x";
    
    while(scanf("%d", &x) && x){
        string cur = "+x";
        FOR(i, 1, x){
            string lec;
            cin >> lec;
            if(lec != "No") {
                cur = m[cur][lec];
            }
        }
        printf("%s\n", cur.c_str());
    }
    return 0;
}