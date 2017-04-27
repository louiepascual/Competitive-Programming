// uva10260 - soundex
// https://uva.onlinejudge.org/external/102/10260.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char k[100];

int main() {
	k['B'] = '1'; k['F'] = '1'; k['P'] = '1'; k['V'] = '1';
	k['C'] = '2'; k['G'] = '2'; k['J'] = '2'; k['K'] = '2'; 
	k['Q'] = '2'; k['S'] = '2'; k['X'] = '2'; k['Z'] = '2'; 
	k['D'] = '3'; k['T'] = '3'; 
	k['L'] = '4'; 
	k['M'] = '5'; k['N'] = '5'; 
	k['R'] = '6';

	string s;
	while(cin >> s) {
		string t = "";
		char d = '?';
		for(int i=0; i<s.length(); i++) {
			char c = s[i];
			if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'H' || c == 'W' || c == 'Y') {
				d = '?';
				continue;
			}
			else if(k[c] != d) {
				t += k[c];
				d = k[c];
			}
		}
		cout << t << endl;
	} 
}