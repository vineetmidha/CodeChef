// https://www.codechef.com/START1C/problems/MVALUE

// UPsolved - Kushagra Nigam, Unacademy

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	
	int t;
	cin >> t;
	
	while (t--){
	
	    int n;
	    cin >> n;
	    
	    vector<ll> v(n);
	    
	    for (int i=0; i<n; i++){
	        cin >> v[i];
	    }
	    
	    sort(v.begin(), v.end());
	    
	    ll a = v[1];
	    ll b = v[0];
	    
	    ll sum1 = a * b + a - b;
	    
	    a = v[n-1];
	    b = v[n-2];
	    
	    ll sum2 = a * b + a - b;
	    
	    cout << max(sum1, sum2) << endl;
	}
	
	return 0;
}

