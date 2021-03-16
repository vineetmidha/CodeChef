
// https://www.codechef.com/START1C/problems/COUPON2

#include <bits/stdc++.h>
using namespace std;

// Solution by Kushagra Nigam - CodeChef

int main()
{
    int t;
    cin >> t;
  
    while (t--){
        int d, c;
        cin >> d >> c;

        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;
        
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;

        int total_cost_wc = a1 + a2 + a3 + b1 + b2 + b3 + 2*d; // without coupon

        int total_cost_c = c + a1 + a2 + a3 + b1 + b2 + b3; // with coupon
        
        if (a1+a2+a3 < 150)
            total_cost_c += d;
            
        if (b1+b2+b3 < 150)
            total_cost_c += d;
            
        if (total_cost_c < total_cost_wc)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
  }
}

// Original solution

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

