
// https://www.codechef.com/CPT32021/problems/MIND

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	
    ll a[n];
    
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    
    sort(a,a+n);
    
    ll minDiff = a[n-1]-a[n-2];
    
    for (int i=n-1; i>0; i--){
        minDiff = min(a[i]-a[i-1], minDiff);
    }
    
    cout << minDiff;
    
	return 0;
}


