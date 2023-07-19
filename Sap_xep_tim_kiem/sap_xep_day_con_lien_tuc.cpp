#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		vector<int> v;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			v.push_back(a[i]);
		}
		sort(a,a+n);
		int r,s;
		for(int i = 0; i < n; i++) {
			if(a[i] != v[i]) {
				r = i;
				break;
			}
		}
		for(int i = n-1; i > r; i--) {
			if(a[i] != v[i]) {
				s = i;
				break;
			}
		}
		cout << r+1 << " " << s+1 << endl;
	}
}
