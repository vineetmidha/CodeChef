// https://www.codechef.com/LRNDSA01/problems/CARVANS

#include <iostream>
using namespace std;

int solve(int speeds[], int n){
    
    if (n==1)
        return 1;
    
    int count = 1;
    int currentMaxSpeed = speeds[0];
    
    for (int i=1; i<n; i++){
        if (speeds[i] < currentMaxSpeed){
            count++;
            currentMaxSpeed = speeds[i];
        }
    }
    
    return count;
}
int main() {
	
	int t;
	
	scanf("%d", &t);
	
	while (t-- > 0){
	    int n;
	    scanf("%d", &n);
	    
	    int speeds[n];
	    
	    for (int i=0; i<n; i++){
	        scanf("%d", &speeds[i]);
	    }
	    
	    cout << solve(speeds, n) << "\n";
	}
	
	return 0;
}


/*

Input:
3
1
10
3
8 3 6
5
4 5 1 2 3

Output:
1
2
2

*/
