// https://www.codechef.com/MARCH21C/problems/GROUPS

#include <bits/stdc++.h>
using namespace std;

void solve(string &s){
    int grp = 0;

    for (int i=0; i<s.size(); i++){
        if (s[i]=='1'){
            for (; i<s.size(); i++){
                if (s[i]=='0')
                    break;
            }
            grp++;
        }
    }
    cout << grp << endl;
}

void solve2(string &s){
    int flag = 0;
    int grp = 0;
    for (int i=0; i<s.size(); i++){
        if (s[i]=='1'){
            flag=1;
        } else if (flag){
            flag=0;
            grp++;
        }
    }
    if (s[s.size()-1]=='1') // to take care of last group
        grp++;
    cout << grp << endl;
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

