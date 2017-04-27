// uva11849 - cd
// https://uva.onlinejudge.org/external/118/11849.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
#include <set>
using namespace std;

int main() {
	int n,m;
	while(scanf("%d %d",&n,&m)) {
		if(n == 0 && m == 0) break;

		set<long long> cd;
		long long t;
		for(int i=0; i<n; i++) {
			cin >> t;
			cd.insert(t);
		}

		int yy = 0;
		for(int i=0; i<m; i++) {
			cin >> t;

			if(cd.find(t) != cd.end())
				yy++;
		}

		printf("%d\n",yy);
	}
}