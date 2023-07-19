#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int &i : a) cin >> i;
	sort(a,a+n,greater<int>());
	cout << max((a[0]*a[1]*a[2]),(a[0]*a[n-1]*a[n-2]));
	return 0;
}
