using namespace std;
#include <bits/stdc++.h>
#include <stdint.h>
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
#define MAXN 1000000000000000000
#define MODANS 1000000007 

ui64 x, y;
vector<ui64> nums;

void generate(int x) {
    if(x == 0){
        nums.push_back(1);
    }
    if (x == 1){
        nums.pb(2);
        nums.pb(4);
    }
    else {
        if(x % 2 == 0){
            // Generate evens
            int lastEven;
            int indexOfLast = 
            FOR(j, 0, pow(2, x)){
            
            }
        }
        else {
            // generate odds
            int look = nums[]
            FOR(j, 0, pow(2, x)){
            
            }
        }
    }
}

void fill(){
    FOR(i, 0, log2(y)){
        generate(i); 
    }
}

int main() {
    cin>>x>>y;
    fill();
    //cout<< sum()%MODANS << "\n";
    // DEBUG(nums);
    return 0;
}