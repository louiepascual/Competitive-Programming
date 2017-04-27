// uva10226 - hardwood species
// https://uva.onlinejudge.org/external/102/10226.pdf

#include <iostream>
#include <cstdio>
#include <map>
#include <cctype>
using namespace std;

typedef map<string,double> msd;

int main() {
	int n;
	string s;

	cin >> n;
	 // disregard blank line b/w n and test cases
	
	getline(cin,s);
	getline(cin,s);
	while(n--) {
		msd foo;
		int sz = 0;
		while(getline(cin,s)) {
			if(s == "\n" || s == "") break;
			foo[s] += 1.0;
			sz++;
		}

		for(msd::iterator it=foo.begin(); it!=foo.end(); it++) {
			printf("%s %0.4f\n",(it->first).c_str(), ((it->second)/sz) * 100);
		}

		if(n) cout << endl;
	}
}