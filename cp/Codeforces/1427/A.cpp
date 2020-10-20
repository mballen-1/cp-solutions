#include <bits/stdc++.h>

using namespace std;

int t, n, k , ai;

int main() {
  scanf("%d", &t);
  while (t--) {
      scanf("%d", &n);
      vector<int> ps;
      vector<int> ns;
      int sum = 0;
      for (int i = 0; i < n; ++i){
          int x;
          cin >> x;
          ps.push_back(x);
          sum += x;
      }
      if (sum == 0){
           printf("NO\n"); 
      } else {
          printf("YES\n");
          if (sum > 0){
              sort(ps.begin(), ps.end());
              while(ps.size() > 0){
                    cout << ps.back() << " ";
                    ps.pop_back();
              }
          } else {
              sort(ps.begin(), ps.end(), greater<int>());
              while(ps.size() > 0){
                    cout << ps.back() << " ";
                    ps.pop_back();
              }
          }          
          cout << "\n";
      }    
  }
  return 0;
}
