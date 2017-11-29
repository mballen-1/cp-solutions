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

int times[MAXN];

int main(){

    int n, sum, l ,r, p;
    

    cin>>n;
    sum = 0;
    for(int i = 0; i< n; ++i){
            cin>>p;  
            sum+= p;        
    }
    
    cin>>p;
   
    for(int i = 0; i< p*2; i+=2 ){
           cin>>l>>r;
           
           times[i] = l;
           times[i+1] = r;
           
           if(sum>=l && sum<=r){
                cout<<sum<<"\n";
                return 0;             
            }
            else
                if(sum<l && sum <r){
                    cout<<times[i]<<"\n";
                    return 0;
                }
    }
    cout<<-1<<"\n";
    



}
