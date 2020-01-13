
#include <iostream>
#include <string.h>
#include<stdlib.h>
#include <vector>
#include <math.h>
using namespace std;
#define DEBUG(x) cout<<#x<<": "<<x<<"\n";

int main(){
    int c;
    scanf("%d", &c);
    for(int i = 0; i< c; ++i){
        int r, c;
        scanf("%d %d", &r, &c);
        int h = c/3;
        if(c % 3 == 2){
            ++h;
        }
        int k = r/3;
        if(r % 3 == 2){
            ++k;
        }
        printf("%d", h * k );
    }
}