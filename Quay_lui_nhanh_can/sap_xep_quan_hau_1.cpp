#include<bits/stdc++.h>

using namespace std;

int n;
int cnt = 0;
int a[100], c[100],x[100],ng[100];

void Try(int i) {
	for(int j = 1; j <= n; j++) {
		if(c[j] && x[i+j-1] && ng[i-j+n]) {
			a[i] = j;
			c[j] = x[i+j-1] = ng[i-j+n] = false;
			if(i == n) {
				cnt++;
			}
			else {
				Try(i+1);
			}
			c[j] = x[i+j-1] = ng[i-j+n] = true;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cnt = 0;
		cin >> n;
		for(int i = 1; i <= n; i++) c[i] = true;
		for(int i = 1; i < n*2; i++) {
			x[i] = true;
			ng[i] = true;
		}
		Try(1);
		for(int i = 1; i <= n; i++) {
			cout << a[i] << " ";
		}
		cout << cnt << endl;
	}
	return 0;
}
