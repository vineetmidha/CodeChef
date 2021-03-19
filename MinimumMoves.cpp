// https://www.codechef.com/problems/SALARY

#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc; 
	cin >> tc;
	
	while (tc--){
	    int n;
	    cin >> n;
	    
	    int min = INT_MAX;
        int salary;
        int sum = 0;
        
	    for (int i=0; i<n; i++){
	        cin >> salary;
	        sum += salary;
	        if (salary < min) min = salary;
	    }
	    
	    cout << sum - min*n << endl;
	}
	return 0;
}

Solution-2
	
int main() 
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,max = 0,count = 0;
        cin>>n;
        long long int arr[n];
        for(i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(i = 0;i<n;i++)
        {
            count = count + (arr[i] - arr[0]);
        }
        cout<<count<<endl;
    }
	return 0;
}
