#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 1; i < n; i++) {
			int j = i - 1, key = a[i];
			while(j >= 0 && abs(a[j] - x) > abs(key - x)) {
				a[j+1] = a[j];
				j--;
			}
			a[j+1] = key;
		}
		for(int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
}


