#include<bits/stdc++.h>

using namespace std;

void nhap(long long a[], long long n) {
	for(long long i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n,m,k;
		cin >> n >> m >> k;
		long long a[n], b[m], c[k];
		nhap(a,n);
		nhap(b,m);
		nhap(c,k);
		long long l1 = 0, l2 = 0, l3 = 0;
		bool ok = false;
		while(l1 < n && l2 < m && l3 < k) {
			if(a[l1] == b[l2] && b[l2] == c[l3]) {
				ok = true;
				cout << a[l1] << " ";
				l1++;l2++;l3++;
			}
			else if(a[l1] < b[l2]) l1++;
			else if(b[l2] < c[l3]) l2++;
			else l3++;
		}
		if(ok == false) cout << "NO";
		cout << endl;
	}
	return 0;
}
