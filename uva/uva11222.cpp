// uva11222 - only i did it!
// https://uva.onlinejudge.org/external/112/11222.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int ans[10005];

void outputVector(int id,vector<int> bar) {
	int sz = bar.size();
	printf("%d %d",id,sz);
	sort(bar.begin(),bar.end());

	for(int i=0; i<sz; i++) {
		printf(" %d",bar[i]);
	}
	puts("");
}

int main() {
	int t;
	scanf("%d",&t);
	for(int c=1; c<=t; c++) {
		memset(ans,0,sizeof(ans));
		vector<int> a;
		vector<int> b;
		vector<int> k;

		int s;
		for(int i=1; i<=3; i++) {
			scanf("%d",&s);
			int foo;
			for(int j=0; j<s; j++) {
				scanf("%d",&foo);
				if(ans[foo] == 0)
					ans[foo] = i;
				else if(ans[foo] != i)
					ans[foo] = -1;
			}	
		}

		for(int i=0; i<10001; i++) {
			if(ans[i] == 1)
				a.push_back(i);
			else if(ans[i] == 2)
				b.push_back(i);
			else if(ans[i] == 3)
				k.push_back(i);	
		}

		int maxsz;
		maxsz = max(max(a.size(),b.size()),k.size());

		printf("Case #%d:\n",c);
		if(a.size() == maxsz)
			outputVector(1,a);
		if(b.size() == maxsz)
			outputVector(2,b);
		if(k.size() == maxsz)
			outputVector(3,k);
		
	}
}