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
#define MAXN  1500

int main(){
    ios_base::sync_with_stdio(0);
    
    char pts; 
    int hh, mm, mins = 0;
    bool found = false;
    
    cin>>hh>>pts>>mm;
    
    while(!found){
        if(hh/10 == mm%10 && hh%10 == mm/10){
            found = true;
            break;
        }
        else{
            if(++mm == 60){
                hh++;
                mm = 0;
            }
            if(hh == 24)
            { 
                hh = 00;
            }
        }
    mins++;
    }
    
    cout<< mins<<"\n";
}