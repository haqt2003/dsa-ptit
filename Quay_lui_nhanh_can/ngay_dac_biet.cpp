#include<bits/stdc++.h>

using namespace std;

bool check = false;
vector<string> v;

void sinh(int a[], string s) {
	bool ok = false;
	for(int i = 8; i >= 1; i--) {
		if(a[i] == 0) {
			a[i] = 2;
			ok = true;
			for(int j = i + 1; j <= 8; j++) {
				a[j] = 0;
			}
			break;
		}
	}
	if(!(a[5] == 0 || (a[1] == 0 && a[2] == 0) || (a[3] == 0 && a[4] == 0) || a[3] == 2)) {
		for(int i = 1; i <= 2; i++) s += to_string(a[i]);
		s += "/";
		for(int i = 3; i <= 4; i++) s += to_string(a[i]);
		s += "/";
		for(int i = 5; i <= 8; i++) s += to_string(a[i]);
	}
	if(s.length() > 0) {
		v.push_back(s);
	}
	if(ok == false) check = true;
}

int main() {
	int a[100001] = {0};
	while(check == false) {
		sinh(a,"");
	}
	sort(v.begin(), v.end());
	for(auto x : v) {
		cout << x << endl;
	}
	return 0;
}


