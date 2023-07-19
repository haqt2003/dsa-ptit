#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long sum1 = 0, sum2 = 0;
		long long n;
		cin >> n;
		long long a[n];
		for(long long i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a,a+n);
		if(n % 2 == 0) {	
			for(long long i = 0; i < n; i+=2) {
				sum1 = sum1*10 + a[i];
				sum2 = sum2*10 + a[i+1]; 
			}
		}
		else {
			for(long long i = 0; i < n - 1; i+=2) {
				sum1 = sum1*10 + a[i];
				sum2 = sum2*10 + a[i+1]; 
			}
			sum1 = sum1*10 + a[n-1];
		}
		cout << sum1 + sum2 << endl;
	}
	return 0;
}
