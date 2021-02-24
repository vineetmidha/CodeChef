// https://www.codechef.com/submit/HS08TEST

#include<iostream>
#include<iomanip>
 
using namespace std;
 
int main()
{
	int n;
	float bal;
	cin>>n>>bal;
	if (n % 5 == 0 && n <= bal-0.50)
	{
		bal = bal - n - 0.50;
	}
	cout.setf(ios::fixed);
	cout << setprecision(2) << bal;
	return 0;
} 

