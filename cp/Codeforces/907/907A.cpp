using namespace std;
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define eps 1e-9
typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
typedef map<int,int> mii;
typedef map<st,int> msi;
typedef set<int> si;
typedef set<st> ss;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
#define FOR(i, a,b) for(int i= a; i< b ; i++)
#define DEBUG(x) cout<<#x<<":"<<x<<"\n";
#define MAXN  100000000000000000
vi nums;
bool dad = false, mom = false, son = false, masha = false;

bool climb(int a, int b){
    return a <= b;
}
bool likes(int a, int b){
    return climb(a, b) && (2*a >= b);
}


void search(int a, int b, int c, int d){
    
    for(int i = 3; i <= 2*a; ++i ){
        for(int j= 2; j <=  2*b ; ++j){
            for(int k= 1; k <= 2*c; ++k){
                if( likes(d, k) && likes(c,k) 
                    && likes(b, j) && !likes(d, j) 
                    && likes(a, i) && !likes(d, i)
                    && i > j && j > k                 
                ){
                    nums[0] = i; nums[1] = j; nums[2] = k;
                    dad = true, mom = true, son = true, masha= true;
                }
            }
        }
    }
}


int main(){
    int x;
    while(cin>>x){
        nums.pb(x);
    }   
    if(likes(nums[3], nums[2]))
        dad = true, mom = true, son = true, masha= true;
    if(2*nums[3] > nums[2]){
        search(nums[0], nums[1], nums[2], nums[3]);
    }

    if(dad && mom && son && masha){
        FOR(i, 0, 3){
            cout<<nums[i]<<"\n";
        }
    }
    else{
        cout<<"-1\n";
    }
    
    return 0;
}