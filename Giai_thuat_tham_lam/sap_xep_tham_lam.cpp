 #include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i <n; i ++) {
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b,b+n);
		int max = b[0] + b[n-1];
		bool check = false;
		for(int i = 0; i < n /2; i++) {
			if(a[i] + a[n-i-1] != max) {
				check = true;
				break;
			}
		}
		if(check == false) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
