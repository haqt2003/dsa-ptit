#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--) {
		long long n, k;
		cin >> n >> k;
		long long a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int cnt = 0;
		for(int i = 0; i < n-1; i++) {
			for(int j = i + 1; j < n; j++) {
				if(a[i] + a[j] == k) {
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}
