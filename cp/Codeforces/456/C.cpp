#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<algorithm>
#define MAX_N 100000 + 321
#define ll long long
 
using namespace std;

int main(){
	int n, num;
	cin>>n;
	ll count[MAX_N], f[MAX_N];
	int mx  = -1;
	for(int p = 0; p< MAX_N; p++){
		count[p] = 0;
		f[p] = 0;	
	}
	int m = n;
	while(m > 0){
		cin>>num;
        mx = max(mx, num);
		count[num]++;	
		m--;
	}
	f[1] = count[1];
	for(int k = 2; k <= MAX_N; k++){
        ll y = count[k] * k;
		f[k] = max(f[k- 1], f[k- 2] + y);
	}
    (n > mx) ? 
        cout<<f[n]<<"\n" : cout<< f[mx] << "\n";
	return 0;
}
