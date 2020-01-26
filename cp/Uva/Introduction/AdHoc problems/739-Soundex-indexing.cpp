using namespace std;
#include <bits/stdc++.h>
#include <map>
#include<stdio.h>
#include<string.h>
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
#define FORD(i, b,a) for(int i= b; i > a ; i--)
#define DEBUG(x) cout<<#x<<":"<<x<<"\n";
#define MAXN  100000000000000000

string name;
string omit-break = "AEIOUYWH";
int num[] = {0, 1, 2, 3 ,4 ,5 ,6 ,7 ,8 ,9 };

map<char, int> mymap;

void coutx(int x){
    for(int i = 0; i< x; ++i){
        cout<<" ";
    }
}

void  operate(string name){
    
    coutx(10);cout<<name; coutx(35-(10+name.length()));   
    cout<<name[0];
    int count = 0;
    string ans = "";
    vi lol;
         
    FOR(i, 1, name.length()){
        
        char prev = name[-i];
        char current = name[i];
        int a = mymap[prev];
        int b = mymap[current];       
        
        // BPFV = 1
        // CSKGJQXZ = 2
        // DT = 3
        // L = 4
        // 5 = MN
        // 6 = R
        // AEIOUYWH = avoid

        //SCHAEFER = S216           x S160

        bool avoid = false;
        if( a != b && prev != current )
        {
            int j = 0;
            while(j < omit.length()){
                if (omit[j] == current) 
                    avoid = true;
                ++j;
            }
            if(avoid == false && count < 3 ){
                if(count == 0){
                    lol.pb(b);
                    DEBUG(current);                 
                    ++count;                    
                }
                else{
                    if(lol[count-1] != b)
                        lol.pb(b);                 
                        ++count;
                }
            }
        }
    }
    while(count < 3){
        lol.pb(0);
        ++count;
    }
    for(int i= 0; i< 3; ++i)
        cout<<lol[i];
    cout<<ans<<"\n";
}


int main(){
    // BPFV = 1
    // CSKGJQXZ = 2
    // DT = 3
    // L = 4
    // 5 = MN
    // 6 = R
    mymap['B'] = 1; mymap['P'] = 1; mymap['F'] = 1; mymap['V'] = 1;
    mymap['C'] = 2; mymap['S'] = 2; mymap['K'] = 2; mymap['G'] = 2;
    mymap['J'] = 2; mymap['Q'] = 2; mymap['X'] = 2; mymap['Z'] = 2;
    mymap['D'] = 3; mymap['T'] = 3; mymap['L'] = 4; mymap['M'] = 5; 
    mymap['N'] = 5; mymap['R'] = 6;
    coutx(10);cout<<"NAME";coutx(21);cout<<"SOUNDEX CODE\n"; 
    while(cin>>name){
        operate(name);
    }
    return 0;
}