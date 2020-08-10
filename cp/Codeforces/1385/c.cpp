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

int x, y, t;

bool good (list<int> nums){
    list<int> aux;
    while(!nums.empty()){
        int beg = nums.front();
        int end = nums.back();
        int mn = min(beg, end);
        if(aux.empty()){            
            aux.pb(mn);
            if(mn == beg){
                nums.pop_front();
            }else {
                nums.pop_back();
            }            
        } else {
            int lst = aux.back();
            if(mn >= lst){
                aux.pb(mn);
                if(mn == beg){
                    nums.pop_front();
                } else {
                    nums.pop_back();
                }
            } else {
                return false;
            }
        }
    }
    return true;
}


void find (list<int> nums, int cnt){
    if(good(nums)){
        printf("%d\n", cnt);
    }else {
        nums.pop_front();
        find(nums, ++cnt);
    }
}

int main() {
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &x);
    list<int> nums;
    FOR(i, 0, x){
        scanf("%d", &y);
        nums.pb(y);
    }
    find(nums, 0);
  }
  return 0;
}
