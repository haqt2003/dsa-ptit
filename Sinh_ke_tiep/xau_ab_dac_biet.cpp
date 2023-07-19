#include<bits/stdc++.h>

using namespace std;

int n, k;
int a[101];
vector<string> v;

void print() {
	int cnt = 0, res = 1;
	for(int i = 1; i <= n; i++) {
		if(a[i] == 1) {
			cnt++;
			if(cnt > k) return;
			else if(cnt < k && a[i+1] == 0) {
				cnt = 0;
			}
			else if(cnt == k && a[i+1] == 0) break;
		}	
		
	}
	if(cnt == k) {
		string s = "";
		for(int i = 1; i <= n; i++) {
			if(a[i] == 1) {
				s += "A";
			}
			else {
				s += "B";
			}
		}
		v.push_back(s);
	}
}

void Try(int i) {
	for(int j = 0; j <= 1; j++) {
		a[i] = j;
		if(i == n) print();
		else Try(i+1);
	}
}

int main() {
	v.clear();
	cin >> n >> k;
	Try(1);
	sort(v.begin(), v.end());
	cout << v.size() << endl; 
	for(auto x : v) {
		cout << x << endl;
	}
	return 0;
}
