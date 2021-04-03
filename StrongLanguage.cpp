// https://www.codechef.com/APRIL21C/problems/SSCRIPT

#include <iostream>
using namespace std;

#define int long long

void solve(int test=0)
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int cnt = 0;
    bool flag = false;

    for (int i=0; i<n; i++){
        if (s[i]=='*'){
            if (cnt==0) 
                cnt++;
            else if (i > 0 && s[i-1]=='*'){
                cnt++;
            }
            if (cnt >= k){
                flag = true;
                break;
            }
        } else {
            cnt=0;
        }
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    for (int i=1; i<=t; i++){

        solve();

    }
    
    return 0;
}

