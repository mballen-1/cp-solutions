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
#define FORD(i, b,a) for(int i= b; i< a ; i--)
#define DEBUG(x) cout<<#x<<":"<<x<<"\n";
#define MAXN  100000000000000000

int maxk = 100000;
int k, p, sum = 0;


string clean_zeros(string k){

    string cop = k, ret="";
    bool f_a ;
    int i = 0 ;
    while(cop.at(i) == '0'){
        i++;
    }
    ret = cop.substr(i, cop.length());
    return ret;

}

bool zcy(string k){

    bool first_app;
    string  copy = k, first, second;
    int nums = 0;

    copy = clean_zeros(k);       
    
    if(copy.length() % 2 == 0){
        FOR(i, 0, copy.length()/2){
            if(copy.at(i) == copy.at(copy.length()-(2*i)))
                nums++;                
        }            
        
        if(nums == copy.length()/2 && copy.length()%2 == 0){
            DEBUG(copy);
            DEBUG(k);
            return true;
            
        }
        
    }
    
        return false;
}

void find(int k){
    int partial = 0, occurrences = 0; 
    int i = 1;

    while( occurrences < k ){
        stringstream ss;
        ss<<i;
        //DEBUG(ss.str());
        if(zcy(ss.str())){
            partial += i;
            occurrences++;
            DEBUG(occurrences);
        }
        i++;
    }
    sum +=partial;
}

int main(){
    cin>>k>>p;
   
    find(k);
    //DEBUG(sum);
    cout<<sum%p<<"\n";
    return 0;
}