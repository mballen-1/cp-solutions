using namespace std;
#include <bits/stdc++.h>
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

void operate(string sdf){

    vector<int> myList;    
    int a = 0,  b = 0;
    
    for(int i = 0; i< sdf.length(); i++){
        if(sdf[i] == ' '){
            myList.push_back(i);
        }
    }   
    if(!myList.empty() > 0){
        while( !myList.empty() ){
    
            b = myList.front();
            myList.erase(myList.begin());
            
            for(int k = b-1; k>= a; k--){
                    cout<< sdf[k];
            }            
            cout<<" ";
            a = b+1;      
        }
        FORD(i, sdf.length()-1, a-1 ){
            cout<< sdf[i];
        }
        cout<<"\n";
    }
    else{
        FORD(i, sdf.length()-1, -1 ){
            cout<< sdf[i];
        }
        cout<<"\n";
    }    
}

string lol;
int main(){
    while(getline(cin, lol)){        
        operate(lol);
    }    
}