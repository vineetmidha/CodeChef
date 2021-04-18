
// Passing Marks

// https://www.codechef.com/COOK128C/problems/PSGRADE

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--)
	{
	    int amin, bmin, cmin, tmin, a, b, c;
	    cin >> amin >> bmin >> cmin >> tmin >> a >> b >> c;
	    
	    int x = (a >= amin && b >= bmin && c >= cmin);
	    int y = (a+b+c >= tmin);
	    
	    if (x && y)
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}


