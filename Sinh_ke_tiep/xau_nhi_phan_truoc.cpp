#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		for(int i = s.size() - 1; i >= 0; i--) {
			if(s[i] == '0') {
				s[i] = '1';
			}
			else {
				s[i] = '0';
				break;
			}
		}
		cout << s << endl;
    }	
}

	
		
			
				