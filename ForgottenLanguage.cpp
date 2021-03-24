// https://www.codechef.com/problems/FRGTNLNG

#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, k;
    cin >> n >> k;

    // accept forgotten words
    vector <string> forgotten(n);

    for (int i=0; i<n; i++){
        cin >> forgotten[i];
    }

    // accept phrases

    unordered_set <string> phrases;

    for (int i=0; i<k; i++){
        int L;  // total words in a phrase
        cin >> L;

        // accept a phrase word by word

        for (int j=0; j<L; j++){
            string s;
            cin >> s;

            phrases.insert(s);
        }
    }

    for (auto w : forgotten){
        if (phrases.find(w)==phrases.end())
            cout << "NO" << " " ;
        else
            cout << "YES" << " ";
    }

    cout << endl;
}

signed main() {
    int t;
    cin >> t;
    
    while (t--){
    
        solve();

    }
    
    return 0;
}

/*
PYTHON
======

tc = int(input())

for _ in range(tc):
    n, k = list(map(int, input().split()))

    forgotten = input().split()
    
    phrases = set()
    
    for _ in range(k):
        L, *s = input().split()
        phrases.update(s)
        
    for w in forgotten:
        if w in phrases:
            print("YES", end=" ")
        else:
            print("NO", end=" ")
            
    print()
*/
