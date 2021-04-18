// Chocolate Monger

// https://www.codechef.com/COOK128C/problems/CM164364

#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        
        int a[n];
        unordered_set<int> s;
        
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);    
        }
        
        int d = s.size();
        int bal = n - x;
        
        int ans = min(bal, d);
        
        cout << ans << endl;
    }
    
	return 0;
}
