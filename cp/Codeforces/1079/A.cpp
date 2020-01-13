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
#define FOR(i, a, b) for(int i= a; i< b ; i++)
#define FORD(i, b, a) for(int i= b  i >  a ; i--)
#define DEBUG(x) cout<<#x<<":"<<x<<"\n";
#define MAXN  100000000000000000
#include <string>
#include <iostream>

void printFormattedString(string name , int rows){
    cout<<"\n";
    FOR(i, 0, rows){
        FOR (j, i*(name.length()/rows), i*(name.length()/rows) + (name.length()/rows)){
            cout<<name[j];
        }
        cout<<"\n";
    }
}

void printFinalString(string name, int plus, int divisor) {
    int starsNeeded = ((name.length()/ divisor) - plus);
    string result = name;
    FOR(i, 1, starsNeeded +1){
        result.insert( (name.length()/ divisor * i )-1, "*");
    }
    cout<<divisor+1<<" "<<(name.length()/ divisor);
    printFormattedString(result, divisor +1 );

}

void fixString( string name ){
    int divisor  = 1;
    int mod5 = name.length() % 5;
    int mod4 = name.length() % 4; 
    int mod3 = name.length() % 3;
    int mod2 = name.length() % 2;
    int plus = min(mod5, min(min(mod4, mod3), mod2));
    
    
    if(plus == mod2 && mod2 != mod4 && mod2 != mod3 && mod5 != mod2){
        divisor = 2;
    }
    else{ 
        if(plus == mod3 && mod5 != mod3 && mod4 != mod3 && mod3 != mod2){
                divisor = 3;
        }
            else{
                if(plus == mod4 && mod5 != mod4 && mod4 != mod3 && mod4 != mod2){
                    divisor = 4;
                }
                else{
                    if(plus == mod5 && mod5 != mod2 && mod4 != mod5 && mod3 != mod5){
                        divisor = 5;
                    }
                    else{
                        FOR(i, 1, 6){
                            if(plus == name.length() % i){
                                divisor = i;
                                break;
                            }
                        }
                    }
                    
                }
            }
    }
    
    printFinalString(name, plus, divisor);

}

int main(){
    string name;
    cin>> name;
    int mylength = name.length();
    if( mylength < 20){
        cout <<1<<" "<< mylength;
        printFormattedString(name, 1);
        return 0;
    }
    if( mylength % 2 == 0){
        if(mylength / 2 < 20){
            cout<<2<<" "<< mylength/2;
            printFormattedString(name, 2);
            return 0;
        }
    }
    if( mylength % 3 == 0){
        if(mylength / 3 < 20){
            cout<<3<<" "<< mylength/3;
            printFormattedString(name, 3);
            return 0;
        }
    }
    if( mylength % 4 == 0){
        if(mylength / 4 < 20){
            cout<<4<<" "<< mylength/4;
            printFormattedString(name, 4);
            return 0;
        }
    }
    if( mylength % 5 == 0){
        if(mylength / 5 < 20){
            cout<<5<<" "<< mylength/5;
            printFormattedString(name, 5);
            return 0;
        }
    }
    
    else{
        fixString(name);
    }
    return 0;
}