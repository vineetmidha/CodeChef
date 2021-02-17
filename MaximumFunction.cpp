
// Q-2: Maximum Function

// https://www.codechef.com/FEB21A/problems/MAXFUN

/*
Upsolved: 
Consider 3 points on a 1-D line. Now find the |x-y|+|y-z|+|z-x|.. 
This will be equal to 2*(z-x), for any value of y, where z is the largest point and x is the smallest point on the line. 
*/

#include <iostream>
using namespace std;

long solve(long a[], int n){
    long mn=a[0], mx=a[0];
    
    for (int i=1; i<n; i++){
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    
    //cout << mx << " " << mn << endl;
    return 2*(mx-mn);
}
int main() {

    int t;
    cin >> t;
    
    while (t--){
        int n;
        cin >> n;

        long a[n];
        
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        
        cout << solve(a,n) << endl;
    }
    
    
    
	return 0;
}
