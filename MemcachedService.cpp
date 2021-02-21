
// Break The Server Contest (Unrated)

// Q-2: Memcached Service

// https://www.codechef.com/CCHI2021/problems/CCBTS02

#include <iostream>
using namespace std;

void solve(string s[], int n){
    bool error = false;
    bool started = false;
    
    for (int i=0; i<n; i++){
        if (s[i]=="start" || s[i]=="restart"){
            started = true;
        } else if (s[i]=="stop"){
            if (!started){
                error = true;
                break;                
            } else {
                started = false;
            }
        }
    }
    
    if (error)
        cout << "404" << endl;
    else
        cout << "200" << endl;
}

int main() {
	int t;
	cin >> t;
	
	while (t--){
	    int n;
	    cin >> n;
	    
	    string s[n];
	    for (int i=0; i<n; i++){
	        cin >> s[i];
	    }
	    
	    solve(s,n);
	}
	return 0;
}

/*

Sample Input
5
2
start stop
2
restart stop
3
start restart stop
3
start stop stop
1
stop

Sample Output
200
200
200
404
404

*/
