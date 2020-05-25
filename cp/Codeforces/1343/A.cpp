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
ui64 n;
int cnt [256];

ui64 getSum(ui64 n){
    return pow(2, n+1) -1;
}

int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%lf", &n);
        ui64 x = 1, k = 2;
        ui64 val = x * (getSum(k));
        ui64 ansx;
        bool found = false;
        if(val == n){
            printf("%lf", k);
        } else {
            FOR(i, 1, n){
               FOR(j, 2, n){
                   if(i * getSum(j) == n && !found){
                       ansx = i;
                       found = true;
                   }
                } 
            }
        }
               
    }
    return 0;
}