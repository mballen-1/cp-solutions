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
#include <fstream>
string info[10];

int main(){
    string input = "";
    std::ofstream outfile ("test.txt");
    FOR(x, 0 , 10){
        cout<<x<<"\n";
        getline(cin, input);
        info[x] = input;
        if(info[x] == "great!" || info[x] == "cool" || info[x] == "not bad" || info[x] == "don't touch me" || info[x]=="don't think so"){
            cout<<"normal";
            return 0;
        }
        if(info[x] == "don't even" || info[x] == "are you serious?" || info[x] == "go die in a hole" || info[x] == "worse" || info[x]=="terrible" || info[x]=="no way"){
                    cout<<"grumpy";
                    return 0;
        }
        outfile<<info[x]<<"\n";
        outfile.flush();
     }
     outfile.close();
     //(normal>grumpy) ? cout<<"normal": cout<<"grumpy";
    return 0;
}