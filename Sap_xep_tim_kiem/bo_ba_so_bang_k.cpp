#include<bits/stdc++.h>

using namespace std;

string ktr(long long a[], long long n, long long k) {
	for(long long i = 0; i < n - 2; i++) 
		for(long long j = i + 1; j < n - 1; j++) 
			if((upper_bound(a+j+1,a+n,k - a[i] - a[j])-a) != (lower_bound(a+j+1,a+n,k-a[i]-a[j])-a)) {
				return "YES";
			}
	return "NO";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n, k;
		cin >> n >> k;
		long long a[n];
		for(long long &i : a) cin >> i;
		sort(a,a+n);
		cout << ktr(a,n,k);
		cout << endl;
	}
	return 0;
}
