#include<bits/stdc++.h>

using namespace std;

bool check(char c) {
	return (c == 'A' || c == 'E');
}

bool ok(string s) {
	for(int i = 0; i < s.length(); i++) {
		if(check(s[i])) {
			if(i == 0 || i == s.length() - 1) continue;
			if(!check(s[i-1]) && !check(s[i+1])) return 0;
		}
	}
	return 1;
}

int main() {
	string s = "ABC";
	char c;
	cin >> c;
	for(char i = 'D'; i <= c; i++) s += i;
	do{
		if(ok(s)) {
			cout << s << endl;
		}
	}while(next_permutation(s.begin(), s.end()));
	return 0;
}
