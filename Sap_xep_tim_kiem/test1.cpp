#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {
	if(a%2==0 && b%2==0) {
		return a > b;
	}
	else if(a%2!=0 && b%2!=0) {
		return a < b;
	}
	else return a < b;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	vector<int> c;
	vector<int> l;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a,a+n,cmp);
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
