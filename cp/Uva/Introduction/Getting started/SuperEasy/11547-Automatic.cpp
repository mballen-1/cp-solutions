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

ll n, x;

int main()
{
    scanf("%d", &n);
    while(n--){
        scanf("%d", &x);
        int a = (((((x * 567) / 9) + 7492) * 235) / 47) - 498;
        a /= 10;
        printf("%d\n" , abs(a) % 10);
    }
    return 0;
}