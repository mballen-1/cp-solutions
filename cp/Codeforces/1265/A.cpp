#include <bits/stdc++.h>
using namespace std;
 
int pos[200000];
int x, c, a;

void check(){
    for(int i = 0; i< x; ++i){
            cin >> a;
            pos[a - 1] = i;
    }
    int l = x;
    int r = 0;
    string ans = "";
    for (int i = 0; i < x; i++)
    {
        l = min(l, pos[i]);
        r = max(r, pos[i]);
        if (r - l == i)
            ans += '1';
        else
            ans += '0';
    }
    cout << ans << "\n";
}
 
int main() {
    cin >> c;
    while(c--) {
        cin>>x;
        check();
    }
    return 0;
}