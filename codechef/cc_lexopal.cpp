#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
using namespace std;

int main() {
	//freopen("in","r",stdin);
	int t;
	scanf("%d",&t);

	while(t--) {
		string s;
		cin >> s;

		int slen = s.length();
		int mid = slen/2;
		int add=0;
		bool isPalindrome = true;

		if((slen % 2 != 0) && s[mid] == '.') {
			s[mid] = 'a';
		}

		for(int i=0, j=slen-1; i<mid; i++, j--) {
			if(s[i] == '.' && s[j] == '.') {
				s[i] = 'a';
				s[j] = 'a';
			}
			else if(s[i] == '.') {
				s[i] = s[j];
			}
			else if(s[j] == '.') {
				s[j] = s[i];
			}
			else if(s[i] != s[j]) {
				isPalindrome = false;	
				break;
			}
		}
		if(isPalindrome == true) cout << s << endl;
		else cout << "-1" << endl;
	}
}