// uva11136 - hoax or what
// https://uva.onlinejudge.org/external/111/11136.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
#include <set>
using namespace std;

int main() {
	int t;
	while(scanf("%d",&t)) {
		if(t == 0) break;

		multiset<long long> urn;
		urn.clear();

		int n;
		long long totalCost = 0;
		while(t--) {
			scanf("%d",&n);
			
			long long foo;
			while(n--) {
				scanf("%lld",&foo);
				urn.insert(foo);
			}
			multiset<long long>::iterator high = urn.end();
			multiset<long long>::iterator low = urn.begin();
			high--;
			
			totalCost += (*high - *low);

			urn.erase(high);
			urn.erase(low);
			
		}

		printf("%lld\n",totalCost);
	}
}