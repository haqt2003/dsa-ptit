#include<bits/stdc++.h>

using namespace std;

bool check = false;

void sinh(int a[], int n) {
	bool ok = false;
	int i = n - 1;
	while(i > 0 && a[i] > a[i+1]) i--;
	if(i > 0) {
		int k = n;
		while(a[k] < a[i]) k--;
		if(k > i) {
			ok = true;
			swap(a[i], a[k]);
			int r = i + 1, s = n;
			while(r <= s) {
				swap(a[r], a[s]);
				r++;
				s--;
			}
		}
	}
	if(ok == false) check = true;
}

void in(int a[], int n) {
	for(int i = 1; i <= n; i++) {
		cout << a[i];
	}
	cout << " ";
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[1005];
		for(int i = 1; i <= n; i++) {
			a[i] = i;
		}
		while(check == false) {
			in(a,n);
			sinh(a,n);
		}
		cout << endl;
		check = false;
	}
}
