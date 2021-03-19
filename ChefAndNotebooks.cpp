
// https://www.codechef.com/problems/CNOTE

#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	
	while (tc--){
	    int x, y, k, n;
	    cin >> x >> y >> k >> n;
	    
	    bool ans = false;
	    
	    for (int i=0; i<n; i++){
	        int pages, price;
	        cin >> pages >> price;
	        
            if (price <= k && pages + y >= x){
                ans = true;
            }
	    }
	    
	    if (ans){
	        cout << "LuckyChef" << endl;
	    } else {
	        cout << "UnluckyChef" << endl;
	    }
	}
	
	return 0;
}
