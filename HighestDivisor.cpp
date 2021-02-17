// February Long Challenge

// Q-1: Highest Divisor

// https://www.codechef.com/FEB21A/problems/HDIVISR

int main() {

    int n;
    cin >> n;
    
    for (int i=10; i>=1; i--){
        if (n%i==0){
            cout<<i<<endl;
            break;
        }
    }
	return 0;
}
