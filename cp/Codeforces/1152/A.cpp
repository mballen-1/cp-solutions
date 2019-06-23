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
#define MAXN  100000

int n, m, jacks = 0;
mii chests, keys;

void thing() {
    
    for (mii::iterator ch=chests.begin(); ch!=chests.end(); ++ch) {
       cout<<"chest: "<< ch-> first<< ":" << ch->second<<"\n";
    }

    for (mii::iterator k=keys.begin(); k!=keys.end(); ++k) {
       cout<<"key: "<< k-> first<< ":" << k->second<<"\n";
    }

    for (mii::iterator ch=chests.begin(); ch!=chests.end(); ++ch) {
        for (mii::iterator k=keys.begin(); k!=keys.end(); ++k) {
            int s = ch->first + k->first;
            if( s % 2 == 1 && ch->second > 0 && k->second > 0) {
                cout<<"found:"<<ch->first<<" + " << k->first<<"\n";
                jacks++;
                ch->second--;
                k->second--;
            }
        }
    }
}

int main() {
    cin >> n >> m;
    
    FOR(i, 0, n) {
        int x;
        cin >> x;
        if(chests[x] == 0){
            chests[x] = 1;
        }
        else {
            chests[x]++;
        }
    }

    FOR(i, 0, m) {
        int y;
        cin >> y;
       if(keys[y] == 0){
            keys[y] = 1;
        }
        else {
            keys[y]++;
        }      
    }

    thing();

    cout<<jacks<<"\n";

    return 0;
}