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

vi fst, scd, lol;

int main(){
    int n, x;
    cin>>n;
    for(int i=1; i< n+1; i++){
        lol.pb(i);        
    }

    if(n%2 == 1){
        for(int j= 0; j<= n/2; j++){
            if(j%2 == 0){
                fst.pb(lol[j]);
                fst.pb(lol[n-j -1]);
            }
            else{
                if(j == (n/2)){
                    fst.size()>scd.size()? scd.pb(lol[j]):fst.pb(lol[j]);
                }
                else{
                    scd.pb(lol[j]);
                    scd.pb(lol[n-j -1]);                
                }
            }
        }
    }
    else{

        if(n == 2){
            fst.pb(lol[0]);
            scd.pb(lol[1]);
        }
        else{
            for(int j= 0; j< n/2; j++){
                if(j%2 == 0){
                    if(j == (n/2) -1){
                        fst.pb(lol[j]);
                        scd.pb(lol[j+1]);
                    }
                    else{
                        fst.pb(lol[j]);
                        fst.pb(lol[n-j -1]);
                    }
                }
                else{                    
                        scd.pb(lol[j]);
                        scd.pb(lol[n-j -1]);
                }
            }
        }
    }
    int suma = 0, sumb = 0;

    for(int i=0; i< fst.size(); i++){
        suma += fst.at(i);       
    }
    for(int i=0; i< scd.size(); i++){
        sumb += scd.at(i);       
    }

    cout<<abs(suma-sumb)<<"\n";
    cout<<fst.size()<<" ";

    for(int i=0; i< fst.size(); i++){
        cout<<fst.at(i)<<" ";       
    }
    cout<<"\n";
    for(int i=0; i< scd.size(); i++){
        cout<<scd.at(i)<<" ";       
    }
    
}