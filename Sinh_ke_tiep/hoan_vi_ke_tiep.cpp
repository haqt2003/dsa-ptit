#include<bits/stdc++.h>

using namespace std;

int a[1005];

void sinh(int n) {
	int i = n - 1;
	while(i > 0 && a[i] >= a[i+1]) i--;
	if(i > 0) {
		int k = n;
		while(a[k] < a[i]) k--;
		swap(a[i], a[k]);
		int r = i + 1, s = n;
		while(r <= s) {
			swap(a[r], a[s]);
			r++;
			s--;
		}
	}
	else {
		int r = 1, s = n;
		while(r <= s) {
			swap(a[r], a[s]);
			r++;
			s--;
		}
	}
}

void in(int n) {
	for(int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		sinh(n);
		in(n);
	}
}



