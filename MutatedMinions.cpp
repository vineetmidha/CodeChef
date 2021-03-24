
// https://www.codechef.com/problems/CHN15A

#include <iostream>
using namespace std;

#define int long long

signed main() {
	int tc;
	cin >> tc;
	
	while (tc--){
	    int n, k;
	    cin >> n >> k;
	    
	    int ans = 0;
	    
	    for (int i=1; i<=n; i++){
	        int x;
	        cin >> x;
	        ans += (x+k)%7==0;
	    }
	    
	    cout << ans << endl;
	}
	return 0;
}

