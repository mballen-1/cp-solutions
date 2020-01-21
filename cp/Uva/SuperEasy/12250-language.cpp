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
typedef long long ll;
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
#define debug(x) cout<<#x<<" = "<<x<<"\n";
#define MAXN  100000000000000000

string l;

int main()
{   
    ll x = 1;
    while(getline(cin, l)){
        string ans = "UNKNOWN";
        if(l == "#") return 0;
        else {
            if ( l == "HELLO") ans = "ENGLISH";
            if ( l == "HOLA") ans = "SPANISH";
            if ( l == "HALLO") ans = "GERMAN";
            if ( l == "BONJOUR") ans = "FRENCH";
            if ( l == "CIAO") ans = "ITALIAN";
            if ( l == "ZDRAVSTVUJTE") ans = "RUSSIAN";
        }
        printf("Case %d: %s\n", x, ans.c_str());
        ++x;
    }
    return 0;
}