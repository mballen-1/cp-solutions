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

char mat[101][101];



int main(){
    int m,n,maxc = -100, maxid, maxjd;
    char x;
    
    
    cin>>m>>n;
    
    for(int i =0 ; i<m; i++){
            int count = 0;
        for(int j = 0 ; j<n; j++){
            cin>>mat[i][j];
            if(mat[i][j] == 'B' ){
                if (count == 0){
                    maxjd = j;
                }
                count++;
            }
            
            if (count > maxc) {
                maxc = count;
                maxid = i;
            }       
        }
    }
    
    DEBUG(maxc);
    int ans = pow(maxc ,2);
    for(int i = maxid ; i<maxid+ maxc; i++){
        for(int j = maxjd ; j< maxjd + maxc; j++){
            if (mat[i][j] == 'W'){
                ans--;
            }
        }
    }
   cout<<ans<<"\n";
    
    
    return 0;
}