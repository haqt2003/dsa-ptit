#include<bits/stdc++.h>

using namespace std;

bool check = false;

void sinh(int a[], int n) {
	bool ok = false;
	for(int i = n - 1; i >= 0; i--) {
		if(a[i] == 0) {
			a[i] = 1;
			ok = true;
			for(int j = i + 1; j < n; j++) {
				a[j] = 0;
			}
			break;
		}
	}
	if(ok == false) check = true; 
}

bool tn(int a[], int n) {
	for(int i = 0; i < n; i++) {
		if(a[i] != a[n-i-1]) return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	int a[n] = {0};
	while(check == false) {
		if(tn(a,n)) {
			for(int i = 0; i < n; i++) {
				cout << a[i] << " ";
			}
			cout << endl;
		}
		sinh(a,n);
	}
}
