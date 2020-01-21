
#include <iostream>
#include <string.h>
#include<stdlib.h>
#include <vector>
#include <math.h>
using namespace std;
#define DEBUG(x) cout<<#x<<": "<<x<<"\n";

int main(){
    int x; scanf("%d", &x);
    int r, c, m, n;
    for(int i = 0; i< x; ++i){
        scanf("%d %d", &r, &c);
        printf("%d\n", (r/3) * (c/3) );
    }
}