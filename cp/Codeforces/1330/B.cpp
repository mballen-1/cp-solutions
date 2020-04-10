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

int main(){
    scanf("%d", &t);
    while(t--){
        int answers = 0;
        scanf("%d", &n);
        vi nums;
        while(n--){
           scanf("%d", &x);
           nums.push_back(x);
        }
        mii mpl, mpr;
        map<int,int>::iterator it;
        int br = -1;
        FOR(i, 0, nums.size()){
            it = mpl.find(nums[i]);
            if(it == mpl.end()){
                mpl.insert(pair<int,int>(nums[i],1));
            } else {
                    br = i;
                    i = nums.size();
            }
        }
        
        FOR(i, br, nums.size()){
            if(mpr.find(nums[i]) == mpr.end()){
                mpr.insert(pair<int,int>(nums[i],1));
            } 
        }
        vi left, right;
        int lsum = 0, rsum = 0;
        int lex = (br+1)*(br)/2;
        int rex = (nums.size()-br) * (nums.size()-br + 1)/2;
        bool vl = true, vr = true;
        FOR(i, 0, br){
            lsum += nums[i];
        }
        FOR(i, br, nums.size()){
            rsum += nums[i];
        }
        printf("A como está el lex = %d\n", lex);
        printf("A como está el rex = %d\n", rex);
        printf("A como está el lsum = %d\n", lsum);
        printf("A como está el rsum = %d\n", rsum);
        if(lsum == lex && rsum == rex){
            ++answers;
        }

        printf("===============================jijij\n");
        mii mpll, mprr;
        map<int,int>::iterator itt;
        int brr = nums.size();
        FORD(i, nums.size(), -1){
            itt = mprr.find(nums[i]);
            if(itt == mprr.end()){
                mprr.insert(pair<int,int>(nums[i],1));
            } else {
                    brr = i;
                    i = 0;
            }
        }
        
        FORD(i, brr, -1){
            if(mpll.find(nums[i]) == mpll.end()){
                mpll.insert(pair<int,int>(nums[i],1));
            } 
        }
        vi leftt, rightt;
        int lsumm = 0, rsumm = 0;
        int lexx = (brr+1)*(brr)/2;
        int rexx = (nums.size()-brr) * (nums.size()-brr + 1)/2;
        bool vll = true, vrr = true;
        FORD(i, brr, -1){
            lsumm += nums[i];
        }
        FORD(i, nums.size(), brr+1){
            rsumm += nums[i];
        }
        printf("A como está el lexx = %d\n", lexx);
        printf("A como está el rexx = %d\n", rexx);
        printf("A como está el lsumm = %d\n", lsumm);
        printf("A como está el rsumm = %d\n", rsumm);
        if(lsumm == lexx && rsumm == rexx){
            ++answers;
        } 

        if(answers > 0){
            printf("\nANOS XD: %d\n", answers);
            //if(answers >= 1){
                printf("br = %d\n",br);
                printf("%d %d\n\n", br, nums.size() - br);
            //}
            // if(answers == 2){
                printf("brr = %d\n",brr);
                printf("%d %d\n\n\n", brr, nums.size() - brr);
            // }
        } else{
            printf("NADA ============ 0\n\n");
        }
    }
    return 0;
}