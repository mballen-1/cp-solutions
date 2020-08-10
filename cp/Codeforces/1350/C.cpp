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
void _R(int &x) { scanf("%d", &x); }
void _R(ui64 &x) { scanf("%lld", &x); }
void _R(double &x) { scanf("%lf", &x); }
void _R(char &x) { scanf(" %c", &x); }
void _R(char *x) { scanf("%s", x); }
void _W(const int &x) { printf("%d\n", x); }
void _W(const int64_t &x) { printf("%lld", x); }
void _W(const double &x) { printf("%.16f", x); }
void _W(const char &x) { putchar(x); }
void _W(const char *x) { printf("%s", x); }

int x;
int n, k, ans;

int lcm(int a, int b){
   int lcm;
   if(a > b)
      lcm = a;
   else
      lcm = b;
   while(1) {
      if( lcm % a == 0 && lcm % b == 0 ) {
         return lcm;
      }
      lcm++;
   }
}

int findGCD(vi arr, int n) { 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) { 
        result = __gcd(arr[i], result);   //gcd(arr[i], result);
    } 
    return result; 
} 

int main(){
        _R(n);
        vi nums, lcms;
        FOR(i, 0, n ){
            scanf("%d", &x);
            nums.pb(x);
        }
        FOR(i, 0, n ){
            FOR(j, 0, n ){
                if(i!=j){
                    int a = nums[i];
                    int b = nums[j];
                    // DEBUG(a);
                    // DEBUG(b);
                    int nl = lcm(a, b);
                    // DEBUG(nl);
                    lcms.pb(nl);
                }
            }
        }

        // FOR(j,0, lcms.size()){
        //     DEBUG(lcms[j]);
        // }
        int ans = findGCD(lcms, lcms.size()); 
        _W(ans);
    return 0;
}