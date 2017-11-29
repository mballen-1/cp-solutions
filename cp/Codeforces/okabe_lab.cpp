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



int n;
int mat[51][51];


bool verify(int x, int y){
    
    int  a ,b, cnt = 0;
    int val = mat[x][y];
    
    
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j< n ;  j++){
            a = mat[x][i];
            b = mat[j][y];
            
            if (a+b == val){
                cnt++;
            }
            
            
            
        }
    }
    
    if(cnt>0)
        return true;
    return false;
}





int main(){

    cin>>n;
    int mcont = 0, obj = 0;
    
    bool loc_bool;
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j< n ;  j++){
            cin>>mat[i][j];
            if (mat[i][j] != 1){
                obj++;
            }
        }
    }
 
    
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j< n ;  j++){
            
            if(mat [i][j] != 1){
                loc_bool = verify(i, j);
                
                if(loc_bool){
                    mcont++;
                }
                
            }
            
        }
    }
    
    
    if(mcont == obj){
                cout<<"Yes"<<"\n";
                return 0;
            }
    else{        
        cout<<"No"<<"\n";
        return 0;
    }
}