#include<bits/stdc++.h>

using namespace std;

bool check = false;

string s = "";

void sinh(int a[], int n) {
	s = "";
	bool ok = false;
	int i = n - 1;
	while(i > 0 && a[i] > a[i+1]) i--;
	if(i > 0) {
		int k = n;
		while(a[k] < a[i]) k--;
		if(k > i) {
			ok = true;
			swap(a[i], a[k]);
			int r = i + 1, s = n;
			while(r <= s) {
				swap(a[r], a[s]);
				r++;
				s--;
			}
		}
		
	for(int i = 1; i <= n; i++) {
		s += to_string(a[i]);
	}
	}
	if(ok == false) check = true;
}

//void in(int a[], int n) {
//	for(int i = 1; i <= n; i++) {
//		cout << a[i];
//	}
//	cout << " ";
//}

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		cin.ignore();
		int a[1005];
		vector<string> v;
		for(int i = 1; i <= n; i++) {
			a[i] = i;
			s += to_string(i);
		}
//		for(int i = n; i >= 1; i--) {
//			s += to_string(i);
//		}
		v.push_back(s);
		while(check == false) {
			sinh(a,n);
			v.push_back(s);
		}
		for(int i = v.size() - 2; i >= 0; i--) {
			cout << v[i] << " ";
		}
		cout << endl;
		check = false;
		s = "";
	}
}
