
// Lunchtime February 2021

// Smallest Possible Whole Number

// https://www.codechef.com/LTIME93C/problems/SMOL

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
  
    while (t--){
        int n, k;
        cin >> n >> k;
        if (k==0)
            cout << n << endl;
        else
            cout << n%k << endl;
  }
}
