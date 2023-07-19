#include<bits/stdc++.h>

using namespace std;


int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int k = 1;
	for(int i = 0; i < n - 1; i++) {
		bool ok = false;
		for(int j = 0; j < n - i - 1; j++) {
			if(a[j] > a[j+1]) {
				swap(a[j],a[j+1]);
				ok = true;
			}
		}
		if(ok == false) {
			continue;
		}
		cout << "Buoc " << k++ << ": ";
		for(int j = 0; j < n; j++) {
			cout << a[j] << " ";
		}
		cout << endl;
	}
	return 0;
}
