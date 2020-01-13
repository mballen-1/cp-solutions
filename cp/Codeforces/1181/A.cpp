#include <bits/stdc++.h>
using namespace std;

long long x, y, z;

int main() {
   cin>>x>>y>>z;
   long long k = (x+y)/z;
   long long l = x/z + y/z;
   if(l == k){
       cout << k << " " << 0;
       return 0;
   } else {
       cout <<k << " " << min(z-(x%z), z-(y%z));
   }
   return 0;
}