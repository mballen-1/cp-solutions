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

int t, d;
string s;

string proc(int d, string s){
    string ans = "";
    FOR(i, 0, d){
        int x = s[i] - '0';
        if((x & 1) > 0){
            ans += to_string(x);
            if(ans.length() == 2){
                return ans;
            }
        }
    }
    return  "-1";
}


int main(){
    scanf("%d", &t);
    FOR(i, 0, t){
        scanf("%d", &d);
        cin >> s;
        if (d > 1){
            printf("%s\n", proc(d, s).c_str());
        } else {
            printf("-1\n");
        }
    }
    return 0;
}