#include<bits/stdc++.h>

using namespace std;

int a[1005] = {0};
bool check = false;
vector<string> v;

void sinh(int n) {
	bool ok = false;
	for(int i = n; i >= 1; i--) {
		if(a[i] == 0) {
			a[i] = 1;
			for(int j = i + 1; j <=n; j++) {
				a[j] = 0;
			}
			ok = true;
			break;
		}
	}
	if(ok == false) check = true;
}

bool ex(int n) {
	int cnt0 = 0, cnt1 = 0;
	for(int i = 1; i <= n; i++) {
		if(a[i] == 0) {
			cnt0++;
			cnt1 = 0;
		}
		else {
			cnt1++;
			cnt0 = 0;
		}
	if(cnt0 > 1 || cnt1 > 3) return false;
	}
	return true;
}

void in(int n) {
	if(ex(n) && a[1] == 0 && a[n] == 1) {
		int dem = 0;
		for(int i = 1; i <= n; i++) {
			dem++;
		}
		if(dem == n) {
			string s = "";
			for(int i = 1; i <= n; i++) {
				switch (a[i]) {
					case 0:
						s += "8";
						break;
					case 1:
						s += "6";
						break;
				}
			}
			v.push_back(s);
		}
	}
}

//void in(int n) {
//	
//}

int main(){
	int n;
	cin >> n;
	if(n >= 6) {
		while(check == false) {
			in(n);
			sinh(n);
		}
		for(int i = v.size() - 1; i >= 0; i--) {
			cout << v[i] << endl;
		}
	}
}
