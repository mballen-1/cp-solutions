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
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> Adjlist;
#define FOR(i, a,b) for(int i= a; i< b ; i++)
#define DEBUG(x) cout<<#x<<":"<<x<<"\n";
#define MAXN  200010
#define CST 1000000007
            

vi lots(MAXN);
vi aux(MAXN);


int main(){

    ios_base::sync_with_stdio(0);
    int n, x, part;
    cin>>n;
    
    for(int i = 0; i<n; i++){
        cin>>x;
        lots[i]=x;
    }
    
    int y = 0;
    int state = 0;
    while(y<n){
        if (y%2 == 0){
            
          
            
            if(!aux.empty()){
                aux.clear();
            }
            
            for(int i = 0;  i<n-y-1 ; i++){
                if(state == 0){
                  
                    aux.pb(lots[i]+ lots[i+1]); 
                    state = 1;
                    
                }
                else{
                    
                    aux.pb(lots[i]-lots[i+1]); 
                    state = 0;
                }
            }
        }
        else{
            
            
            
           if(!lots.empty()){
               lots.clear();
           }
            
            for(int i = 0; i<n-y-1; i++){
                if(state == 0){
                    
                    lots.pb(aux[i]+ aux[i+1]); 
                    state = 1;
                    
                }
                else{
                    
                    lots.pb(aux[i]-aux[i+1]); 
                    state = 0;
                }
            }
            
            
        }
        y++;

    }
    
    if(n%2 != 0){
        if((lots[0])> 0 ){
            cout<<(lots[0])%CST<<"\n";
        }
        else{
            cout<<CST+lots[0]<<"\n";
        }
    }
    else{
        if((aux[0])> 0 ){
            cout<<(aux[0])%CST<<"\n";
        }
        else{
            cout<<CST+aux[0]<<"\n";
        }
    
    }    
    
    
}