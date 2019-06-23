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
#define MAXN  100000000000000000

mii final_data;

vi odds;
vi evens;

int cycles = 0;
int acc = 0;

string currentNumbers = "";

void popElement() {
    if(currentNumbers == "odds"){
            odds.pop_back();
            currentNumbers = "evens";
        }
        else {
            evens.pop_back();
            currentNumbers = "odds";
        }
}

bool canDelete() {
    return ( (evens.size() > 0 && currentNumbers == "evens")
    || (odds.size() > 0 && currentNumbers == "odds"));
}

void proceed() {
    while (canDelete()){
        popElement();
    } 
}

int main() {
    int e;
    cin >> e;

    if (e == 1) {
        cout << "0"
             << "\n";
        return 0;
    }

    else {
        FOR(i, 0, e) {
            int x;
            cin >> x;
            x% 2 == 0 ? evens.pb(x): odds.pb(x);
        }
         
        sort(evens.begin(), evens.end());
        sort(odds.begin(), odds.end());

        odds.size() > evens.size() ? currentNumbers = "odds": "evens";
        popElement();
        
        proceed();

        if (evens.size() == 0 && odds.size() == 0) {
            cout << 0 << '\n';
        }
        else {
            
            FOR(i, 0, evens.size()){
                    acc += evens[i];
            }

            FOR(i, 0, odds.size()){
                    acc += odds[i];
            }
            
            cout << acc << '\n';
        
        }
        return 0;
    }
}