// uva1062 - containers
// https://uva.onlinejudge.org/external/10/1062.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	vector< stack<char> > foo;
	string s;
	int Case = 0;

	while(cin >> s) {
		if(s == "end") break;
		foo.clear();
		
		stack<char> yy;
		yy.push(s[0]);
		foo.push_back(yy);

		bool nostack;
		for(int i=1; i<s.length(); i++) {
			nostack = true;

			for(int j=0; j<foo.size(); j++) {
				char top = foo[j].top();
				//cout << s[i] << " " << top << " "  << buffer[top] << endl;
				if((s[i] <= top)) {
					foo[j].push(s[i]);
					nostack = false;
					break;
				} 
			}

			if(nostack == true) {
				stack<char> t;
				t.push(s[i]);
				foo.push_back(t);
			}
		}

		printf("Case %d: %d\n",++Case,(int)foo.size());

	}
}