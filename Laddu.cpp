// https://www.codechef.com/LRNDSA01/problems/LADDU

#include <iostream>
using namespace std;

int solve(string activities[], int n, int rank[], int severity[], string origin) {
    int laddus = 0;
    
    for (int i=0; i<n; i++){
        if (activities[i] == "CONTEST_WON"){
        	laddus += 300;

        	if (rank[i] < 20)
        		laddus += 20 - rank[i];
        
        } else if (activities[i] == "TOP_CONTRIBUTOR") {
        	laddus += 300;
        } else if (activities[i] == "BUG_FOUND") {
        	    laddus += severity[i];
        } else if (activities[i] == "CONTEST_HOSTED") {
            laddus += 50;
        }
    }
    
    if (origin == "INDIAN")
        return laddus / 200;
    else
        return laddus / 400;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    
    cin >> t;
    
    while (t-- > 0){
        
        int total_activities;
        string origin;
        
        cin >> total_activities;
        cin >> origin;
        
        string activities[total_activities];
        int rank[total_activities], severity[total_activities];
        
        for (int i=0; i<total_activities; i++){
            cin >> activities[i];
            
            if (activities[i] == "CONTEST_WON"){
                cin >> rank[i];
            } else if (activities[i] == "BUG_FOUND") {
                cin >> severity[i];
            }
        }
        
        cout << solve(activities, total_activities, rank, severity, origin) << "\n";
    }
	return 0;
}


/*

Input:
2
4 INDIAN
CONTEST_WON 1
TOP_CONTRIBUTOR
BUG_FOUND 100
CONTEST_HOSTED
4 NON_INDIAN
CONTEST_WON 1
TOP_CONTRIBUTOR
BUG_FOUND 100
CONTEST_HOSTED

Output:
3
1

*/
