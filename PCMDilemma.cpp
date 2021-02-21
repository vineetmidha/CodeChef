
// Break The Server Contest (Unrated)

// Q-1: PCM Dilemma

// https://www.codechef.com/CCHI2021/problems/CCBTS01

#include <iostream>
using namespace std;

void solve(string s){
    bool p=false, c=false, m=false;
    for (int i=0; i<s.size(); i++){
        if (s[i]=='P') p=true;
        else if (s[i]=='C') c=true;
        else if (s[i]=='M') m=true;
    }
    if (p && c && m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
	int t;
	cin >> t;
	
	while (t--){
	    string s;
	    cin >> s;
	    
	    solve(s);
	}
	
	return 0;
}

/*
Input:
3
PCM
CCP
CPM

Output:
YES
NO
YES
*/
