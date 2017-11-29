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
#define MAXN  1000

int indx[] = {3, 7 , 11, 15};


int main(){
    ios_base::sync_with_stdio(0);
    int x;
    vi light;
    
    for(int i = 0; i< 16; i++){
        cin>>x;
        light.pb(x);
    }

    for(int i = 0; i<4; i++ ){
        for(int j = (indx[i]-3); j< (indx[i]+2);j++){
            
            if(j!=indx[i] && j<16){
                
                if(light[j]&light[indx[i]]){
                    cout<<"YES"<<"\n";
                    return 0;
                }
            
                if (indx[i] == 3){
                    if(light[9]&light[indx[i]] ){
                        cout<<"YES"<<"\n";
                        return 0;
                    }
                    if(light[14]&light[indx[i]]){
                          cout<<"YES"<<"\n";
                        return 0;
                    }
                
                }
            
            
            
                if (indx[i] == 7){
                    if(light[2]&light[indx[i]]){
                        cout<<"YES"<<"\n";
                        return 0;
                    }
                    if(light[13]&light[indx[i]]){
                        cout<<"YES"<<"\n";
                        return 0;
                    }
                
                }
            
                if (indx[i] == 11){
                    if(light[1]&light[indx[i]]){
                      cout<<"YES"<<"\n";
                      return 0;
                    }
                    if(light[6]&light[indx[i]]){
                         cout<<"YES"<<"\n";
                         return 0;
                    }
                
                }
            
                if (indx[i] == 15){
                    if(light[5]&light[indx[i]]){
                         cout<<"YES"<<"\n";
                        return 0;
                    }
                    if(light[10]&light[indx[i]]){
                         cout<<"YES"<<"\n";
                        return 0;
                    }
                
                }
                
            } 
            
            
            else{
                if (indx[i] == 15 && j==16){
                    if(light[0]&light[indx[i]]){
                         cout<<"YES"<<"\n";
                        return 0;
                    }
                }
            }
            
        }        
        
    }
    cout<<"NO"<<"\n";
    
}