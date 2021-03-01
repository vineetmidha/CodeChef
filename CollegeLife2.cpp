
// https://www.codechef.com/START1C/problems/COLGLF2

// Short code - codechef solution

#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
  
    while (t--){
        int seasons;
        cin >> seasons;

        vector<int> intro;

        for (int i=0; i<seasons; i++)
        {
            int x;
            cin >> x;
            intro.push_back(x);
        }

        ll totalSum = 0;

        for (int i=0; i<seasons; i++)
        {
            int episodes;
            cin >> episodes;
            
            for (int j=0; j<episodes; j++) {
                int duration;
                cin >> duration;

                if (j==0)
                    totalSum += duration;
                else
                    totalSum += duration - intro[i];
            }
        }

        cout << totalSum << endl;
  }
}

// OR

// Got WA because of using int (instead of long long int) for sum and episum

void solve(vector<int> &intro, vector<vector<int>> &durations){
    long long int sum = 0;

    for (int i=0; i<durations.size(); i++){
        vector<int> episodes = durations[i];

        long long int episum = episodes[0];

        if (episodes.size() > 1){            
            for (int j=1; j<episodes.size(); j++){
                episum += episodes[j] - intro[i];                
            }
        }

        sum += episum;
    }

    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
  
    while (t--){
        int seasons;
        cin >> seasons;

        vector<int> intro;

        for (int i=0; i<seasons; i++)
        {
            int x;
            cin >> x;
            intro.push_back(x);
        }

        vector<vector<int>> episodeDurations;

        for (int i=0; i<seasons; i++)
        {
            int episodes;
            cin >> episodes;
            
            vector<int> durations;

            for (int j=0; j<episodes; j++) {
                int x;
                cin >> x;
                durations.push_back(x);
            }

            episodeDurations.push_back(durations);
        }

        solve(intro, episodeDurations);
  }
}
