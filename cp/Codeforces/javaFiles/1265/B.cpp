#include<iostream>
#include<vector>
using namespace std;


void check(vector<int> lst, int x){
    int l = 0, r = x;
    bool condition = false;
    while(!condition && r <= lst.size()){
        int count = 0;
        for(int i = l; i < r; ++i){
            if(lst[i] <= x){
                ++count;
            } else {
                ++l; ++r; 
                break;
            }
        }
        if(count == x){
            condition = true;
        }
    }
    printf("%i", condition);
}

void doSomething(vector<int> lst){
    for(int x = 1; x <= lst.size(); ++x){
        check(lst, x);
    }
}

int main() {
    int c; cin >> c;
    while(c--) {
        int x; cin>>x;
        vector<int> lst;
        while(x--){
            int a; cin >> a;
            lst.push_back(a);
        }
        doSomething(lst);
        printf("\n");
    }
    return 0;
}