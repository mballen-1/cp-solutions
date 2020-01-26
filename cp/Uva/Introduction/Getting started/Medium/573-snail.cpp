using namespace std;
#include <bits/stdc++.h>
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


void calc(float h, float u, float d, float f){
       float cur = 0, curu = u; 
       int day = 0;
       float less = f * u / 100;
       while(cur >= 0 && cur < h){
            if(day == 0){
                if(curu > 0)
                    cur += curu;
                if(cur >h)
                    break;
                else
                    cur -= d;    
                ++day;

            }
            else {   
                curu -= less;
                if(curu > 0)
                    cur += curu;
                if(cur >h)
                    break;
                else
                    cur -= d;                
                ++day;
            }
       }

       if(cur >= h){
           cout<<"success on day "<<++day<<"\n";
       } 
       else{
           cout<<"failure on day "<<day<<"\n";
       }

}


string lol;
int main(){
    float h , u , d , f, count = 0;

    while(!cin.eof()){
        cin>>h>>u>>d>>f;
        if (h > 0){
            calc(h, u, d, f);
        }
        else
            return 0;
    }
}