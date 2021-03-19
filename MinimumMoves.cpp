// https://www.codechef.com/problems/SALARY

#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc; 
	cin >> tc;
	
	while (tc--){
	    int n;
	    cin >> n;
	    
	    int min = INT_MAX;
        int salary;
        int sum = 0;
        
	    for (int i=0; i<n; i++){
	        cin >> salary;
	        sum += salary;
	        if (salary < min) min = salary;
	    }
	    
	    cout << sum - min*n << endl;
	}
	return 0;
}
