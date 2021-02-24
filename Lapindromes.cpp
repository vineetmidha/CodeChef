// https://www.codechef.com/problems/LAPIN

#include <bits/stdc++.h>
using namespace std;

void solve(string s){
    unordered_map<char,int> mp;

    for (int i=0; i<s.size()/2; i++){
        if (mp.find(s[i]) == mp.end()){
            mp[s[i]] = 1;
        } else {
            mp[s[i]]++;
        }
    }

    int start = s.size()%2==0 ? s.size()/2 : s.size()/2+1;
    
    for (int i=start; i<s.size(); i++){
        if (mp.find(s[i]) == mp.end()){
            cout << "NO" << endl;
            return;
        } else {
            mp[s[i]]--;
        }
    }
    
    for (auto i: mp){
        if (i.second != 0){
            cout << "NO" << endl;
            return;
        }
    }
    
    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--){
        string s;
        cin >> s;
        
        solve(s);
    }
    
	return 0;
}

