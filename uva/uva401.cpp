// UVa 401 - Palindromes
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

string reverse(string s) {
	int slen = s.length();
	string t;
	for(int i=slen-1; i>=0; i--)
		t += s[i];
	return t;
}

map <char, char> m;
string mirror(string s) {
	string t;
	for(int i=0; i<s.length(); i++) {
		t += m[s[i]];
	}
	return t;
}

int main() {
	string s;
	
	m['A'] = 'A';
	m['E'] = '3';
	m['H'] = 'H';
	m['I'] = 'I';
	m['J'] = 'L';
	m['L'] = 'J';

	m['M'] = 'M';
	m['O'] = 'O';
	m['S'] = '2';
	m['T'] = 'T';
	m['U'] = 'U';
	m['V'] = 'V';
	m['W'] = 'W';
	m['X'] = 'X';

	m['Y'] = 'Y';
	m['Z'] = '5';
	m['1'] = '1';
	m['2'] = 'S';
	m['3'] = 'E';
	m['5'] = 'Z';
	m['8'] = '8';

	while(cin >> s) {
		bool palindrome = false;
		bool mirrored = false;

		int slen = s.length();
		if(slen % 2 == 0) {
			if(s.substr(0,slen/2) == reverse(s.substr(slen/2, slen/2)))
				palindrome = true;

			if(s.substr(0,slen/2) == reverse(mirror(s.substr(slen/2, slen/2))))
				mirrored = true;

		}
		else {
			if(s.substr(0,slen/2) == reverse(s.substr(slen/2 + 1, slen/2)))
				palindrome = true;

			if(s.substr(0,slen/2) == reverse(mirror(s.substr(slen/2 + 1, slen/2)))
				&& 
				(
				s[slen/2] == 'A' || s[slen/2] == 'H' || s[slen/2] == 'I' ||
				s[slen/2] == 'M' || s[slen/2] == 'O' || s[slen/2] == 'T' ||
				s[slen/2] == 'U' || s[slen/2] == 'V' || s[slen/2] == 'W' ||
				s[slen/2] == 'X' || s[slen/2] == 'Y' || s[slen/2] == '1' ||
				s[slen/2] == '8'))
				mirrored = true;

		}

		if(mirrored && palindrome)
			printf("%s -- is a mirrored palindrome.\n\n",s.c_str());
		else if(mirrored)
			printf("%s -- is a mirrored string.\n\n",s.c_str());
		else if(palindrome)
			printf("%s -- is a regular palindrome.\n\n",s.c_str());
		else
			printf("%s -- is not a palindrome.\n\n",s.c_str());
	}
}
// 2A3MEAS
// abccba
// abcgcba