// uva10252 - common permutation
// https://uva.onlinejudge.org/external/102/10252.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <cmath>
using namespace std;

#define INF 1e30

typedef long long ll;

int foo[26];
int bar[26];

int main() {
	string a,b;
	string s;
	while(getline(cin,a)) {
		getline(cin,b);
		memset(foo, 0, sizeof(foo));
		memset(bar, 0, sizeof(bar));

		for(int i=0; i<a.length(); i++)
			foo[a[i]-'a']++;

		for(int i=0; i<b.length(); i++)
			bar[b[i]-'a']++;

		for(int i=0; i<26; i++) {
			if(foo[i] != 0 && bar[i] != 0)
				for(int j = 0; j<min(foo[i],bar[i]); j++)
					cout << (char)('a'+i);
		}
		cout << endl;
	}
}