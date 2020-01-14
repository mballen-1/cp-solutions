#include<iostream>
#include <stdio.h>
#include <string.h>
#include<math.h>
#include<vector>
#include<algorithm>
#define MAX_N 100000 + 321
#define ll long long
 
using namespace std;
int main(){
    int st, a, b, c;
    while (scanf("%d%d%d%d", &st, &a, &b, &c) && (st || b || a || c))
    {
        int count = 1080;
        count += ((st >= a) ? (st - a) : (st + 40 - a)) * 9;
        count += ((a > b) ? (40 - a + b) : (b - a)) * 9;
        count += ((b >= c) ? (b - c) : (b + 40 - c)) * 9;
        printf("%d\n", count);
    }
    return 0;
}