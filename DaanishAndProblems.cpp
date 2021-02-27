// Lunchtime February 2021

// https://www.codechef.com/LTIME93C/problems/DIV03

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> a, int k){
    int len = a.size();
    int last;
    for (int i=len-1; i>=0; i--){
        if (a[i]!=0){
            last = i;
            break;
        }
    }

    if (k==0){
        cout << last+1 << endl;
        return;
    }

    int sum=0;
    for (int i=len-1; i>=0; i--){
        if (sum + a[i] > k){
            cout << i+1 << endl;
            return;
        }

        sum += a[i];

        if (sum == k) {
            last = i;
            break;
        }
    }

    for (int i=last-1; i>=0; i--){
        if (a[i] != 0){
            last = i;
            break;
        }
    }

    cout << last+1 << endl;
}

int main()
{
    int t;
    cin >> t;
  
    while (t--){
        vector<int> a;

        for (int i=0; i<10; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }

        int k;
        cin >> k;

        solve(a,k);        
  }
}
