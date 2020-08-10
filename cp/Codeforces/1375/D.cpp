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
     
    int t, n, x;

    int getMex(int cnt[]) {
        for(int i = 0; i < cnt.size(); ++i){
            
        }
        return 0;
    }

    bool isSorted(vi v){
        FOR(i, 0, v.size() - 1){
            if(v.at(i) > v.at(i+1)){
                return false;
            }
        }
        return true;
    }

    int main(){
        scanf("%d", &t);
        while(t--) {
            scanf("%d", &n);
            vector<int> v;
            int count [1000];
            FOR(i, 0 ,1000){
                count[i] = 0;
            }
            for(int i = 0; i < n; ++i){
                scanf("%d", &x);
                v.push_back(x);
                count[x]++;
            }
            int mex = getMex(count);
        }
        return 0;
    }
 