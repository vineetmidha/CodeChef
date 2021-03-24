// https://www.codechef.com/COOK127A/problems/CONDEL

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n+1, 0), prefix(n+1, 0);

    for (int i=1; i<=n; i++){
        cin >> a[i];
        prefix[i] = prefix[i-1] + a[i];
    }

    int total_ones = prefix[n];
    int min_ones = k; // max ones can be k

    // sliding window

    for (int i=k; i<=n; i++){
        int ones = prefix[i] - prefix[i-k];  // ones in the current window
        min_ones = min(min_ones, ones);
    }

    int cost_min_ones = min_ones * (min_ones+1) / 2;
    int cost_balance = total_ones - min_ones;

    int ans = cost_min_ones + cost_balance;

    cout << ans << endl;
}

signed main() {
    int t;
    cin >> t;
    
    while (t--){
    
        solve();

    }
    
	return 0;
}
