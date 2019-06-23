using namespace std;
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
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
#define MAXN  500

int n, btype, atype;
string t,first, second;


void generate(){
    
    int count = 0;
    int pointer = 0;
    string ans;

    while(count < first.size()){
        if(t[pointer] != 'a'){
            ans += t[pointer];
            count++;
        }
        else{
            ans+= 'a';
        }
        pointer++;
    }
    cout<<ans<<"\n";
}



int main() {

    // t = s + sp

    cin>> t;
    int aes = 0;
    
   string noaes;
   for(size_t i = 0; i < t.size(); ++i){
       if( t[i] != 'a'){
           noaes += t[i];
           atype++;
       }
       else{btype++;}
   }

   for(size_t i = 0; i < noaes.size()/2; ++i){
       first += noaes[i];
   }

   for(size_t i = t.size() - first.size(); i < t.size(); ++i){
       second += t[i];
   }

   DEBUG(first);
   DEBUG(second);

   if(noaes.length() == 0){
       cout<<t;
       return 0;
   }
   if(first == second && first.size() > 1){
       generate();
   }
   else{
       cout<<":(\n";
       return 0;
   }
}