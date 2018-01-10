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

string lol;
int c = 0;
int vowels = 0;

bool vowel(char x){
    if(x == 'a' || x == 'e' || x== 'i' || x == 'o' || x == 'u')
        return true;
    return false;
}


int main(){
    cin>>lol;
    FOR(i, 0, lol.size()){
        if (isdigit(lol[i]) && lol[i] & 1 == 1){
            c++;
        }
        else{
            if ( vowel(lol[i])){
                vowels++;
                c++;
            }
        }
    }
    vowels == 0 ? cout<<0<<"\n": cout<<c<<"\n";
    return 0;
}