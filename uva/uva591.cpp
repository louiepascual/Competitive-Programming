// uva591 - box of bricks
// https://uva.onlinejudge.org/external/5/591.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int a[55];

int main() {
	int n;
	int j = 1;
	while(scanf("%d",&n)) {
		if(n == 0) break;

		memset(a,0,sizeof(a));
		int ave = 0;
		for(int i=0; i<n; i++) {
			scanf("%d",&a[i]);
			ave += a[i];
		}
		ave /= n;

		int moves = 0;
		for(int i=0; i<n; i++) {
			if(a[i] > ave)
				moves += (a[i] - ave);
		}

		printf("Set #%d\n",j++);
		printf("The minimum number of moves is %d.\n\n",moves);


	}
}