// https://www.codechef.com/MARCH21C/problems/NOTIME

#include <bits/stdc++.h>

using namespace std;

// Solution from CodeChef

int main()
{
    int n, hrs_reqd, hrs_left;

    cin >> n >> hrs_reqd >> hrs_left;

    bool flag = false;
    
    for (int i=0; i<n; i++){
        int time;
        cin >> time;
        
        if (hrs_left + time >= hrs_reqd)
            flag = true;
    }
    
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

// Original Solution

void solve(vector<int> zones, int h, int x){
    if (x >= h){
        cout << "YES" << endl;
        return;
    }

    int target = h - x;

    for (auto i: zones){
        if (i == target){
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main()
{
    int n, h, x;

    cin >> n >> h >> x;

    vector<int> zones;

    for (int i=0; i<n; i++){
        int time;
        cin >> time;
        zones.push_back(time);
    }

    solve(zones, h, x);
}
