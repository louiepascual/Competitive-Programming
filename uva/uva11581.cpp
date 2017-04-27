// uva11581 - grid successors
// https://uva.onlinejudge.org/external/115/11581.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int f(int g[3][3], int i) {
	if(g[0][0] == 0 && g[0][1] == 0 && g[0][2] == 0 &&
	   g[1][0] == 0 && g[1][1] == 0 && g[1][2] == 0 &&
	   g[2][0] == 0 && g[2][1] == 0 && g[2][2] == 0) {
		return i;
	}
	else {
		int t[3][3] = {0};
		t[0][0] = (g[0][1] + g[1][0]) % 2;
		t[0][1] = (g[0][0] + g[1][1] + g[0][2]) % 2;
		t[0][2] = (g[0][1] + g[1][2]) % 2;
		t[1][0] = (g[0][0] + g[1][1] + g[2][0]) % 2;
		t[1][1] = (g[0][1] + g[1][0] + g[1][2] + g[2][1]) % 2;
		t[1][2] = (g[0][2] + g[1][1] + g[2][2]) % 2;
		t[2][0] = (g[1][0] + g[2][1]) % 2;
		t[2][1] = (g[2][0] + g[1][1] + g[2][2]) % 2;
		t[2][2] = (g[1][2] + g[2][1]) % 2;

		return f(t,++i);
	}
}

int main() {
	int n;
	scanf("%d",&n);

	while(n--) {
		int g[3][3] = {0};

		char foo[5];
		for(int i=0; i<3; i++) {
			scanf("%s",foo);
			for(int j=0; j<3; j++) {
				if(foo[j] == '0') 
					g[i][j] = 0;
				else 
					g[i][j] = 1;
			}
		}

		cout << f(g,-1) << endl;
			

	}
}