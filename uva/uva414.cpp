// uva414 - machine surfaces
// https://uva.onlinejudge.org/external/4/414.pdf
// runtime: O(n)

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int rows[15];
char c[25];

int main() {
	int n;
	while(cin >> n) {
		if(n == 0) break;

		memset(rows,0,sizeof(rows));
		int foo = 9999;
		cin.ignore();
		for(int i=0; i<n; i++) {
			fgets(c,30,stdin);
			int len = strlen(c);

			for(int j=0; j<len; j++) {
				if(c[j] == ' ')
					rows[i]++;
			}
			foo = min(rows[i],foo);
		}

		int bar = 0;
		for(int i=0; i<n; i++)
			bar += rows[i] - foo;

		printf("%d\n",bar);
	}
}