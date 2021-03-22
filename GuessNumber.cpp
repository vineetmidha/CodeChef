
// https://www.codechef.com/COOK127A/problems/GUESSIT

#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	
	while (tc--){
	    for (int i=1; i<=1000; i++){
	        cout << (i*i) << endl;
	        int ans;
	        cin >> ans;
	        if (ans==1) break;
	    }    
	}
	
	return 0;
}

