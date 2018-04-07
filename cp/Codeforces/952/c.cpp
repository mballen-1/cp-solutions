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
#include <algorithm>
#include <functional>
#include <array>
#include <iostream>



int main(){
    int x; cin>>x;
    int nums[10];

    FOR(i, 0, x){
            cin>>nums[i];
            //cout << nums[i]<<":";
        }



    FOR(i, 0, 10){
            cout<<nums[i]<<",";
        }

    vi myvector(nums, nums+x);
    sort(myvector.begin(), myvector.end(), greater<int> ());
    cout<<"after sort"<<"\n";
    FOR(i, 0, 10){
                cout<<myvector[i]<<",";
            }


    FOR(i, 1 , x){
        //cout<<nums[i]<<" ";
        if (abs(nums[i] - nums[i-1]) > 1){
            cout<<"NO";
            return 0;
         }

    }

    cout<<"YES"<<"\n";
    return 0;
}