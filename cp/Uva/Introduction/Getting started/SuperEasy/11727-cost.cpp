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

int n, x, y , z;

int main()
{
    scanf("%d", &n);
    for(int i = 1; i<= n; ++i){
        scanf("%d %d %d", &x, &y, &z);
        printf("Case %d: ", i);
        if(x > y && x > z){
            (y > z) ? printf("%d\n", y) : printf("%d\n", z);
        } else {
            if(y > x && y > z){
                (x > z) ? printf("%d\n", x) : printf("%d\n", z);
            } else {
                (x > y) ? printf("%d\n", x) : printf("%d\n", y);
            }
        }
    }
    return 0;
}