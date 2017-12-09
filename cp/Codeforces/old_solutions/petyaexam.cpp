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

vector<char> goodc;
string pattern;



void read(string x){

    bool capable = true;

    for(int i = 0; i< x.length(); i++){
        
        bool cont;
        
        if(pattern[i] == '?'){
            if (std::find(goodc.begin(), goodc.end(), x[i]) != goodc.end()) {
                //capable = true;
            }else{
                capable = false;
            } 
        }
        else{
        
            if(pattern[i] == '*'){
                if(std::find(goodc.begin(), goodc.end(), x[i]) != goodc.end()) {
                    capable = false;
                }
            
                else{
                    if(pattern[i]!= x[i]){
                        capable= false;
                    }
                }
            
            }
        
        }
    }
    
    if(capable){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";        
    }




}





int main(){
   
  int n;    
  string good, x;
  cin>>good>>pattern;
  
  
  for(int i = 0; i< good.length(); i++){
    char lol = good[i];
    goodc.push_back(lol);
  }
  
  
  
  cin>>n;
  
  while(n--){
    cin>>x;
    read(x);
  }
  
  
  return 0;
    
}