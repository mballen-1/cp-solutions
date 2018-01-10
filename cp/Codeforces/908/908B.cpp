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
#define MAXN  50

char mat[MAXN][MAXN];
int com[24][4];
int my_ints = {0, 1, 2, 3};

int main(){

    FOR(i, 0 , 6)
        com[i][0] = 0;
    FOR(i, 6 , 12)
        com[i][0] = 1;
    FOR(i, 12 , 18)
        com[i][0] = 2;
    FOR(i, 18 , 24)
        com[i][0] = 3;
    
    FOR(i,0, 24 ){       
            switch(i%6){
                case(0):
                    FOR(j, 0, 3){
                        char x = a[j];
                        int ia = x - '0';
                        com[i][j+1] = ia;
                    }                     
                    break;
                case(1):
                    FOR(j, 0, 3){
                        char x = b[j];
                        int ia = x - '0';
                        if(com[i][0] ==  ia){
                            int aux = com[i][0];
                            com[i][j+1] = 0;

                        }
                        
                        //com[i][j+1] = ia;
                    }

                    break;
                case(2):
                    FOR(j, 0, 3){
                        char x = c[j];
                        int ia = x - '0';
                        com[i][j+1] = ia;
                    }
                    break;
                case(3):
                    FOR(j, 0, 3){
                        char x = d[j];
                        int ia = x - '0';
                        com[i][j+1] = ia;
                    }
                    break;
                case(4):
                    FOR(j, 0, 3){
                        char x = e[j];
                        int ia = x - '0';
                        com[i][j+1] = ia;
                    }
                    break;
                case(5):
                    FOR(j, 0, 3){
                        char x = f[j];
                        int ia = x - '0';
                        com[i][j+1] = ia;
                    }

            }
    }

    FOR(i, 0 ,24){
        FOR(j, 0, 4){
            cout<< com[i][j]<< " ";
        }
        cout<<"\n";
    }           
    
    return 0;
}