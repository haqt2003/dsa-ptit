#include<bits/stdc++.h>

using namespace std;

void nhap(long long a[], long long n){
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n1, n2, n3;
		cin >> n1 >> n2 >> n3;
		long long a[n1],b[n2],c[n3];
		nhap(a,n1);
		nhap(b,n2);
		nhap(c,n3);
		bool ok = false;
		long long l1 = 0, l2 = 0, l3 = 0;
		while(l1 < n1 && l2 < n2 && l3 < n3) {
			if(a[l1] == b[l2] && b[l2] == c[l3]) {
				ok = true;
				cout << a[l1] << " ";
				l1++;l2++;l3++;
			}
			else if(a[l1] < b[l2]) l1++;
			else if(b[l2] < c[l3]) l2++;
			else l3++;
		}
		if(ok == false) cout << -1 << endl;
		else {
			cout << endl;
		}
	}
	return 0;
}
