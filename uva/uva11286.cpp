// uva11286 - conformity 
// https://uva.onlinejudge.org/external/112/11286.pdf

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int main() {
	int n;
	while(cin >> n) {
		if(n == 0) break;

		map<string,int> bar;
		int maxsz = -1;
		for(int i=0; i<n; i++) {
			string s = "";
			vector<string> foo(5);

			for(int j=0; j<5; j++)
				cin >> foo[j];

			sort(foo.begin(), foo.end());

			for(int j=0; j<5; j++)
				s += foo[j];

			bar[s]++;
			maxsz = max(maxsz,bar[s]);
		}

		int tot = 0;
		for(map<string,int>::iterator it=bar.begin(); it!=bar.end(); it++) {
			if(it->second == maxsz) {
				tot += it->second;
			}
		}

		cout << tot << endl;
		

	}
}