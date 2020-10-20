#include <bits/stdc++.h>

using namespace std;

int t, n, k , ai;

int main() {
  scanf("%d", &t);
  while (t--) {
      scanf("%d %d", &n, &k);
      vector<int> a(n);
      for (auto &it : a) cin >> ai;
      map<int, int> cnt;      
      int mx = 0;      
      for (auto &it : a){
        if(it % k == 0) continue;
        int ms = k - (it % k); 
        ++cnt[ms];
        mx = max(mx, cnt[ms]);
      }
      long long ans = 0;
      for (auto [key, value] : cnt) {
        if(value == mx){
          ans = 1LL * k * (value - 1) + (key + 1);
        }
      }

      printf("%d\n", ans);      
  }
  return 0;
}
