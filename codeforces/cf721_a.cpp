// cf721_a - One-dimensional Japanese Crossword
// http://codeforces.com/contest/721/problem/A

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <cmath>
#include <cctype>
#include <algorithm>
using namespace std;

char foo[105];
char bar[105];

int main() {
	int n;
	scanf("%d",&n);
	scanf("%s",foo);

	int ct = 0;
	bool flag = false;
	for(int i=0; i<n; i++) {
		if(foo[i] == 'B') {
			if(flag == false)
				ct++;

			bar[ct]++;
			flag = true;
		}
		else {
			flag = false;
		}

	}

	printf("%d\n",ct);
	for(int i=1; i<=ct; i++) {
		printf("%d ",bar[i]);
	}
	if(ct != 0)
		printf("\n");
		

}