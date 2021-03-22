
// https://www.codechef.com/COOK127C/problems/WEIGHTBL

#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	
	while (tc--){
	    int w1, w2, x1, x2, m;
	    cin >> w1 >> w2 >> x1 >> x2 >> m;
	    
	    int wt_inc = w2 - w1;
	    int min_wt_int = x1 * m;
	    int max_wt_int = x2 * m;
	    
	    cout << (wt_inc >= min_wt_int && wt_inc <= max_wt_int) << endl;
	}
	return 0;
}
