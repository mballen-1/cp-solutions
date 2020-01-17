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
#define DEBUG(x) cout<<#x<<" = "<<x<<"\n";
#define MAXN  100000000000000000

int main()
{
    int n, k, m;
    ll x, cnt = 0;
    string l;
    scanf("%d\n", &n);
    int data[256];
    for (int i = 0; i < n; ++i) 
    {   
        FOR(i, 0, 256){
            data[i] = 0;
        }
        cnt = 0;
        scanf("%d\n", &k);
        for (int j = 0; j < k; ++j)
        {   
            char c;
            scanf(" %c", &c);
            scanf("%d\n", &x);
            cin.ignore();
            data[(int)c] = x;
        }
        scanf("%d\n", &m);
        cin.ignore();
        for (int i = 0; i < m; i++) {
            string t; getline(cin, t);
            for(int z = 0; z < t.size(); ++z){ 
                cnt += data[(int)t[z]];
            }
        }
        printf("%.2lf$\n", cnt / 100.0);
    }
    return 0;
}