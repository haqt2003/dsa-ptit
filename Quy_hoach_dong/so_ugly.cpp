#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		long long a[n+1];
		a[1] = 1;
		long long u2 = 1, u3 = 1, u5 = 1;
		for(long long i = 2; i <= n; i++) {
			a[i] = min(a[u2] * 2, min(a[u3] * 3, a[u5] * 5));
			if(a[i] == a[u2] * 2) {
				u2+=1;
			}
			if(a[i] == a[u3] * 3) {
				u3+=1;
			}
			if(a[i] == a[u5] * 5) {
				u5+=1;
			}
		}
		cout << a[n] << endl;
	}
	return 0;
}
