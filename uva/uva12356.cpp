// uva12356.cpp - army buddies
// https://uva.onlinejudge.org/external/123/12356.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int lft[100005];
int rgt[100005];

int main() {
	int s,b;
	while(scanf("%d %d",&s,&b) != EOF) {
		if(s == 0 && b == 0) break;
		memset(lft,0,sizeof(lft));
		memset(rgt,0,sizeof(rgt));

		for(int i=1; i<=s; i++) {
			lft[i] = i-1;
			rgt[i] = i+1;
		}

		int l,r;
		for(int i=0; i<b; i++) {
			scanf("%d %d",&l,&r);
			if(lft[l] < 1 && rgt[r] > s)
				printf("* *\n");
			else if(lft[l] < 1)
				printf("* %d\n",rgt[r]);
			else if(rgt[r] > s)
				printf("%d *\n",lft[l]);
			else
				printf("%d %d\n",lft[l],rgt[r]);
			
			// update left and right buddies
			// the new right buddy of l's left buddy is r's right buddy
			// the new left buddy of r's right buddy is l's left buddy
			lft[rgt[r]] = lft[l];
			rgt[lft[l]] = rgt[r];


		}

		printf("-\n");
	}
}