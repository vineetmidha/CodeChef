// Body Builder

// https://www.codechef.com/COOK128C/problems/BUILDB

#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while (t--)
	{
	    int n, r;
	    cin >> n >> r;
	    
	    int ex_time[n], tension[n];
	    
	    for (int i=0; i<n; i++) cin >> ex_time[i];
	    
        for (int i=0; i<n; i++) cin >> tension[i];

        if (n==1)
        {
            cout << tension[0] << endl;
        }
        else 
        {
            int current_tension = tension[0];
    
            int ans = tension[0];
        
            for (int i=1; i<n; i++)
            {
                int relax_time = ex_time[i] - ex_time[i-1];
                
                current_tension = current_tension - relax_time * r;
                
                if (current_tension < 0)
                    current_tension = 0;

                current_tension += tension[i];
                    
                ans = max(ans, current_tension) ;
            }
    
            cout << ans << endl;
        }
	}
	
	return 0;
}


