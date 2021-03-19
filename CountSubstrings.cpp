
// https://www.codechef.com/problems/CSUB

#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	
	while (tc--){
	    int n;
	    cin >> n;
	    
	    string s;
	    cin >> s;
	    
	    long long count = 0;
	    
	    for (auto c : s){
	        count += c=='1';
	    }
	    
	    cout << (count * (count + 1) / 2) << endl;
	}
	return 0;
}


