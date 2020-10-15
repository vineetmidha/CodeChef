// https://www.codechef.com/LRNDSA01/problems/CONFLIP

#include <iostream>
using namespace std;

int solve (int i, int n, int q){
    int ans = -1;
    if (n%2==0){
        ans = n/2;
    } else {
        if (i==q)
            ans = n/2;
        else
            ans = n/2+1;
    }
    return ans;
}
int main() {
	
	int t;
	
	cin >> t;
	
	while (t-- > 0) {
    	int games;
    	
    	cin >> games;
    	
    	while (games-- > 0){
        	int i, n, q;
    
    	    cin >> i >> n >> q;
    	    
    	    cout << solve (i, n, q) << endl;
    	}
	    
	}
	return 0;
}

/*

Example

Input:
1
2
1 5 1
1 5 2

Output:
2
3

*/
