using namespace std;
#include <bits/stdc++.h>
#include <map>
#include <stdio.h>
#include <string.h>
#include <math.h>
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

int t, n, m, x;


int main(){
    scanf("%d", &t);    
    while(t--) {
       scanf("%d %d", &n, &m);
       int mt1 [n][m];
       int mt2 [n][m];
       int mv1 = 0, mv2 = 0;
       
       for(int i = 0; i< n; ++i){
           for(int j = 0 ;j < m; ++j){
               cin>> x;
               mt1[i][j] = x;
               mt2[i][j] = x;
           }
       }

       
       for(int i = 0; i < n; ++i){
           for(int j = 0; j < m/2; ++j){
              mv1 += abs((mt1[i][j])-(mt1[i][m-j-1]));
              mt1[i][m-j-1] = mt1[i][j];
              printf("mv = %d\n", mv1);
           }
       }

    //    for(int j = 0; j < m; ++j){
    //        for(int i = 0; i < n/2; ++i ){
    //            mv1 += abs((mt1[i][j])-(mt1[n-i-1][j]));
    //        }
    //    }

    //    for(int j = 0; j < m; ++j){
    //        for(int i = 0; i < n/2; ++i ){
    //            mv2 += abs((mt2[i][j])-(mt2[n-i-1][j]));
    //            mt2[n-i-1][j] = mt2[i][j];
    //        }
    //    }

    //    for(int i = 0; i < n; ++i){
    //        for(int j = 0; j < m/2; ++j){
    //           mv2 += abs((mt2[i][j])-(mt2[i][m-j-1]));
    //           printf("mv = %d\n", mv2);
    //        }
    //    }      

       printf("%d\n", mv1);

    }
    return 0;
}

