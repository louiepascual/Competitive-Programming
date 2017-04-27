// uva11608 - no problem
// https://uva.onlinejudge.org/external/116/11608.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int foo[12];
int bar[12];

int main() {
	int s, Case = 0;
	while(scanf("%d",&s)) {
		if(s < 0) break;

		printf("Case %d:\n",++Case);

		for(int i=0; i<12; i++)
			scanf("%d",&foo[i]);
		for(int i=0; i<12; i++)
			scanf("%d",&bar[i]);

		for(int i=0; i<12; i++) {
			if(s < bar[i])
				printf("No problem. :(\n");
			else {
				printf("No problem! :D\n");
				s -= bar[i];
			}
			s += foo[i];
		}
	}

}