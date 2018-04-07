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

string lol;

bool checkOrder(string input){

    int i = 0;
    while(input[i] == 'a'){
        ++i;
    }
    int j = i;
    while(input[j] == 'b'){
        ++j;
    }
    int k = j;
    while(input[k] == 'c'){
        ++k;
    }
    return k == input.length();
}


bool checkNumber(string input){
    int a = 0,b = 0,c = 0;
    FOR(i, 0, input.length()){
        if(input[i] == 'a'){
            ++a;
        }
        if(input[i] == 'b'){
            ++b;
        }
        if(input[i] == 'c'){
            ++c;
        }
    }
    return(c == a || c == b);
}

int main(){
    cin>>lol;
    bool check_order = checkOrder(lol);
    bool check_number = checkNumber(lol);

     if (check_order && check_number){
        cout<<"YES\n";
     }
     else{
        cout<<"NO\n";
     }
    return 0;
}