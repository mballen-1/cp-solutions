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

string cad, sample;

void modify(string cadena, int l, int r, char a, char b){
    
    string aux = cadena;
    for(int i = l-1; i<= r-1; i++){        
        if(aux[i] == a){
            aux[i] = b;
        }
    }
    cad = aux;
}

int main(){
    int n,m, l, r;
    char a,b;   

    cin>>n>>m>>cad;

    //DEBUG(cad);
    FOR(i, 0, m){
        cin>>l>>r>>a>>b;
        modify(cad, l,r,a,b);
    }

    cout<<cad<<"\n";
    return 0;

}