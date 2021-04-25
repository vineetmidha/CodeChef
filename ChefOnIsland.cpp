https://www.codechef.com/START3C/problems/CCISLAND

#include <iostream>
using namespace std;

void solve(int test=0)
{

    int x, y, xr, yr, d;

    cin >> x >> y >> xr >> yr >> d;

    int food = x / xr;
    int water = y / yr;

    if (min(food,water) >= d)
        cout << "Yes";
    else
        cout << "No";

    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    
    for (int i=1; i<=t; i++){
    
        solve();

    }

    return 0;
}
