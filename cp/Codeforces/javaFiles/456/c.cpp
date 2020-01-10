#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<algorithm>
#define MAX_N 100000
#define ll long long
 
using namespace std;
int c[MAX_N], f[MAX_N];
 
int main(){
	int n, num;
	cin>>n;
	
	for(int p= 0; p< MAX_N; p++){
		c[p] = 0;
		f[p] = 0;	
	}
	
	int m = n;
	while(m > 0){
		cin>>num;
		c[num]++;	
		m--;
	}
	
	f[1] = c[1];
	for(int k = 2; k <= n; k++){
		int twoPrevPlusCountDotk = f[k- 2]+ (c[k]*k);
		f[k] = max(f[k- 1], twoPrevPlusCountDotk);	
	}
	
	cout<<f[n];
	return 0;
}
 