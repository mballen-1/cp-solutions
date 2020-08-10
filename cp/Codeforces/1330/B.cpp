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
     
    // 1. len1 = ma, len2 = n − ma,
    // 2. len1 = n − ma, len2 = ma.
     
    bool perm(vi nums, int left, int right) {
        int sz = abs(right - left);
        if(!sz) {
            return 0;
        }
        static vi calc(MAXN + 1);
        for(int i = 1; i <= sz; ++i){
            calc[i] = 0;
        }
        for(int i = left; i < right; ++i){
            calc[nums[i]] = 1;
        }
        for(int i = 1; i <= sz; ++i) {
            if(calc[i] == 0){
                return 0;
            }
        }
        return 1;
    }
     
     
    bool check(vi nums, int ma) {
        return perm(nums, 0, ma) && perm(nums, ma, nums.size());
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
            
            // printf("t = %d\n", t);
            n = nums.size();
     
            bool fc = check(nums, ma);
            bool sc = check(nums, n-ma);
            
            if(fc && ma != n){
                ++answers;
            }
            if(sc && ma != n){
                ++answers;
                b = true;
            }
            if(ma == (n-ma) && (answers == 2)){
               --answers;
            }
            printf("%d\n", answers);
            if(fc && answers){
                --answers;
                printf("%d %d\n", ma, n- ma);
            } 
            if(sc && answers){
                --answers;
                printf("%d %d\n", n - ma, ma);
            }
        }
        return 0;
    }
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

// 1. len1 = ma, len2 = n − ma,
// 2. len1 = n − ma, len2 = ma.
 
bool perm(vi nums, int left, int right) {
    int sz = abs(right - left);
    if(!sz) {
        return 0;
    }
    vi calc(MAXN + 1);
    for(int i = 1; i <= sz; ++i){
        calc[i] = 0;
    }
    for(int i = left; i < right; ++i){
        calc[nums[i]] = 1;
    }
    for(int i = 1; i <= sz; ++i) {
        if(calc[i] == 0){
            return 0;
        }
    }
    return 1;
    // static int used[MAXN+1];
    // for(int i = 1; i <= n; i++) used[i] = 0;
    // for(int i = 0; i < n; i++) used[nums[i]] = 1;
    // for(int i = 1; i <= n; i++) {
    //     if(!used[i]) return 0;
    // }
    // return 1;
}


bool check(vi nums, int ma) {
    return perm(nums, 0, ma) && perm(nums, ma, nums.size());
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
        
        // printf("t = %d\n", t);
        n = nums.size();

        bool fc = check(nums, ma);
        bool sc = check(nums, n-ma);
        
        if(fc && ma != n){
            ++answers;
        }
        if(sc && ma != n){
            ++answers;
            b = true;
        }
        if(ma == (n-ma) && (answers == 2)){
           --answers;
        }
        printf("%d\n", answers);
        if(fc && answers){
            --answers;
            printf("%d %d\n", ma, n- ma);
        } 
        if(sc && answers){
            --answers;
            printf("%d %d\n", n - ma, ma);
        }
    }
    return 0;
}
