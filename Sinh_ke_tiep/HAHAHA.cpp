#include<bits/stdc++.h>

using namespace std;

bool check = false;

set<string> se;

void sinh(int a[], int n) {
	bool ok = false;
	for(int i = n; i >= 1; i--) {
		if(a[i] == 0){
			a[i] = 1;
			for(int j = i + 1; j <= n; j++) {
				a[j] = 0;
			}
			ok = true;
			break;
		}
	}
	if(ok == false) check = true;
} 

void in(int a[], int n) {
	string s = "";
	for(int i = 1; i <= n; i++) {
		if(a[1] == 0 && a[n] == 1 && a[i] + a[i+1] > 0) {
			s += to_string(a[i]);
		}             
	}
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '0') {
			s[i] = 'H';
		}
		else {
			s[i] = 'A';
		}
	}
	if(s.size() == n) {
		se.insert(s);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		se.clear();
		int a[1005] = {0};
		int n;
		cin >> n;
		while(check == false) {	
			in(a,n);
			sinh(a,n);
		}
		for(string x : se) cout << x << endl;
		check = false; 
	}
}
