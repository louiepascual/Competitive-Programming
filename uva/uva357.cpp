// uva357 - let me count the ways
// https://uva.onlinejudge.org/external/3/357.pdf

#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
typedef long long ll;
ll S[5] = {1,5,10,25,50};

int change(int n, int m) {
	if(n == 0)
		return 1;
	if(n < 0 || m < 0)
		return 0;

	return change(n,m-1) + change(n-S[m],m);
}

ll table[40000][5];

ll dpchange(ll n, ll m) {
	for(int i=0; i<m; i++)
		table[0][i] = 1;

	for(int i=1; i<n+1; i++) {
		for(int j=0; j<m; j++) {
			ll x,y;

			if(j == 0) {
				y = 0;
			}
			else {
				y = table[i][j-1];
			}

			if(i-S[j] >= 0) {
				x = table[i-S[j]][j];
			}
			else {
				x = 0;
			}

			table[i][j] = x + y;
		}
	}

	return table[n][m-1];
}

int main() {
	int n;
	while(cin >> n) {
		ll ways = dpchange(n,5);

		if(ways == 1)
			printf("There is only 1 way to produce %d cents change.\n", n);
		else
			printf("There are %lld ways to produce %d cents change.\n", ways, n);
	}
}