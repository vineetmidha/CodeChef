// https://www.codechef.com/PNTR2021/problems/IPL2021

#include <iostream>
using namespace std;

#define int long long

int m = 1e9+7;

void solve(int test=0)
{
    int r, c;
    cin >> r >> c;

    if (r % 2 == 0)
        r = r/2;
    else
        r = (r+1)/2;

    if (c % 2 == 0)
        c = c/2;
    else
        c = (c+1)/2;

    cout << (r%m * c%m)%m << endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    for (int i=1; i<=t; i++){
    
        solve();

    }
    
    return 0;
}

