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
    #define MAXN 200000
     
    /*
    Agustín is in the park and finds a magical Genie. 
    The Genie wants to reward Agustín for finding him and asks him to show how much money he is carrying.
    Agustín pulls 2 coins out of his pocket: one of (4) and other one of (5). 
    The Genie pronounces the magic words 
    and the less value coin (4) transforms into one which value is the total amount of money that Agustín 
    had before the Genie used his magic (9).
    Now Agustín has 2 coins:
    a (5) and a (9) coin. 
    The Genie tells Agustín that he can repeat the gift indefinitely, but only once a day. 
    If Agustín finds the Genie all days, and never spends or adds coins, 
    how much money will Agustín have in exactly 10 years before he meets the genie again? Bear in mind that all years have 365 days.   
*/
    
    int main(){
        long double a = 5, b = 9;
        FOR(i, 0, 3650){
            if(a <= b) {
                a = a + b;
            } else {
                b = a + b;
            }
        }
        cout<<a+b;
    }
 