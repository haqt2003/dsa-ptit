#include<bits/stdc++.h>

using namespace std;

bool test(int a[], int n) {
	if(binary_search(a,a+n,0)) return false;
	return true;
}

bool check(int a[], int n) {
	if(test(a,n)) {
		
	bool ok = false;
	for(int i = 0; i < n - 1; i++) {
		if((abs(a[i+1] - a[i])) == 1) {
			ok = true;
			break;
		}
	}
	if(ok == false) {
		return true;
	}
	else{
		return false;
	}
	}
	
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	int n;
	cin >> n;
	int a[n];
	int k = 1;
	for(int i = 0; i < n; i++) {
		a[i] = k++;
	}
	do {
		if(check(a,n)) {
			for(int i = 0; i < n; i++) {
				cout << a[i];
			}
			cout << endl;
		}
	}while(next_permutation(a,a+n));
	}
	return 0;
}
