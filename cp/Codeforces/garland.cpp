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
//#include<string>

int cter[4];
char seq[4];


int main(){
    
    for(int i =0 ;i < 4; i++){
        cter[i]  =0;
        seq[i] = '?';
    }
    
    string line = "";
    getline(cin, line);
   
    for(int i = 0; i< line.length(); i++){
        
        if (line.at(i) != '!' && seq[i] == '?' ){
            seq[i%4] = line.at(i);
        }
        else{
            cter[i%4]++;
        }
    }
    
    int r=0,g=0,b=0,y=0;
    for(int i = 0; i< 4 ; i++){
        if(seq[i] == 'R'){
            r+= cter[i];
        }else{
            if(seq[i] == 'G'){
                g+= cter[i];
            }
            else{
                if(seq[i] == 'B'){
                    b+= cter[i];
                }
                else{
                    if(seq[i] == 'Y'){
                        y+= cter[i];
                    }
                }
            }
                
        }
    }

    
    cout<< r<<" "<<b<<" "<<y<<" "<<g<<"\n";
    return 0;//well done champion!
    
}