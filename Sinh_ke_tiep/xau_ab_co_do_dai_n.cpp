#include<bits/stdc++.h>

using namespace std;

bool check = false;

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
	for(int i = 1; i <= n; i++) {
		if(a[i] == 0) {
			cout << 'A';
		}
		else {
			cout << 'B';
		}
	}
	cout << " ";
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[1005] = {0};
		while(check == false) {
			in(a,n);
			sinh(a,n);
		}
		cout << endl;
		check = false;
	}
}
