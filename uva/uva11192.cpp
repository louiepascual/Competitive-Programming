// uva11192 - group reverse
// https://uva.onlinejudge.org/external/111/11192.pdf
// Runtime: O(2n)

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char s[105];

int main() {
	int g;
	while(scanf("%d",&g)) {
		if(g == 0) break;

		memset(s,0,sizeof(s));
		scanf("%s",s);	

		int slen = strlen(s);
		int k = slen/g;

		for(int i=0; i<slen; i+=k) {
			for(int j=k-1; j>=0; j--)
				printf("%c",s[j+i]);
		}
		printf("\n");

	}
}