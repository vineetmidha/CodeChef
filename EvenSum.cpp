
// https://www.codechef.com/LTIME92C/problems/EVENGAME

// Q-3

#include <iostream>
using namespace std;

#define ll long long int

int main() {
    
	ll tc;
	cin >> tc;
	
	while (tc--){
    	ll n;
    	cin >> n;

        ll sum = 0;
    	for (ll i=0; i<n; i++){
    	    ll x;
    	    cin >> x;
    	    sum += x;
    	}

        cout << (sum%2==0 ? 1 : 2) << endl;	    
	}
	
    return 0;
}
