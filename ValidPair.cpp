// https://www.codechef.com/APRIL21C/problems/SOCKS1

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	if (a==b || a==c || b==c)
	    cout << "YES\n";
	else
	    cout << "NO\n";
	  
	return 0;
}

