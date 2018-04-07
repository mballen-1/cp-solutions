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

int main(){
    mii xd ;
    xd[0] =4;
    xd[1] = 22;
    xd[2] = 27;
    xd[3] = 58;
    xd[4] = 85;
    xd[5] = 94;
    xd[6] = 121;
    xd[7] = 166;
    xd[8] = 202;
    xd[9] = 265;
    xd[10] = 274;
    xd[11] = 319;
    xd[12] = 346;
    xd[13] = 355;
    xd[14] = 378;
    xd[15] = 382;
    xd[16] = 391;
    xd[17] = 438;
    xd[18] = 454;
    xd[19] = 483;
    xd[20] = 517;
    xd[21] = 526;
    xd[22] = 535;
    xd[23] = 562;
    xd[24] = 576;
    xd[25] = 588;
    xd[26] = 627;
    xd[27] = 634;
    xd[28] = 636;
    xd[29] = 645;
    short x;
    cin>>x;
    cout<<xd[x-1];
    return 0;
}