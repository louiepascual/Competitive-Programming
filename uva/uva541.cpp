// uva541 - error correction
// https://uva.onlinejudge.org/external/5/541.pdf
// Runtime: O(n^2), ~10k operations

#include <iostream>
#include <cstdio>
#include <cstring>

int a[101][101];

int main() {
	int n;
	while(scanf("%d",&n)) {
		if(n == 0) break;

		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				scanf("%d",&a[i][j]);

		int sum = 0, x = 0, y = 0;
		int foo = 0, bar = 0;
		for(int i=0; i<n; i++) {
			sum = 0;
			for(int j=0; j<n; j++) 
				sum += a[i][j];

			if(sum % 2 != 0) {
				x = i;
				foo++;
			} 
		}

		for(int j=0; j<n; j++) {
			sum = 0;
			for(int i=0; i<n; i++) 
				sum += a[i][j];

			if(sum % 2 != 0) {
				y = j;
				bar++;
			} 
		}

		if(foo > 1 || bar > 1)
			printf("Corrupt\n");
		else if(foo == 1 && bar == 1)
			printf("Change bit (%d,%d)\n",x+1,y+1);		
		else
			printf("OK\n");	
	}
}