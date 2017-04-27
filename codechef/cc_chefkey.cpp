// codechef - chefkey
// https://www.codechef.com/OCT16/problems/CHEFKEY

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,m,c;
		scanf("%d %d %d",&n,&m,&c);

		int count = 0;
		if(n > m) swap(n,m);
		for(int i=1; i<=m; i++) {
			if(c % i == 0) {
				int j = c/i;
				if(i <= n && j <= m)
					count++;
			}
		}
		printf("%d\n",count);
	}
}
