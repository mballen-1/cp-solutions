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

int c, vo, v1, a,days = 1, l;

int main(){
    
  
    
    cin>>c>>vo>>v1>>a>>l;
    
   
    int cpage = vo;
    int i = 1;

    
    while(cpage < c){
        
        int stimed_read = vo + i*a;

        if (stimed_read < v1){
            int stimed_page = cpage + stimed_read -l;
            cpage =  stimed_page;
        }
        else{
            int stimed_page = cpage + v1 -l;
            cpage =  stimed_page;
        }
        
        days++;
        i++;

       
        
    }
    
    cout<< days<<"\n";
    

    return 0;

}