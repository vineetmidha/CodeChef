

https://www.codechef.com/START3C/problems/HIRETEST

#include <iostream>
using namespace std;

void solve(int test=0)
{
    int n, m, x, y;

    cin >> n >> m >> x >> y;

    for (int i=1; i<=n; i++)
    {
        string s;
        cin >> s;

        int f=0, p=0;

        for (auto c: s)
        {
            f += c=='F';
            p += c=='P';
        }

        cout << (f >= x || (f == x-1 && p >= y));

    }
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

