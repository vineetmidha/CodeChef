
// https://www.codechef.com/LTIME92C/problems/SUMPOS

// Q-1

#include <iostream>
using namespace std;

void solve(int x, int y, int z){
    if (x == y + z || y == x + z || z == x + y)
        cout << "YES";
    else
        cout << "NO";
}
int main() {
	int n;
	cin >> n;
	
	while (n--){
    	int a, b, c;
    	cin >> a >> b >> c;
    	solve (a, b, c);
    	cout << endl;
	}
	return 0;
}
