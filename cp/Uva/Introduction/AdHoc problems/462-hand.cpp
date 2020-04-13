using namespace std;
#include <bits/stdc++.h>
#include <map>
#include <stdio.h>
#include <string.h>
#define all(x) x.begin(), x.end()
#define sz(x) ((int)x.size())
#define sqr(x) ((x) * (x))
#define pb push_back
#define eps 1e-9
typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
typedef map<int, int> mii;
typedef map<st, int> msi;
typedef set<int> si;
typedef set<st> ss;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FORD(i, b, a) for (int i = b; i > a; i--)
#define DEBUG(x) cout << std::setprecision(15) << #x << " = " << x << "\n";
#define MAXN 100000000000000000

string x;
 /*
    A = 4, k = 3, Q = 2, J = 1
    -1 if (only K)
    -1 if (only Q with zero or one other cards)
    -1 (J , zero, one or two other cards)
    +1 (each suite with two cards)
    +2 (each suite one card)
    +2 (each suite hand contains no cards)

    stopped suite = hasA || (hasK && at least one other card) || (Q && two other cards) 

    < 14 pts ?  PASS
    >= 14 pts ? open suite ... Bidding is always opened in one of the suites (With the most cards)
    >= 16 pts ? (Ignoring 5,6,7 rules &&(four suites are stopped) ) Open in "no trump"... No trump bid >>> suit bid

    */



bool stopped(string x){
    return 
            x.find('A') <= x.length() || 
            (x.length() >= 4 && (x.find('K') <= x.length())) || 
            (x.length() >= 6 && (x.find('Q') <= x.length())) ;
}

int suiteA(string x){
    int acc = 0;
    if(x.length() == 2 && (x.find('K') == 0)){
        acc += 1;
    }
    if(x.length() <= 4 && (x.find('Q') <= x.length())){
        acc += 1;
    }
    if(x.length() <= 6 && (x.find('J') <= x.length())) {
        acc += 1;
    } 
    return -acc;
}

int suiteB(string x){
    if (x.length() == 4) return 1;
    if (x.length() == 2) return 2;
    if (x.length() == 0) return 2;
}


int eval(char v) {
    if(v == 'A') return 4;
    if(v == 'K') return 3;
    if(v == 'Q') return 2;
    if(v == 'J') return 1;
    return 0;
}

void check(string x) {
    int p = 0;
    string s = "", d = "", h = "", c = "", bid = "";
    for(int i = 0; i< x.length() -1; i += 3){
        char v = x[i];
        char w = x[i+1];
        p += eval(v);
        if(w == 'H'){
            h += v;
            h += w;
        }
        if(w == 'S'){
            s += v;
            s += w;
        }
        if(w == 'C'){
            c += v;
            c += w;
        }
        if(w == 'D'){
            d += v;
            d += w;
        }
    }
    p += suiteA(h); p += suiteA(c);
    p += suiteA(s); p += suiteA(d);
    
    bool as = (stopped(h) && stopped(d) && stopped(s) && stopped(c));
    if(p >= 16 && as) {
        printf("BID NO-TRUMP\n");
        return;
    }
    else {    
        p += suiteB(h); p += suiteB(c);
        p += suiteB(s); p += suiteB(d);
        if(p >= 14){
            int ls = s.length(), lc = c.length(), ld = d.length(), lh = h.length();
            int e = ls > lc ? ls : lc;
            int f = ld > lh ? ld : lh;
            int z = e > f ? e : f;
            if(ls == z){
                printf("BID S\n");
                return;
            }
            if(lh == z){
                printf("BID H\n");
                return;
            }
            if(ld == z){
                printf("BID D\n");
                return;
            }
            if(lc == z){
                printf("BID C\n");
                return;
            }
            
        } else {
            printf("PASS\n");
            return;
        }
    }
    
}

int main() {
   while (getline(cin, x)) check(x);
   return 0;
}