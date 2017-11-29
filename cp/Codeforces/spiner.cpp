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


char positions[4] = {'v', '<', '^', '>'};


int main(){

    char beg, end;
    int sec, posbeg, posend;
    
    cin>>  beg >> end >> sec;
    
    
    for(int i = 0 ; i< 4; i++){
        if(beg == positions[i]){
            posbeg = i;
        }
        if(end == positions[i]){
            posend = i;
        }
    }
    
    if(sec%4 == 0){
            cout<<"undefined"<<"\n";
            return 0;
    }

    bool cw , ccw ;

    if((posbeg + sec) % 4  == posend ){
        cw = true;
    }
    
    if((abs(posbeg - sec)%4)== posend){
        ccw = true;
    }
    
    
    if(cw && !ccw){
        cout<<"cw"<<"\n";
        return 0;
    }
    
    if(!cw && ccw){
        cout<<"ccw"<<"\n";
        return 0;
    }
    
    cout<<"undefined"<<"\n";
    return 0;
    
}