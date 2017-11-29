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


int nums[110]; 

int main(){

    int n, x;
    cin>>n;
    
    for(int i = 0; i< 110 ; i++){
        nums[i] = 0;
    }
    
    for(int i = 0; i< n ; i++){
        cin>>nums[i];
    }
    
    if(n ==1){
        cout<<"YES"<<"\n";
        return 0;
    }
    else{
        
        bool cst;
        int st =1, cnt = 0;
        
        for(int i = 0; i< n -1; i++){
            
            int j = i+1;
            
            if(!cst && st == 1){
                
                if(nums[i] == nums[j] || nums[i]> nums[j]){
                    cst = true;
                    st = 2;
                }
            }
            if (cst && st == 2){
                if(nums[i] < nums[j]){
                    cout<<"NO"<<"\n";
                    return 0;
                }
                
                if(nums[i] > nums[j]){
                    st = 3;
                }
                
            }
            
            if(cst && st ==3){
                if(nums[i] <= nums[j]){
                    cout<<"NO"<<"\n";
                    return 0;
                }
            }
            
            
        }
    }
    
    cout<<"YES"<<"\n";
    
    return 0;
    
}

