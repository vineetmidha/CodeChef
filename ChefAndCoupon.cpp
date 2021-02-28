
// https://www.codechef.com/START1C/problems/COUPON2

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> a, vector<int> b, int d, int c){
    int costA = a[0]+a[1]+a[2];
    int costB = b[0]+b[1]+b[2];
    
    string ans;

    if (costA < 150 && costB < 150)
        ans = "NO";
    else if (costA >= 150 && costB >= 150) {
        if (2*d > c)
            ans = "YES";
        else
            ans = "NO";
    } else if (costA >= 150 || costB >= 150){
        if (d > c)
            ans = "YES";
        else
            ans = "NO";
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
  
    while (t--){
        int d, c;
        cin >> d >> c;
        
        vector<int> a;
        for (int i=0; i<3; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        vector<int> b;
        for (int i=0; i<3; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }

        solve(a,b,d,c);
  }
}

