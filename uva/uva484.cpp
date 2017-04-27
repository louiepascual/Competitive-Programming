// uva484 - the department of redudancy department
// https://uva.onlinejudge.org/external/4/484.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int main() {
	map<int,int> foo;
	vector<int> bar;
	int t;

	while(cin >> t) {
		if(foo[t] == 0)
			bar.push_back(t);

		foo[t]++;
	}

	for(int i=0; i<bar.size(); i++)
		printf("%d %d\n",bar[i],foo[bar[i]]);
}