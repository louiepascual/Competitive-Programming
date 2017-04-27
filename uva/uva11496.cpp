// uva11496 - musical loop
// https://uva.onlinejudge.org/external/114/11496.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int h[10005];
char foo[10005];

int main() {
	int n;
	while(scanf("%d",&n)) {
		if(n == 0) break;

		for(int i=0; i<n; i++)
			scanf("%d",&h[i]);
		
		h[n] = h[0];

		for(int i=0; i<n; i++) {
			if(h[i] > h[i+1])
				foo[i] = 'l';
			else
				foo[i] = 'g';
		}

		int ct = 1;
		for(int i=0; i<n-1; i++) {
			if(foo[i] != foo[i+1])
				ct++;
		}
		
		if(foo[0] == foo[n-1])
			ct--;

		printf("%d\n",ct);
	}

}