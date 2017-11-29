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

int kk [10000];



int main(){

    int days, goal, cc = 0, index = 0, total_candies = 0;
    
    cin>>days>>goal;
    
    for(int i = 0 ; i< 10000; i++){
        kk[i] = 0;
    }
    
    for(int i = 0 ; i< days; i++){
        DEBUG(i);
        cin>>kk[i];
        total_candies += kk[i];
    }
    
    //DEBUG(total_candies);
    if(total_candies<goal || 8*days < goal){
        cout<<-1<<"\n";
        return 0;
    }
    else{
    
        while(days>0 && goal>0){
        
            int candies = kk[index];
        
            if (candies >= 8){
                goal -= 8;
                cc += candies -8 ;
            }
            else{    
                    if (cc>0){
                        int day = 8-candies;
                        goal -= day+candies;
                        cc -= day;
                    }
                    else
                        goal -= candies;
            }   
            index++;
            days--;
        }
    }
    
    cout<<index<<"\n";
    return 0;
}