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
typedef list<int> lst;
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FORD(i, b, a) for (int i = b; i > a; i--)
#define DEBUG(x) cout << std::setprecision(15) << #x << " = " << x << "\n";
#define MAXN 100000000000000000
void _R(int &x) { scanf("%d", &x); }
void _R(ui64 &x) { scanf("%lld", &x); }
void _R(double &x) { scanf("%lf", &x); }
void _R(char &x) { scanf(" %c", &x); }
void _R(char *x) { scanf("%s", x); }
void _W(const int &x) { printf("%d", x); }
void _W(const int64_t &x) { printf("%lld", x); }
void _W(const double &x) { printf("%.16f", x); }
void _W(const char &x) { putchar(x); }
void _W(const char *x) { printf("%s", x); }

int t, x, y, z;

void build (int x, int y, int z) {
    // 00
    // 01 , 10
    // 11
    vi final;
    if(y == 0){
        while(x + 1){
            printf("%d", 0);
            --x;
        }
        while(z + 1){
            printf("%d", 1);
            --z;
        }
    } else{ 
        if(x == 0 && z == 0){
            FOR(i, 0, y){
                printf("01");
            }
        }
        else {
            FOR(i, 0, x){
                printf("0");
            }
            if(y >= 1){
                FOR(i, 0, y-1){
                    printf("01");
                }
            }
            FOR(i, 0, z){
                printf("1");
            }
        }
    }
    printf("\n");
}

int main(){
    scanf("%d", &t);    
    while(t--) {
        scanf("%d %d %d", &x, &y, &z);
        build(x, y, z);
    }
    return 0;
}

