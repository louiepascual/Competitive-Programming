#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main() {
	string s;
	cin >> s;

	int slen = s.length();
	bool tp = true;
	if(slen < 26) {
		tp = false;
	}
	else {
		tp = true;
		string tt;
		for(int i=0; i<slen-25; i++) {
			string t = s.substr(i,26);
			map<char,int> freq;
			vector<int> ind;
			tp = true;

			for(int j=0; j<t.length(); j++) {
				freq[t[j]]++;
				if(freq[t[j]] > 1 && t[j] != '?') {
					tp = false;
					break;
				} 

				if(t[j] == '?')
					ind.push_back(i+j);
			}

			if(tp == false) continue;

			// ispossible
			vector<char> ch;
			ch.clear();

			for(int j=(int)('A'); j<=(int)('A'+26); j++) {
				char c = (char)j;

				if(freq[c] == 0) 
					ch.push_back(c);
			}

			for(int j=0; j<ind.size(); j++) {
				s[ind[j]] = ch[j];
			}

			break;

		}

		for(int i=0; i<s.length(); i++) {
			if(s[i] == '?') s[i] = 'A';
		}
	}

	cout << (tp == true ? s : "-1") << endl;
}