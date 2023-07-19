#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n][n];
		for(int j = 0; j < n; j++) {
			cin >> a[0][j];
		}
		int k = n - 1;
		for(int i = 1; i < n; i++) {
			for(int j = 0; j < k; j++) {
				a[i][j] = a[i-1][j] + a[i-1][j+1];
			}
			k--; 
		}
		k = 1;
		for(int i = n - 1; i >= 0; i--) {
			cout << "[";	
			for(int j = 0; j < k - 1; j++) {
				cout << a[i][j] << " ";
			}
			cout << a[i][k - 1] << "] ";
			k++;
		}
		cout << endl;
	}
	return 0;
}
