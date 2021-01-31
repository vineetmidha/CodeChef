
// https://www.codechef.com/LTIME92C/problems/EVENDIFF/

// Q-2

#include <iostream>
using namespace std;

void solve(int a[], int n)
{
	int odds = 0;
	int evens = 0;
	for (int i=0; i<n; i++){
        if (a[i]%2==0)
            evens++;
        else
            odds++;
	}
	cout << min(evens,odds) << endl;
}
int main() {
	int tc;
	cin >> tc;
	
	while (tc--){
    	int n;
    	cin >> n;

        int a[n];    	
    	for (int i=0; i<n; i++){
    	    cin >> a[i];
    	}
	    solve(a,n);
	}
	return 0;
}
