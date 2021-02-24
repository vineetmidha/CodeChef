// https://www.codechef.com/CCRC21C/problems/BMI

#include <iostream>
using namespace std;

void solve (int m, int h){
    int bmi = m/(h*h);
    int category;
    
    if (bmi <= 18)
        category = 1;
    else if (bmi <= 24)
        category = 2;
    else if (bmi <= 29)
        category = 3;
    else
        category = 4;
        
    cout << category << endl;
}

int main() {
	int t;
	cin >> t;
	
	while (t--){
	    int m, h;
	    cin >> m >> h;
	    
	    solve(m,h);
	}
	
	return 0;
}
