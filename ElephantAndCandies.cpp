// https://www.codechef.com/problems/LECANDY

#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	
	while (tc--){
	    int n, c;
	    cin >> n >> c;
	    
	    int sum = 0;
	    
	    for (int i=0; i<n; i++){
	        int x;
	        cin >> x;
	        sum += x;
	    }
	    
	    if (c >= sum)
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}
