// https://www.codechef.com/PNTR2021/problems/ONCLASS

// ************ TLE *************

#include <bits/stdc++.h>
using namespace std;

void solve(int test=0)
{
    int n, m;
    cin >> n >> m;

    vector<int> att(n+1,0);

    while (m--){
        string name;
        cin >> name;

        int roll = 0;

        for (auto c: name){
            if (isdigit(c)){
                roll = roll * 10 + c - '0';
            } else if (roll != 0) {
                break;
            }
        }

        att[roll]++;
    }

    for (int i=1; i<att.size(); i++){
        cout << att[i] << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}


