
// https://www.codechef.com/CCRC21C/problems/TOTSCR

#include <iostream>
using namespace std;

void solve(int points[], string verdict[], int n, int k){
    for (int i=0; i<n; i++){
        string scores = verdict[i];
        
        long total = 0;
        
        for (int j=0; j<scores.size(); j++){
            if (scores[j]=='1'){
                total += points[j];
            }
        }
        
        cout << total << endl;
    }
}

int main() {
	int t;
	cin >> t;
	
	while (t--){
	    int n, k;
	    cin >> n >> k;
	    
	    int scores[k];
	    
	    for (int i=0; i<k; i++){
	        cin >> scores[i];
	    }
	    
	    string verdict[n];
	    
	    for (int i=0; i<n; i++){
	        cin >> verdict[i];
	    }
	    
	    solve(scores, verdict, n, k);
	}
	
	return 0;
}

