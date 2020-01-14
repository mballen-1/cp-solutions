
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <math.h>
#include <map>
using namespace std;
#define debug(x) cout << #x << ": " << x << "\n";
typedef long long ll;
using namespace std;

int main()
{
    int n, k, m;
    ll x, cnt = 0;
    char c; string l;
    scanf("%d", &n);
    map<char, ll> mymap;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &k);
        for (int j = 0; j < k; ++j)
        {
            scanf("%s%d", &c, &x);
            mymap[c] = x;
        }
        scanf("%d", &m);
        cin.ignore();
        for (int p = 0; p < m; ++p)
        {   
            getline(cin, l);
            for (int q = 0; q < l.length(); ++q)
            {
                ll tent = mymap[l[q]];
                printf("tent = %f\n", tent);
                printf("c = %c\n", l[q]);
                if (tent != 0)
                {
                    cnt += tent;
                }
            }
        }
    }
    string cop = to_string(cnt);
    string dol;
    if (cop.length() > 2)
    {
        for (int i = 0; i < cop.length() - 2; ++i)
        {
            dol += cop[i];
        }
        dol += '.';
        dol += cop[cop.length() - 2];
        dol += cop[cop.length() - 1];
        cout << dol << "$\n";
    } else {
        cout <<"0."<<cnt<<"$\n";
    }
}