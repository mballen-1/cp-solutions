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
    void _W(const int &x) { printf("%d", x); }
    void _W(const int64_t &x) { printf("%lld", x); }
    void _W(const double &x) { printf("%.16f", x); }
    void _W(const char &x) { putchar(x); }
    void _W(const char *x) { printf("%s", x); }
     
    int t, x;
    char n [80];
    
    void find(string n){
       //printf("n = %s", n);
        int cnt = 0;
        vi nums;
        for(int i = n.length()-1; i > -1; --i) {
            int cr = (int) n.at(i) - '0';
            if(cr > 0){
                ++cnt;
                int ex = abs(n.length() - i - 1);
                // printf("cr = %d \n", cr);
                // printf("ex = %d\n", ex);
                // printf("pow(10, ex) = %.16f\n", pow(10, ex));
                int sm = cr * round((pow(10, ex)));
                nums.push_back(sm);
            }
        }
        printf("%d\n", nums.size());
        FOR(i,0, nums.size()){
            printf("%d ", nums[i]);
        }
    }

    int main(){
        _R(t);
        while(t--) {
            scanf ("%79s", n);
            // printf("n = %s", n);
            find(n);
            printf("\n");
        }
        return 0;
    }

