#include<bits/stdc++.h>

using namespace std;

vector<string> v;

bool check = false;

void sinh(int a[], int n) {
	bool ok = false;
	for(int i = n; i >= 1; i--) {
		if(a[i] == 0) {
			a[i] = 1;
			for(int j = i+1; j <= n; j++) {
				a[j] = 0;
			}
			ok = true;
			break;
		}
	}
	if(ok == false) check = true;
	string tmp="";
	for(int i = 1; i <= n; i++) {
		tmp+=to_string(a[i]);
	}
	v.push_back(tmp);
	
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		v.clear();
		int n;
		cin >> n;
		int a[n+5];
		for(int i = 1; i <= n; i++) {
			a[i] = 0;
		}
		while(check == false) {
			sinh(a,n);
		}
		sort(v.begin(),v.end());
		for(auto x : v) {
			cout << x << " ";
		}
		cout << endl;
		check = false;
	}
	return 0;
}

//000, 001, 011, 010, 110, 111, 101, 100
//000, 001, 010, 011, 100, 101, 110, 111
