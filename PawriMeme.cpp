
// https://www.codechef.com/COOK127C/problems/PAWRI

#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	
	while (tc--){
	    string s;
	    cin >> s;
	    
	    string t = "party";
	    
	    for (int i=0; i<s.size()-4; i++){
	        if (s.substr(i,t.size())==t){
	            s[i+2] = 'w';
	            s[i+3] = 'r';
	            s[i+4] = 'i';
	        }
	    }
	    
	    cout << s << endl;
	}
	return 0;
}

/*
Python

tc = int(input())

for _ in range(tc):
    s = input()
    print(s.replace('party','pawri'))
*/

