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
     
    int t, n, k;
     
    int main(){
        scanf("%d", &t);
        while(t--) {
            scanf("%d", &n);
            list<int> nums;
            while(n--) {
                scanf("%d", &k);
                nums.push_back(k);
            }
            int a = 0, b = 0;
            int lastA = 0, lastB = 0;
            bool alice = true;
            int moves = 0;
            while (nums.size() > 0) {
                if(alice){
                    int s = 0;
                    while(s <= lastB && nums.size() > 0) {
                        s += nums.front();
                        nums.pop_front();
                    }
                    lastA = s;
                    a += s;
                    alice = false;
                } else {
                    int s = 0;
                    while(s <= lastA && nums.size() > 0){
                        s += nums.back();
                        nums.pop_back();
                    }
                    lastB = s;
                    b += s;
                    alice = true;
                }
                ++moves;
            }
            printf("%d %d %d\n", moves, a, b);
        }
        return 0;
    }
 