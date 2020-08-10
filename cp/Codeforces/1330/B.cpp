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

int t, n, x, y;
int cnt [256];


// 1. len1 = ma, len2 = n − ma,
// 2. len1 = n − ma, len2 = ma.

bool eval(vi p, int left, int right){
    vi calc(MAXN + 1);
    FOR(i, 1, MAXN){
        calc[i] = 0;
    }
    FOR(i, left, right){
        calc[p[i]]++;
    }
    FOR(i, 1, right-left + 1){
        if(calc[i] == 0) {
            return 0;
        }
    }
    return 1;
}


int main(){
    scanf("%d", &t);
    while(t--) {
        int answers = 0;
        bool a = false , b = false;
        scanf("%d", &n);
        int ma = -1;
        vi nums;
        
        while(n--){
           scanf("%d", &x);
           nums.push_back(x);
           ma = max(ma, x);
        }
        n = nums.size();

        bool fcl = eval(nums, 0, ma);
        bool fcr = eval(nums, ma, n);
        bool scl = eval(nums, 0, n - ma);
        bool scr = eval(nums, n - ma, n);

        if(fcl && fcr){
            ++answers;
            a = true;
        }
        if(scl && scr){
            ++answers;
            b = true;
        }
        if(ma == (n-ma) && (answers == 2)){
           --answers;
        }
        printf("%d\n", answers);
        if(a && answers){
            --answers;
            printf("%d %d\n", ma, n- ma);
        } 
        if(b && answers){
            --answers;
            printf("%d %d\n", n - ma, ma);
        }
    }
    return 0;
}