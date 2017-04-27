// uva755 - 487-3279
// https://uva.onlinejudge.org/external/7/755.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <cctype>
#include <string>
#include <map>
using namespace std;

char foo[256];

int main() {
	foo['A'] = '2'; foo['B'] = '2'; foo['C'] = '2';
	foo['D'] = '3'; foo['E'] = '3'; foo['F'] = '3';
	foo['G'] = '4'; foo['H'] = '4'; foo['I'] = '4';
	foo['J'] = '5'; foo['K'] = '5'; foo['L'] = '5';
	foo['M'] = '6'; foo['N'] = '6'; foo['O'] = '6';
	foo['P'] = '7'; foo['R'] = '7'; foo['S'] = '7';
	foo['T'] = '8'; foo['U'] = '8'; foo['V'] = '8';
	foo['W'] = '9'; foo['X'] = '9'; foo['Y'] = '9';

	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);

		string s;
		map<string,int> num;
		while(n--) {
			cin >> s;

			string bar;
			for(int i=0; i<s.length(); i++) {
				if(s[i] == '-') 
					continue;
				else if(isalpha(s[i]))
					bar += foo[s[i]];
				else
					bar += s[i];
			}
			bar = bar.substr(0,3) + "-" + bar.substr(3,4); 
			num[bar]++;
		}

		bool duplicates = false;
		for(map<string,int>::iterator it=num.begin(); it != num.end(); it++) {
			if(it->second > 1) {
				cout << it->first << " " << it->second << endl;
				duplicates = true;
			}
		}

		if(duplicates == false)
			cout << "No duplicates." << endl;

		if(t != 0)
			cout << endl;
	}
}