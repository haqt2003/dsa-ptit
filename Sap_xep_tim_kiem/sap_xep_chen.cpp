#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	multiset<int> s;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		s.insert(a[i]);
		cout << "Buoc " << i << ": ";
		for(int x : s) {
			cout << x << " ";
		}
		cout << endl;
	}
}
