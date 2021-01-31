
// https://www.codechef.com/LTIME92C/problems/INTRVS

// Q-4

#include <bits/stdc++.h>

using namespace std;

void solve(int a[], int n, int k)
{
    int solved=0, slow=0, ones=0;
    
	for (int i=0; i<n; i++){
	    if (a[i] != -1){
	        solved++;
	    }
	    if (a[i] > k){
	        slow++;
	    }
	    if (a[i] == 0 || a[i] == 1)
	        ones++;
	}
	if (solved < ceil(n/2.0))
	    cout << "Rejected" << endl;
	else if (slow > 0)
	    cout << "Too Slow" << endl;
	else if (ones == n)
	    cout << "Bot" << endl;
	else
	    cout << "Accepted" << endl;
	   
}
int main() {
	int tc;
	cin >> tc;
	
	while (tc--){
    	int n, k;
    	cin >> n >> k;

        int a[n];    	
    	for (int i=0; i<n; i++){
    	    cin >> a[i];
    	}
	    solve(a,n,k);
	}
	return 0;
}
