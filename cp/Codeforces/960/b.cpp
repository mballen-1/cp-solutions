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

//int a[1000], b[1000];
int n, k1, k2;
int a[1000], b[1000];
int min = -1;

int findIndex(){

    int difference = 0;
    int xd = 0;

    FOR(i, 0 , n){
        int previous = difference;
        difference = max(previous, abs(a[i]-b[i]));
        if(previous < difference){
            xd = i;
        }
    }
    if (difference == 0){
        return n-1;
    }
    else{
        return xd;
    }
}

void performOperation(char reference, int index){
    switch(reference){
        case 'a':
            if( a[index] > b[index]){
                a[index] -= 1;
            }
            else{
                a[index] += 1;
            }
            break;
        case 'b':
            if( b[index] > a[index]){
                b[index] -= 1;
            }
            else{
                b[index] += 1;
            }
            break;
    }
}

void operate(int instruction){
    int i = findIndex();

    if( i >= 0){
        if(instruction == 0){
            performOperation('a', i);
        }
        else{
            performOperation('b', i);
        }
    }
}

int findError(){
    int e = 0;
    FOR(i, 0, n){
        e += pow((a[i]-b[i]),2);
    }
    return e;
}


int main(){
    cin>>n>>k1>>k2;

    FOR(i, 0, n){
        cin>>a[i];
    }
    FOR(i, 0, n){
        cin>>b[i];
    }
    FOR(i, 0, k1){
        operate(0);
    }

    FOR(i, 0, k2){
        operate(1);
    }
    cout<<findError();
    return 0;
}