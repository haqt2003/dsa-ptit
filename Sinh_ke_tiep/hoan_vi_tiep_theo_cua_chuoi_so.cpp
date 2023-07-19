#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		int n;
		cin >> n;
		cin >> s;
		if(next_permutation(s.begin(), s.end()) == 0) {
			cout << n << " " << "BIGGEST";
		}
		else {
			cout << n << " " << s; 
		}
		cout << endl;
	}
	return 0;
}
