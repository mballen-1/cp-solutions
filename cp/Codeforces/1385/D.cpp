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
     
    int l, t;

    int cnt (std::string&& cur, char c, int s){
      int leng = cur.length();
      if ( leng == 1){
        s += cur.at(0) != c;
        return s;
      }
      int l = 0, r = 0;
      FOR(i, 0, (leng)/2){
          if(cur.at(i) == c){
            ++l;
          }
        }
      FOR(i, leng/2, leng){
        if(cur.at(i) == c){
          ++r;
        }
      }
      s += (leng/2 - max(l, r));
      char x  = (int)c++;
      if(l> r) {
        // return cnt(cur.substr(leng/2, leng/2), x, s);
      }
      else{
        // return cnt(cur.substr(0, leng/2), x, s);
      }
      return 0;
    }
     
    int main() {
      scanf("%d", &t);
      while (t--) {
        scanf("%d", &l);
        char* st;
        scanf("%s", st);
        int ans = cnt(st, 'a', 0);
        printf("%d\n", ans);
      }
      return 0;
    }