#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int k = 1;
	for(int i = 0; i < n - 1; i++) {
		int min = i;
		cout << "Buoc " << k++ << ": ";
		for(int j = i + 1; j < n; j++) {
				if(a[j] < a[min])  min = j;	
		}
				swap(a[min],a[i]);
		for(int j = 0; j < n; j++) {
			cout << a[j] << " ";
		}
		cout << endl;
	}
}


