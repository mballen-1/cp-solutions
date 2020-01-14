
#include <iostream>
#include <string.h>
#include<stdlib.h>
#include <vector>
#include <math.h>
using namespace std;
#define DEBUG(x) cout<<#x<<": "<<x<<"\n";

int main(){
    int x; scanf("%d", &x);
    int l, r;
    for(int i = 0; i< x; ++i){
        scanf("%d %d", &l, &r);
        printf("%s\n", l < r ? "<": l > r ? ">" : "=");
    }
}