using namespace std;
#include <bits/stdc++.h>
#include<string>
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

int ins[10000];

int main(){
    
    int n,k,sum = 0; cin>>n>>k;
    FOR(i, 0, n){
        cin>>ins[i]; sum+=ins[i];
    }
    if(8*n < k || sum < k){
        cout<<"-1"<<"\n";
        return 0;
    }
    else{
        int a = 0, b = 0;
        FOR(i, 0, n){
            a += ins[i]; 
            if( b >= k){
                cout<< i <<"\n";
                return 0;
            }
            else{
                if(a >= 8){
                    b += 8;
                    a -= 8;                   
                }
                else{
                    b += a; a = 0;
                }
            }            
        }
        b < k ?  cout<<"-1"<<"\n" :  cout<< n<<"\n";
        return 0;
    }
}