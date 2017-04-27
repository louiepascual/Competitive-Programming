// uva10082 - WERTYU
// https://uva.onlinejudge.org/external/100/10082.pdf

#include <iostream>
#include <map>
#include <cctype>
using namespace std;

map<char,char> c;

int main() {
	c['1'] = '`';
	c['2'] = '1';
	c['3'] = '2';
	c['4'] = '3';
	c['5'] = '4';
	c['6'] = '5';
	c['7'] = '6';
	c['8'] = '7';
	c['9'] = '8';
	c['0'] = '9';
	c['-'] = '0';
	c['='] = '-';

	c['W'] = 'Q';
	c['E'] = 'W';
	c['R'] = 'E';
	c['T'] = 'R';
	c['Y'] = 'T';
	c['U'] = 'Y';
	c['I'] = 'U';
	c['O'] = 'I';
	c['P'] = 'O';
	c['['] = 'P';
	c[']'] = '[';
	c['\\'] = ']';

	c['S'] = 'A';
	c['D'] = 'S';
	c['F'] = 'D';
	c['G'] = 'F';
	c['H'] = 'G';
	c['J'] = 'H';
	c['K'] = 'J';
	c['L'] = 'K';
	c[';'] = 'L';
	c['\''] = ';';

	c['X'] = 'Z';
	c['C'] = 'X';
	c['V'] = 'C';
	c['B'] = 'V';
	c['N'] = 'B';
	c['M'] = 'N';
	c[','] = 'M';
	c['.'] = ',';
	c['/'] = '.';

	c[' '] = ' ';

	string s;
	while(getline(cin,s)) {
		for(int i=0; i<s.length(); i++)
			cout << c[s[i]];
		cout << endl;
	}
}


