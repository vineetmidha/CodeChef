
// https://www.codechef.com/CCRC21C/problems/CHEFPAT

    
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> a){
    unordered_map<int, vector<int>> mp;
    
    for (int i=0; i<a.size(); i++){
        mp[a[i]].push_back(i);
    }

    vector<int> b;
    
    b = a;
    
    sort(b.begin(), b.end(), greater<int>());

    for (int i=0; i<b.size(); i++){
        int x = mp[b[i]].front();
        mp[b[i]].erase(mp[b[i]].begin());
        a[x] = i+1;
    }
    
    for (auto i: a){
        cout << i << " ";
    }
    
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--){
        int n;
        cin >> n;
        
        vector<int> a;
        
        for (int i=0; i<n; i++){
            int x; 
            cin >> x;
            a.push_back(x);
        }
        
        solve(a);
    }
    
	return 0;
}
