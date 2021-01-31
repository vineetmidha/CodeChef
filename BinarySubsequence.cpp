
// https://www.codechef.com/problems/BINSUBS

// Q-4

#include <bits/stdc++.h>

using namespace std;

int solve(string s){
    int tot0 = 0, tot1 = 0;
    
    for (auto c: s){
        if (c == '0')
            tot0++;
        else
            tot1++;
    }
    
    int ans = min (tot0, tot1);
    
    int cur0 = 0, cur1 = 0;
    
    for (auto c : s){
        if (c == '0')
            cur0++;
        else
            cur1++;
            
        ans = min(ans, cur1 + (tot0 - cur0));
    }
    
    return ans;
}

int main() {
    int tc;
    cin >> tc;
    
    while (tc--){
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        cout << solve(s) << endl;
    }
	return 0;
}
